#Задача 1

def DEL(a, b):
    print(a // b)
    print(a % b)
    return 0

a, b = int(input()), int(input())
DEL(a,b) #DEL уже функция вывода

#Задача 2

def Sign(x):
    if (x == 0):
        return 0
    elif (x > 0):
        return 1
    else:
        return -1

x = int(input("Введите x: "))
print(Sign(x))

#Задача 3

def PALINDROM(a):
    b = a[::-1]
    if a == b:
        return "Слово являеться палиндромом"
    else:
        return "Слово не является палиндромом"
    
a = input("Введите слово: ")
print(PALINDROM(a))


#Задача 4

def TIME(x):
    if x <= 59:
        print("| 0  дней | 0  часов | 0  минут |", x, " секунд |")
    elif (x > 59 and x <= 3599):
        min = x // 60
        sec = x % 60
        print("| 0  деней | 0  часа |", min, "минут |", sec, " секунд |")
    elif (x > 3599 and x <= 86399):
        h = x // 3600
        min = (x // 60) % 60
        sec = (x % 3600) % 60
        print("| 0  дней |", h,  "час(а) |", min, "минут |", sec, " секунд |")
    else:
        d = x // 86400
        h = (x % 86400) // 3600
        min = (x % 3600) // 60
        sec = (x % 86400) % 60
        print("|", d, "день(дней) |", h, "час(а) |", min, "минут |", sec, " секунд |")


x = int(input("Введите число секунд: "))
TIME(x)

#Задача 5

def FIBONACHI(x):
    a, b = 0, 1
    for i in range(x - 2):
        b += a
        a = b - a
    return b

x = int(input("Введите номер числа Фибоначчи: "))
print(x, "число Фибоначчи равно:", FIBONACHI(x))