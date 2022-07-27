print("Hellow world")
print("*"*100)

course_Name = "Programing with python!!"
print(len(course_Name))
print(course_Name[0:3])
print(course_Name[0:])
print(course_Name[:3])
print(course_Name[:])

# TO represnet comment 

new_Course = "Python \"Programing is fun\" "
print(new_Course)

# Some escape sequences:
# \\ ----> \
# \" ----> "
# \' ----> '
# \n-----> To create new line.

# Formating string
first = "Nayon"
last = "Mazumder"
full = f"{first} {last}"
print(full)


# String method

course = "   python programming "
print(course.upper())
print(course.lower())
print(course.strip())
print(course.find("Pro"))
print(course.replace("p","j"))
print(course.__len__())
print(course.title())
print("Pro" in course)
print("Swift" not in course)

