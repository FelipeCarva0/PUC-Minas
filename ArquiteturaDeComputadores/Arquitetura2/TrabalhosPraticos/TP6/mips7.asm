#// programa 7
#Considere a seguinte instrução iniciando um programa:
#ori $8, $0, 0x01
#Usando apenas instruções reg-reg lógicas e/ou instruções de deslocamento (sll, srl e
#sra), continuar o programa de forma que ao final, tenhamos o seguinte conteúdo no
#registrador $8:
#$8 = 0xFFFFFFFF

ori $8, $0, 0x01
nor $8, $zero, $zero

