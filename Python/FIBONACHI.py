def FIBONACHI(x):
    a, b = 0, 1
    for i in range(x - 2):
        b += a
        a = b - a
    return b

x = int(input("Введите номер числа Фибоначчи: "))
print(x, "число Фибоначчи равно:", FIBONACHI(x))
