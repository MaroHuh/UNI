def add_numbers(num1,num2):
    return num1 + num2
def subtract_numbers(num1,num2):
    return num1 - num2
def multiply_numbers(num1,num2):
    return num1 * num2
def divide_numbers(num1,num2):
    return num1 / num2

while True:
    try:
      n1 = int(input("Enter the first number: "))
    except ValueError:
      print("Enter a number")
      continue
    try:
      n2 = int(input("Enter the second number: "))
    except ValueError:
      print("Enter a number")
      continue
    process = input(" + | - | / | x\n> ")
    if process == "x":
       ans = multiply_numbers(n1,n2)
       print(ans)
    elif process == "+":
        ans = add_numbers(n1,n2)
        print(ans)
    elif process == "-":
        ans = subtract_numbers(n1,n2)
        print(ans)
    elif process == "/":
        ans = divide_numbers(n1,n2)
        print(ans)
    else:
        print("Choose a valid option")
        continue