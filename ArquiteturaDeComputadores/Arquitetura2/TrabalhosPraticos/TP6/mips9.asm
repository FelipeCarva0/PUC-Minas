#// programa 9
#Considere a memória inicial da seguinte forma:
#.text
#.data
#x1: .word 15
#x2: .word 25
#x3: .word 13
#x4: .word 17
#soma: .word -1
#Escrever um programa que leia todos os números, calcule e substitua o valor da variável soma por este valor.

.data

x1: .word 15
x2: .word 25
x3: .word 13
x4: .word 17
soma: .word -1

.text
.globl main
main:
lw  $t0, x1        # $t0 = 15
lw  $t1, x2        # $t1 = 25
lw  $t2, x3        # $t2 = 13
lw  $t3, x4        # $t3 = 17

add $t4, $t0, $t1
add $t4, $t4, $t2
add $t4, $t4, $t3

sw $t4, soma