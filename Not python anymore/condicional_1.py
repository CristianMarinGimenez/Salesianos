def condicional_1():
    nombre=raw_input("Como te llamas: ")
    respuesta=raw_input(nombre + " vienes o te vas?")
    if(respuesta == "voy"):
        print "Hola" + nombre
    else:
        print "Adios " + nombre
        
condicional_1()
