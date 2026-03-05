#// programa 15:
#Escrever um programa que crie um vetor de 100 elementos na memória onde vetor[i] = 2*i +
#1. Após a última posição do vetor criado, escrever a soma de todos os valores armazenados
#do vetor.
#Use o MARS para verificar a quantidade de instruções conforme o tipo (ULA, Desvios, Mem ou
#Outras)

.data
vetor: .space 400

.text
.globl main
main:

    la    $s0, vetor
    addi  $t0, $zero, 0
    addi  $s1, $zero, 0
    addi  $t3, $zero, 100

loop:
    slt   $t2, $t0, $t3
    beq   $t2, $zero, fim

    sll   $t1, $t0, 1
    addi  $t1, $t1, 1

    sw    $t1, 0($s0)
    add   $s1, $s1, $t1

    addi  $s0, $s0, 4
    addi  $t0, $t0, 1

    j     loop

fim:
    sw    $s1, 0($s0)

    addi  $v0, $zero, 10
