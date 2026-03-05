#// programa 3 (add, addi, sub, lógicas)
#{
#x = 3;
#y = 4 ;
#z = ( 15*x + 67*y)*4
#}

ori $s0, $zero, 3
ori $s1, $zero, 4
add $t0, $s0, $s0 #*2
add $t0, $t0, $t0 #*4
add $t0, $t0, $t0 #*8
add $t0, $t0, $t0 #*16
sub $t0, $t0, $s0 #*15

add $t2, $s1, $s1 #*2
add $t1, $t2, $t2 #*4
add $t1, $t1, $t1 #*8
add $t1, $t1, $t1 #*16
add $t1, $t1, $t1 #*32
add $t1, $t1, $t1 #*64
add $t1, $t1, $t2 #*66
add $t1, $t1, $s1

add $t3, $t1, $t0
add $s4, $t3, $t3
add $s4, $s4, $s4


