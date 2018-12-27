# TrocoSimples
Algoritmo em C que dado um valor monetário inteiro, calcula o menor número de cédulas em que esse valor pode ser representado.
As cédulas disponíveis são de 100, 50, 20, 10, 5, 2 e 1.

Pseudocódigo:

Programa Troco

Variaveis
    cem, cinquenta, vinte, dez, cinco, dois, um, troco: inteiro
    
Inicio

    escrever("Digite o valor: ")
    ler(troco)
    cem <- (troco/100)
    cinquenta <- (troco - cem)/50) 
    vinte <- ((troco - cem - cinquenta)/20)
    dez <- ((troco - cem - cinquenta - vinte)/10)
    cinco <- ((troco - cem - cinquenta - vinte - dez)/5)
    dois <- ((troco - cem - cinquenta - vinte - dez - cinco)/2)
    um <- (troco - cem - cinquenta - vinte - dez - cinco - dois)
    escrever("Notas de 100:", cem)
    escrever("Notas de 50:", cinquenta)
    escrever("Notas de 20:", vinte)
    escrever("Notas de 10:", dez)
    escrever("Notas de 5:", cinco)
    escrever("Notas de 2:", dois)
    escrever("Notas de 1:", um)  
    
Fim
