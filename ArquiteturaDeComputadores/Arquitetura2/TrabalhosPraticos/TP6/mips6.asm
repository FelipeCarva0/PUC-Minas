#// programa 6
#{
#x = o maior inteiro possível;
#y = 300000;
#z = x - 4y
#}
not $s4, $zero
srl $s4, $s4, 1

ori $s0, $zero, 25000
sll $s0, $s0, 2 #100000
add $s1, $s0, $s0
add $s3, $s0, $s1 

sll $s3, $s3, 2
sub $s5, $s4, $s3 




