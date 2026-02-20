import random

''' Section 5 ---------------------------------------------------------
If Statements:
'''

def randomNumber():
    while True:
        print("1.Start\n2.End")
        process = input("> ").strip().lower()
        if process == '1':
            print("Pick number from 1-100")
            x = int(input('> '))
            y = random.randint(0,100)
            print(f"Your number is: {x}, computer number is {y}")
            if x > 100 or 0 > x:
                print('Out of range')
                continue
            if y == x:
                print("Won")
            else:
                print("Lost")
        elif process == '2':
            break
        else:
            print('Choose 1/2')

#Even or Odd-------------------------------------------------------------

def EvenOdd():
    while True:
        process = input('1.Start\n2.End')
        if process == '1':
            x = int(input('Number:'))
            Even = []
            Odd = []
            if x % 2 == 0:
                print(f'{x} is Even')
                Even.append(x)
                print(f'Even numbers: {Even}')
            else:
                print(f'{x} is Odd')
                Odd.append(x)
                print(f"Odd numbers: {Odd}")
        elif process == '2':
            break
        else:
            print('Invalid Process (1 / 2)')
            continue
#Score --------------------------------------------------------------
def Score():
    score = int(input('Score: '))
    if score > 100 or 0 > score:
        print('Invalid Score')
    elif score >= 90:
        print('A')
    elif 90 > score >= 80:
        print('B')
    elif 80 > score >= 70:
        print('C')
    elif 70 > score >= 60:
        print('D')
    else:
        print('F')

def switchCases():
    while True:
        x = int(input('Number: '))
