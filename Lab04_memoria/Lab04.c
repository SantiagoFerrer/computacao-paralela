#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>

int main() {
  int shmid;
  if (( shmid = shmget(0, sizeof(int), IPC_CREAT|
 IPC_EXCL|0664)) == -1) {
    printf("Falha ao criar segmento de memória compartilhada") ;
    exit(1);
  }
  int* valorPai;
  if ((valorPai = shmat(shmid, (void *)0, 0)) == -1){
    printf("Falha ao acoplar segmento de memória no processo pai") ;
    exit(1);
  }
  *valorPai = 1;
  printf ("Valor inicial da variável: %d\n",*valorPai);
  if (fork() == 0){
    int* valorFilho;
    if ((valorFilho = shmat(shmid, (void *)0, 0)) == -1){
    printf("Falha ao acoplar segmento de memória no processo filho") ;
    exit(1);
    }
    *valorFilho = *valorFilho + 2;
  }
  else{
    wait(NULL);
    *valorPai = *valorPai * 4;
    printf("Valor final da variável: %d", *valorPai);
  }
  return 0;
}
