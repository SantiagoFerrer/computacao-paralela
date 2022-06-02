# computacao-paralela
# MEMBROS: 
#          Lucas Andrew - 32092245
#          Julio Cesar - 32091524
#          Santiago Ferrer - 32035764 
# Instruções:
#
# 1) Como baixar os arquivos?
# O exercicio é encontrado no link "https://github.com/SantiagoFerrer/computacao-paralela/tree/master/projeto_comp_paralela", basta realizar o download.
#
# 2) Como compilar os programas?
# 
# 2a) Arquivo Taylor_series_projeto (serial):
# Para compilar o programa o seu computador deve ter como sistemma operacional Ubuntu; se for compilar no Windows tem que configurar o GCC como variável de ambiente.
# Quando configurado, baixar Ubuntu na microsoft store, após isso dar o comando gcc nome_do_arquivo.c, depois digitar o comando ./a.out ou time ./a.out se quiser saber o tempo de execução.
#
# 2b)  Arquivo taylor_series_pthread (2 threads):
# Para compilar o programa o seu computador deve ter como sistemma operacional Ubuntu; se for compilar no Windows tem que configurar o GCC como variável de ambiente.
# Quando configurado, baixar Ubuntu na microsoft store, após isso dar o comando gcc nome_do_arquivo.c -pthread, depois digitar o comando ./a.out ou time ./a.out se quiser saber o tempo de execução.
#
# 2c) Arquivo projetoCompParalela (6 threads):
# Para compilar o programa o seu computador deve ter como sistemma operacional Ubuntu; se for compilar no Windows tem que configurar o GCC como variável de ambiente.
# Quando configurado, baixar Ubuntu na microsoft store, após isso dar o comando gcc nome_do_arquivo.c -fopenmp, depois digitar o comando ./a.out ou time ./a.out se quiser saber o tempo de execução.
#
#
# Dependência:
# Serial:
# ![Captura de tela 2022-05-02 152619](https://user-images.githubusercontent.com/78734407/171719043-63222e72-aa48-415b-a044-e76e6cd45287.png)
# Pthread:
# Da maneira que foi implementado o código tem o problema de que a partir do T(n) com n = 10^6 tem aumento de tempo e resultados com baixa precisão em comparação ao codigo implementado serialmente
# OpenMP:
# Da maneira implementada com 6 threads o código mantém constância nos resultados e tem um speedup de até 4x em números maiores que 10^10, ja entre os valores menores (entre 10 e 10^6) tem um speedup entre 1.25 e 2.
#![image](https://user-images.githubusercontent.com/78734407/171722815-e5d13556-b5bb-45a9-9558-ea6c303f6e70.png)
# Tempos de compilação dos arquivos para dado T(n):
#![image](https://user-images.githubusercontent.com/78734407/171718251-cf931811-000b-4e63-9d2d-157cb3e66c06.png)
