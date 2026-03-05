#// programa 17
#Para a expressão a seguir, escreva um programa que calcule o valor de k:
#k = x * y (Você deverá realizar a multiplicação através de somas!)
#O valor de x deve ser lido da primeira posição livre da memória e o valor de y deverá lido da
#segunda posição livre. O valor de k, após calculado, deverá ainda ser escrito na terceira posição
#livre da memória.

.data 
M: .word 3, 9

.text
.globl main
main:

la $s0, M
lw $s1, 0($s0)
lw $s2, 4($s0)

ori $t0, $zero, 0
ori $t2, $zero, 0

mult:
beq $t0, $s2, skip
add $t2, $t2, $s1
addi $t0, $t0, 1
j mult



skip:
sw $t2, 8($s0) 