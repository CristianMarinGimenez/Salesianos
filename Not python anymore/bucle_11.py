def bucle_11():
    print " ******************* "
    print " * PARES O IMPARES * "
    print " ******************* "
    print "Hasta que numero quieres contar :"
    nfinal=input("numero= ")
    #Definimos una variable para sumar los pares
    suma_pares=0#inicializamos una variable a cero
    #Definimos otra variable para sumar los impares
    suma_impares=0##inicializamos una variable a cero
    for numero in range(1,nfinal+1):
        if(numero%2==0):
            print str(numero), "es PAR"
            suma_pares=suma_pares+numero
        else:
             print str(numero), "es IMPAR"
             suma_impares=suma_impares+numero
    print "he contado ",suma_pares, "numeros pares"
    print "he contado ",suma_impares, "numeros impares "
        
bucle_11()            
