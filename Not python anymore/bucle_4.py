def bucle_4():
    for i in range(1,101):
        if(i%2==0):
            print str(i)+" , par",
        else:
            print str(i)+" , impar",
        if(i%3==0):
            print ", multiplo de 3"
        print "\n"
bucle_4()        
