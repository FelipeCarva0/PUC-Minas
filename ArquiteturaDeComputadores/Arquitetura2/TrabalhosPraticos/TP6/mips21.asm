#//programa 21
#y = x^3 + 1 se x > 0
#y = x^4 - 1 se x <= 0
#Os valores de x devem ser lidos da primeira posição livre da memória e o valor de y deverá ser escrito na segunda posição livre.

.data
M: .word 3

.text
.globl main
main:

    la  $s0, M
    lw  $s1, 0($s0)

    slt  $t0, $zero, $s1
    beq  $t0, $zero, caso2

    mult $s1, $s1
    mflo $t2
    mult $t2, $s1
    mflo $t3
    addi $t3, $t3, 1
    sw   $t3, 4($s0)
    j fim

caso2:
    mult $s1, $s1
    mflo $t2
    mult $t2, $s1
    mflo $t3
    mult $t3, $s1
    mflo $t4
    addi $t4, $t4, -1
    sw   $t4, 4($s0)

fim:



