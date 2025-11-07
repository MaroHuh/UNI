#Section 3 Code
def first_list():
    l = ["Omar", 18 , True, 9.8]
    print(l[0], l[1], l[2], l[3])

def change_list():
    l = ["Omar", 18 , True, 9.8]
    l[1] += 1000
    l[3] += 0.5
    print(len(l[0]), l[1], l[2], l[3])

def append_list():
    l = ["Omar", 18 , True, 9.8]
    appended = input("> ")
    l.append(appended)
    print(l)
#insert specifies the location to insert, append adds to the end of the list
def insert_list():
    l = ["Omar", 18 , True, 9.8]
    inserted = input("> ")
    l.insert(2, inserted)
    print (l)


def delete_list():
    l = ["Omar", 18 , True, 9.8]
    #specific value or specific index
    #l.remove(True)
    #OR
    #l.remove(l[2])
    #or remove the last time in the list
    #l.pop()
    #l.pop() removes items from list using index. " l.pop(2) " removes True
    #non built-in way:
    #deletes variables
    #del l[2]
    #to clear a list entirely, l.clear()
    print(l)

def assignment():
    n = int(input("How Many Variables?\n> "))
    l = []
    i = 0
    while i < n:
        m = input("> ")
        l.append(m)
        i += 1
    print(f"The list is: {l}")
    while True:
       activity = input("Remove / Add / Exit\n> ").strip().lower()
       if activity == "remove":
          while True:
           process = input("Remove:\n item / index / list\n> ").strip().lower()
           if process == "item":
               item = input("> ")
               if item in l:
                  l.remove(item)
                  print(f"The list is: {l}")
                  break
               else:
                  print("Item not in the list")
                  continue
           elif process == "index":
               index = int(input("> ")) - 1
               if index <= len(l):
                  l.pop(index)
                  print(f"The list is: {l}")
                  break
               else:
                   print("Index not in the list")
                   continue
           elif process == "list":
               action = input("Empty / Delete\n>  ").strip().lower()
               if action == "empty":
                   l.clear()
                   print(f"The list is: {l}")
                   break
               elif action == "delete":
                   del l
                   print("The list was deleted")
                   return
           continue
       elif activity == "add":
          insert = input("What to insert?\n> ")
          index = int(input("Where to index?\n>  ")) - 1
          if index > len(l):
              print("Index not in the list")
          else:
              l.insert(index, insert)
              print(f"The list is: {l}")
              continue
       elif activity == "exit":
          break
       else:
          print("Invalid activity")
          continue
       break
assignment()


#-----------------------------------------------------------------------------------------
#random stuff


#number list using lists
def number_list():
 n = int(input("How many numbers?"))
 i = 0
 l = []
 while i < n:
     try:
      m = int(input("Enter a number: "))
      l.append(m)
      i += 1
     except ValueError:
         print("Enter a valid number")
         continue

 for item in l:
     print(item)