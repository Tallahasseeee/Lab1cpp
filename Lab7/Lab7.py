N = 7


def Input(n):
    A = [0] * n
    for i in range(0, n):
        A[i] = float(input())
    return A


def process(*args):
    A = args[0]
    n = args[-1]
    min = A[0]
    max = A[0]
    min_index = 0
    max_index = 0
    for i in range(0, n):
        if A[i] > max:
            max = A[i]
            max_index = i
        elif A[i] < min:
            min = A[i]
            min_index = i
    A[max_index] = min
    A[min_index] = max
    return A


def output(*args):
    print(args)


output(process(Input(N), N))
