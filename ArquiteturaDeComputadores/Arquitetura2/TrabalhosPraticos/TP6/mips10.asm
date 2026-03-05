#// programa 10
#Considere o seguinte programa: y = 127x – 65z + 1
#Faça um programa que calcule o valor de y conhecendo os valores de x e z. Os valores de x e z
#estão armazenados na memória e, na posição imediatamente a seguir, o valor de y deverá ser escrito, ou seja:
#.data
#x: .word 5
#z: .word 7
#y: .word 0 # esse valor deverá ser sobrescrito após a execução do programa.

.data
x: .word 5
z: .word 7
y: .word 0
.text
.globl main
main:
lw $t0, x
lw $t1, z
sll $t2, $t0, 7
sub $t2, $t2, $t0

sll $t3, $t1, 6
add $t3, $t3, $t1

sub $t4, $t2, $t3 
addi $t4, $t4, 1

sw $t4, y