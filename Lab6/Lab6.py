def Input(letter):
    if (letter == 'k'):
        k = input('Enter k: ')
        return k

    elif (letter == 'm'):
        m = input('Enter m: ')
        return m

    elif (letter == 'n'):
        n = input('Enter n: ')
        return n


def squareRoot(a, p, n, degree):
    x = a
    for i in range(0, n):
        x = (1 / p) * (a / pow(x, p - 1) + (p - 1) * x)
    x = pow(x, degree)
    return x


def result(k, m, n):
    y = (factorial(k) / factorial(m)) * squareRoot(k, 3, n, 2) - pow(m, 2) * squareRoot(k, 5, n, 3)
    return y


def factorial(x):
    f = 1
    for i in range(2, x + 1):
        f *= i
    return f


def pow(x, y):
    dob = 1
    for i in range(0, y):
        dob *= x
    return dob
 

k = int(Input('k'))
m = int(Input('m'))
n = int(Input('n'))
print(result(k, m, n))