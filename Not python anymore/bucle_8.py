def bucle_8():
    print " ******************* "
    print " * PARES O IMPARES * "
    print " ******************* "
    print "Hasta que numero quieres contar :"
    nfinal=input("numero= ")
    #Definimos una variable para contar los pares
    numero_pares=0#inicializamos una variable a cero
    #Definimos otra variable para contar los impares
    numero_impares=0##inicializamos una variable a cero
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero), "es PAR"
            numero_pares=numero_pares+1
        else:
             print str(numero), "es IMPAR"
             numero_impares=numero_impares+1
    print "he contado ",numero_pares, "numeros pares"
    print "he contado ",numero_impares, "numeros impares "
        
bucle_8()            
