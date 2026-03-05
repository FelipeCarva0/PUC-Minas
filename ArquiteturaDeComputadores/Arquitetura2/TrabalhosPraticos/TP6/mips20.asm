#//programa 20
#y = x^4 + x^3 - 2x^2 se x for par
#y = x^5 - x^3 + 1 se x for impar
#Os valores de x devem ser lidos da primeira posição livre da memória e o valor de y deverá ser escrito na segunda posição livre.

.data
M: .word 3        # x
.text
.globl main
main:
    la  $s0, M
    lw  $s1, 0($s0)
    andi $t0, $s1, 1
    beq  $t0, $zero, par
impar:
    mult $s1, $s1
    mflo $t2
    mult $t2, $s1
    mflo $t3
    mult $t3, $s1
    mflo $t4
    mult $t4, $s1
    mflo $t5
    sub  $t6, $t5, $t3
    addi $t6, $t6, 1
    sw   $t6, 4($s0)
    j fim
par:
    mult $s1, $s1
    mflo $t2
    mult $t2, $s1
    mflo $t3
    mult $t3, $s1
    mflo $t4
    mult $t2, $s1
    mflo $t7
    sub  $t8, $t4, $t7
    add  $t8, $t8, $t3
    sw   $t8, 4($s0)
fim: