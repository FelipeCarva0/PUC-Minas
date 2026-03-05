    li $t0, 0xfffff       # valor 1
    li $t1, 0xfffff       # valor 2

    mult $t0, $t1       # multiplicação 32x32 = resultado 64 bits
                        # parte baixa -> LO
                        # parte alta  -> HI

           # copia LO para $t2 (parte baixa)
    mfhi $t3            # copia HI para $t3 (parte alta)


