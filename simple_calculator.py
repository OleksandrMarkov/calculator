# put your python code here
first = float(input())
second = float(input())
op = input()

if op == "+":
    print(first + second)
elif op == "-":
    print(first - second)
elif op == "*":
    print(first * second)
elif op == "/":
    if second == 0:
        print("Деление на 0!")
    else:
        print(first / second)

elif op == "mod":
    if second == 0:
        print("Деление на 0!")
    else:
        print(first % second)

elif op == "pow":
    print(first ** second)

elif op == "div":
    if second == 0:
        print("Деление на 0!")
    else:
        print(first // second)