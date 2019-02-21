def condicional_2():
    respuesta=input("cual es tu edad?")
    if(respuesta >=18):
        print "Sala alcoholica"
    else:
        if(respuesta >=15):
            print "Sala adolescentes"
        else:            
            print "Sala infantil"
        
condicional_2()
