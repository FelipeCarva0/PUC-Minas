#// programa 12
#Considere a seguinte situação:
#int ***x;
#onde x contem um ponteiro para um ponteiro para um ponteiro para um inteiro.
#Nessa situação, considere que a posição inicial de memória contenha o inteiro em questão.
#Coloque todos os outros valores em registradores, use os endereços de memória que quiser dentro
#do espaço de endereçamento do Mips.
#Resumo do problema:
#k = MEM [ MEM [MEM [ x ] ] ].
#Crie um programa que implemente a estrutura de dados acima, leia o valor de K, o multiplique por
#2 e o reescreva no local correto conhecendo-se apenas o valor de x.

.data

x:     .word p2        
p2:    .word p1        
p1:    .word value     
value: .word 2         

.text
.globl main

main:
    lw $t0, x      
    
    lw $t1, 0($t0)     

    lw $t2, 0($t1)  

    lw $t3, 0($t2)    

    add $t3, $t3, $t3 

    sw $t3, 0($t2)

