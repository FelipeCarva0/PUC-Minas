#//programa 2 (add, addi, sub, lógicas)
#{
#x = 1;
#y = 5*x + 15;
#}

ori $s0, $zero, 1
add $s1,$s0, $s0 #*2
add $s1,$s1, $s1 #*4
add $s1,$s1, $s0 #*5
addi $s1, $s1, 15





