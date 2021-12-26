def init():
    t = input("Enter the text:  ")
    while len(t) >= 60:
        t = input("This text is too long, enter another one: ")
    return t

def process(A, N):
    flag = True
    result = ""
    while flag:
        for i in range(0, N):
            if flag:
                A[i] += ' '
                if str_size(A, N) >= 60:
                    flag = False

    for j in range(0, N):
        result += A[j]

    return result


def str_size(A, N):
    string_size = 0
    for i in range(0, N):
        string_size += len(A[i])

    return string_size

text = init()
A = text.split()
N = len(A)
result = process(A, N)
counter = result.count(' ')
print(result +'\n\n' + "Amount of gaps: " + str(counter))
