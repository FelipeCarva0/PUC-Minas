#// programa 14:
#Escreva um programa que leia um valor A da memória, identifique se o número é par ou não.
#Um valor deverá ser escrito na segunda posição livre da memória (0 para par e 1 para ímpar).

.data
A: .word 7

.text
.globl main
main:

la $s3, A
lw $s0, A
andi $s1, $s0, 1

beq $s1, 1, IMPAR

IMPAR:

FIM:
sw $s1, 4($s3)