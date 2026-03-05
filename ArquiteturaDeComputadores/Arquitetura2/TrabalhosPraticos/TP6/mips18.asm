#// programa 18
#Para a expressão a seguir, escreva um programa que calcule o valor de k:
#k = x^y
#Obs: Você poderá utilizar o exercício anterior.
#O valor de x deve ser lido da primeira posição livre da memória e o valor de y deverá lido da
#segunda posição livre. O valor de k, após calculado, deverá ainda ser escrito na terceira posição
#livre da memória.
#Dê um valor para x e y (dê valores pequenos !!) e use o MARS para verificar a quantidade de
#instruções conforme o tipo (ULA, Desvios, Mem ou Outras)

.data 
M: .word 3, 4   # x=3, y=4 (valores pequenos)

.text
.globl main
main:
    la   $s0, M
    lw   $s1, 0($s0)       # x
    lw   $s2, 4($s0)       # y

    ori  $t3, $zero, 1     
    ori  $t4, $zero, 0     

power_loop:
    beq  $t4, $s2, end     
    
    ori  $t0, $zero, 0     
    ori  $t2, $zero, 0     
mult:
    beq  $t0, $t3, skip_mult
    add  $t2, $t2, $s1
    addi $t0, $t0, 1
    j    mult

skip_mult:
    move $t3, $t2          
    addi $t4, $t4, 1       
    j    power_loop

end:
    sw   $t3, 8($s0)       