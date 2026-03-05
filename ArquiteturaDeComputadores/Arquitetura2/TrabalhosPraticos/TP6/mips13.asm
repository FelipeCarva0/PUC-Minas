#// programa 13:
#Para os programas a seguir use instruções de desvio (beq, bne, j)
#Escreva um programa que leia um valor A da memória, identifique se o número é negativo ou
#não e encontre o seu módulo. O valor deverá ser reescrito sobre A.

.data
A: .word 24

.text 
.globl main
main:

lw $t0, A

ori $t2, $zero, 1

srl $t1, $t0, 31

beq $t1, $t2, MODULO

j FIM
MODULO:
sub $t0, $zero, $t0

FIM:
sw $t0, A