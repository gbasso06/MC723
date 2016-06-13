# MC723 - Exercício 4 
Gutavo Rodrigues Basso - RA: 105046

## Atividades Realizadas
### Periférico Base:
Nesta primeira parte, foi realizada uma atividade de escrita/leitura no endereço básico do periférico. A fim de evitar escrita concorrente em um mesmo endereço de memória, foi também implementado um método de controle de acesso através de lock e unlock em hardware (neste caso no periférico).
Ao instanciar um ponteiro para o endereço base do registrador, é necessário garantir que ele aponta para o endereço correto e não apra um outro endereço de memória que pode estar sendo utilizado por outro componente.

### Periférico Base:
Nesta etapa foi declarado um segundo processador. Para tal declaração é importante notar que a inicialização de ambos os processadores devem receber entradas diferentes, apesar de possuirem o mesmo valor, devido a restrições de implementação. Isso pode ser feito através de váriaveis auxiliares.
Segue resultado do teste inicial com dois processadores:
```
-bash-4.3$ ./mips.x --load=hello.mips

        SystemC 2.3.1-Accellera --- Mar 31 2016 17:15:46
        Copyright (c) 1996-2014 by all Contributors,
        ALL RIGHTS RESERVED
ArchC: Reading ELF application file: hello.mips
ArchC: -------------------- Starting Simulation --------------------
ArchC: Reading ELF application file: hello.mips
ArchC: -------------------- Starting Simulation --------------------

READ @ addr: 6400000 data: 0
READ @ addr: 6400000 data: 1
READ @ addr: 6400000 data: 1
READ @ addr: 6400000 data: 1
READ @ addr: 6400000 data: 1
WRITE @ addr: 6400000 data: 0
READ @ addr: 6400000 data: 0
WRITE @ addr: 6400000 data: 0
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
Hi from processor MipsProc0!
ArchC: Address out of bounds (pc=0x4ffbe0).
ArchC: -------------------- Simulation Finished --------------------
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
Hi from processor MipsProc1!
ArchC: -------------------- Simulation Finished --------------------

Info: /OSCI/SystemC: Simulation stopped by user.
ArchC: Simulation statistics
    Times: 0.10 user, 0.00 system, 0.11 real
    Number of instructions executed: 23547
    Simulation speed: 235.47 K instr/s
ArchC: Simulation statistics
    Times: 0.10 user, 0.00 system, 0.11 real
    Number of instructions executed: 1021940
    Simulation speed: 10219.40 K instr/s
```

É possível perceber do resultado impresso, que a operaçào de print demora um tempo razoável, por isso a demora. Uma solução para a impressão sair correta é implementar o lock local, além do em hardware.

Na execução da multiplicação de vetores foi possível constatar os seguintes resultados:
- Número de ciclos no multicore foi menor que no single core, o que já mostra um ganho de desempenho
- o ganho em tempo ocorre, porém é mais notável para aplicações bem grandes

## conclusões finais:
O multicore gera sim ganho de desempenho, porém é importante ressaltar que isso exige um trabalho maior na hora de gerar o código. É preciso se atentar para que o código realmente permita a paralelização e aproveitamento melhor dos dois, ou mais, códigos.