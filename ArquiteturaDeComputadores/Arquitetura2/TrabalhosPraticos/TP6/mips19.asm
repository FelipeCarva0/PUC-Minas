#// programa 19
#Escrever um programa que leia dois números da memória, a primeira e segunda posições
#respectivamente (os coloque em $s0 e $s1) e determine a quantidade de bits significantes de cada
#um. Coloque as respostas em $t0 e $t1, a partir desse resultado faça a multiplicação. Caso o número
#de bits significantes de ambos seja menor do que 32 a resposta deverá estar apenas em $s2, caso
#contrário a resposta estará em $s2 e $s3 (LO e HI respectivamente).
#Para os exercícios a seguir, considere as variáveis com números abaixo de 16 bits, salvo se
#mencionado ao contrário.

.data
M: .word 30000, 40000

.text
.globl main
main:
    la   $s4, M
    lw   $s0, 0($s4)
    lw   $s1, 4($s4)
    add  $t2, $s0, $zero
    ori  $t0, $zero, 0
contaA:
    beq  $t2, $zero, fimA
    srl  $t2, $t2, 1
    addi $t0, $t0, 1
    j    contaA
fimA:
    add  $t3, $s1, $zero
    ori  $t1, $zero, 0
contaB:
    beq  $t3, $zero, fimB
    srl  $t3, $t3, 1
    addi $t1, $t1, 1
    j    contaB
fimB:
    slti $t4, $t0, 32
    slti $t5, $t1, 32
    and  $t6, $t4, $t5
    beq  $t6, $zero, mult64
    mult $s0, $s1
    mflo $s2
    j    fim
mult64:
    mult $s0, $s1
    mflo $s2
    mfhi $s3
fim: