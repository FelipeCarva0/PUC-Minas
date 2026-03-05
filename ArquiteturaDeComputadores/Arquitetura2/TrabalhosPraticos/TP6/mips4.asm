#// programa 4
#{
#x = 3;
#y = 4 ;
#z = ( 15*x + 67*y)*4
#}

ori $s0, $zero, 3       
ori $s1, $zero, 4       


sll $t0, $s0, 4         # t0 = x * 16
sub $t0, $t0, $s0       # t0 = 16*x - x = 15*x


sll $t1, $s1, 6         # t1 = 64*y
sll $t2, $s1, 1         # t2 = 2*y
add $t1, $t1, $t2       # t1 = 64*y + 2*y = 66*y
add $t1, $t1, $s1       # t1 = 66*y + y = 67*y


add $t3, $t0, $t1       # t3 = 15*x + 67*y


sll $s4, $t3, 2         # s4 = (15*x + 67*y)*4
