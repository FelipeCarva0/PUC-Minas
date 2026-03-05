#// programa 11
#Considere o seguinte programa: y = x – z + 300000
#Faça um programa que calcule o valor de y conhecendo os valores de x e z. Os valores de x e z
#estão armazenados na memória e, na posição imediatamente a seguir, o valor de y deverá ser
#escrito, ou seja:
#.data
#x: .word 100000
#z: .word 200000
#y: .word 0 # esse valor deverá ser sobrescrito após a execução do programa.

.data
x: .word 100000
z: .word 200000
y: .word 0 

.text
.globl main
main:

lw $t0, x
lw $t1, z

sub $t2, $t0, $t1

ori $t3, $zero, 18750   
sll $t3, $t3, 4         

add $t2, $t2, $t3

sw $t2, y