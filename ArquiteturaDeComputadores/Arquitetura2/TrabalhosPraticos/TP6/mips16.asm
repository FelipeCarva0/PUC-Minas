#// programa 16
#Escreva um programa que avalie a expressão: (x*y)/z.
#Use x = 1600000 (=0x186A00), y = 80000 (=0x13880), e z = 400000 (=0x61A80). Inicializar os
#registradores com os valores acima.

.text
.globl main
main:
    addi $s0,$zero,0x186A
    sll  $s0,$s0,8
    addi $s1,$zero,0x1388
    sll  $s1,$s1,4
    addi $s2,$zero,0x61A8
    sll  $s2,$s2,4
    addi $t1,$zero,0
mul:
    beq  $s1,$zero,div
    andi $t0,$s1,1
    beq  $t0,$zero,skip
    add  $t1,$t1,$s0
skip:
    sll  $s0,$s0,1
    srl  $s1,$s1,1
    j    mul
div:
    addi $t2,$zero,0
dloop:
    slt  $t3,$t1,$s2
    bne  $t3,$zero,end
    sub  $t1,$t1,$s2
    addi $t2,$t2,1
    j    dloop

end:
    move $v0,$t2
    addi $v1,$zero,10