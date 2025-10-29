#Section 4-------------------------------------------------

#Data Structures (list [], tuple(), set, dictionary{})
def tup():
    my_tuple = (1,2,3,4,5,6,7,8,9,10)

    #slicing:

    s1 = my_tuple[0:3] #Start:0, End: 3 - 1 = 2
    s2 = my_tuple[3:6] #Start:3, End: 6 - 1 = 5

    print(s1, s2)


'''
this is a multi line comment
.
'''

def dictionary():
    gpa_dict = {
        "Name": "Omar",
        "ID": 2053438,
        "GPA": 4.0,
        "Courses": ["IS", "CS", "Math 1"],
        "Year": 2025
    }
    gpa_dict["Name"] = "Ahmed"
    gpa_dict["height"] = 5
    gpa_dict.update({"GPA": 3.5})
    del gpa_dict["height"]
    gpa_dict.popitem() #deletes the last thing in the dictionary ---> year
    gpa_dict.pop("Courses")

    print(gpa_dict)
    print(f"The Name is {gpa_dict['Name']}, and ID is {gpa_dict['ID']}, and GPA is {gpa_dict['GPA']}")
    print(len(gpa_dict))
    print(gpa_dict.keys())
    print(gpa_dict.values())
    print(gpa_dict.get("Name"))
    print(gpa_dict["Name"])
dictionary()
#--------------------------------------------------------------








#----------------------------------------------------------