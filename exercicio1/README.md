# MC723 - Exercicio 1
## Gustavo Basso  RA: 105046

Tempo gasto na execução com cada uma das opções de otimização:


|      | Sem otimização |    O0    |    O1    |    O2    |    O3    |
|:----:|:--------------:|:--------:|:--------:|:--------:|:--------:|
| Real |    0m0.380s    | 0m0.382s | 0m0.314s | 0m0.280s | 0m0.278s |
| User |    0m0.367s    | 0m0.369s | 0m0.301s | 0m0.265s | 0m0.266s |
|  Sys |    0m0.003s    | 0m0.003s | 0m0.003s | 0m0.003s | 0m0.003s |

O melhor tempo registrado foi com a otimização **-O3**: 0m0.278s. 

***-mtune*** são otimizações especificas voltadas a processadores Intel 386 e AMD x86-64, que permitem especificar o processador utilizado pela máquina que vai executar o programa.
Para efeito de teste, usei a opção *generic*. O tempo não mostrou alteração.

Para compilá-los é necessário criar o header de calc_primo.c, alterar o arquivo main.c para importar o novo header e compilar ambos os arquivos fontes (.c) juntos.

Segue o tempo gasto com cada uma das opções de compilação:


|      | Script Um arquivo fonte | Script Dois arquivos fonte | Makefile Um arquivo fonte | Makefile Dois arquivos fonte |
|:----:|:-----------------------:|:--------------------------:|:-------------------------:|:----------------------------:|
| Real |         0m0.280s        |          0m0.318s          |          0m0.279s         |           0m0.312s           |
| User |         0m0.266s        |          0m0.306s          |          0m0.268s         |           0m0.300s           |
|  Sys |         0m0.003s        |          0m0.003s          |          0m0.003s         |           0m0.003s           |

O Makefile e o Script, para o tempo final de execução, não apresentam diferenças de otimização clara. O Makefile poderia fazer diferença em tempo de compilação, uma vez que ele checa que programas precisam ser reconstruídos ou não.

Os tempos com um arquivo fonte foram similares ao do teste anterior, porém o com dois arquivos fontes foi ligeiramente maior. Acredito que a diferença se deu devido a maneira que o programa é estruturado na memória de acordo com os arquivos fontes.

***Testes com o programa que calcula o número de primos de 1 a n***.

Para conseguir um tempo razoável, testei o programa com um valor aproximado de 50000. Os resultados foram o seguinte:

|      | Um arquivo fonte |  Dois arquivos fonte |
|:----:|:----------------:|:--------------------:|
| Real |     0m0.311s     |       0m0.441s       |
| User |     0m0.290s     |       0m0.429s       |
|  Sys |     0m0.003s     |       0m0.003s       |

Como esperado, o programa com dois arquivos fontes demorou mais do que o com apenas um, reforçando os resultados encontrados anteriormente.

***gproof:*** não conegui rodar o gproof. 

Uma maneira possível de paralelizar esse código é paralelizar o teste para checar se um núemro é primo. Ao invés de fazer um a um, seria possível com blocos de números que são conferidos paralelamente.
