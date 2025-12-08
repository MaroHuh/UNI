# Functions




#counter function

def counter(x,y):
    if x > y:
        one = x
        two = y
        two_orig = y
    else:
        one = y
        two = x
        two_orig = x
    count = 0
    while one > two:
        count = count + 1
        two = two + 1
    print(f"There are {count} numbers between {one} and {two_orig}")

#counter(5,10)
#counter(100,50)
#counter(100,1245)
