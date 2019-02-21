# Este programa sirve para 
def programa():
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    num3 = float(input("Enter third number: "))
    num4 = float(input("Enter four number: "))
    num5 = float(input("Enter five number: "))
    num6 = float(input("Enter six number: "))
    num7 = float(input("Enter seven number: "))
    num8 = float(input("Enter eight number: "))
    num9 = float(input("Enter nine number: "))
    num10 = float(input("Enter ten number: "))
    if (num1 <= num2) and (num1 <= num3) and (num1 <= num4) and (num1 <= num5) and (num1 <= num6) and (num1 <= num7) and (num1 <= num8) and (num1 <= num9) and (num1 <= num10):
        x = num1
    else:
        if (num2 <= num1) and (num2 <= num3) and (num2 <= num4) and (num2 <= num5) and (num2 <= num6) and (num2 <= num7) and (num2 <= num8) and (num2 <= num9) and (num2 <= num10):
            x = num2
        else:
            if (num3 <= num1) and (num3 <= num2) and (num3 <= num4) and (num3 <= num5) and (num3 <= num6) and (num3 <= num7) and (num3 <= num8) and (num3 <= num9) and (num3 <= num10):
                x = num3
            else:
                if (num4 <= num1) and (num4 <= num2) and (num4 <= num3) and (num4 <= num5) and (num4 <= num6) and (num4 <= num7) and (num4 <= num8) and (num4 <= num9) and (num4 <= num10):
                    x = num4
                else:
                    if (num5 <= num1) and (num5 <= num2) and (num5 <= num3) and (num5 <= num4) and (num5 <= num6) and (num5 <= num7) and (num5 <= num8) and (num5 <= num9) and (num5 <= num10):
                        x = num5
                    else:
                        if (num6 <= num1) and (num6 <= num2) and (num6 <= num3) and (num6 <= num4) and (num6 <= num5) and (num6 <= num7) and (num6 <= num8) and (num6 <= num9) and (num6 <= num10):
                            x = num6
                        else:
                            if(num7 <= num1) and (num7 <= num2) and (num7 <= num3) and (num7 <= num4) and (num7 <= num5) and (num7 <= num6) and (num7 <= num8) and (num7 <= num9) and (num7 <= num10):
                                x = num7
                            else:
                                if(num8 <= num1) and (num8 <= num2) and (num8 <= num3) and (num8 <= num4) and (num8 <= num5) and (num8 <= num6) and (num8 <= num7) and (num8<= num9) and (num8 <= num10):
                                    x = num8
                                else:
                                    if(num9 <= num1) and (num9 <= num2) and (num9 <= num3) and (num9 <= num4) and (num9 <= num5) and (num9 <= num6) and (num9 <= num7) and (num9<= num8) and (num9 <= num10):
                                        x = num9
                                    else:
                                        if(num10 <= num1) and (num10 <= num2) and (num10 <= num3) and (num10 <= num4) and (num10 <= num5) and (num10 <= num6) and (num10 <= num7) and (num10<= num8) and (num10 <= num9):
                                            x = num10
    print "",x


programa()
