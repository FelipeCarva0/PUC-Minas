#//programa 1 (add, addi, sub, lógicas)
#{
#a =2;
#b =3;
#c =4;
#d =5;
#x = (a+b) - (c+d);
#y = a – b + x;
#b = x – y;
#}

ori $t1, $zero, 2 #a =2;
ori $t2, $zero, 3 #b =3;
ori $t3, $zero, 4 #c =4;
ori $t4, $zero, 5 #d =5;

add $s0, $t1, $t2 #a+b
add $s1, $t3, $t4 #c+d
sub $s3, $s0, $s1 #$s3 = x
sub $s4, $t1, $t2
add $s4, $s4, $s3
sub $t2, $s3, $s4




