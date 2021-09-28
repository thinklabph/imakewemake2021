# Empty Dictionary
student = {}
print(student)
print(type(student))

# Dictionary Key Value pairs
student = { "Key": "Value" }
print(student)

# 2 key value pairs
student = { "Name": "Juan Dela Cruz", "Age": 13 }
print(student)

# Accessing a specific value based on the key
print(student["Name"])
print(student["Age"])

# Easier to read if we separate the key-value pairs in separate lines
student = { 
    "Name": "Juan Dela Cruz", 
    "Age": 13 
}

print(student)

# Adding a new key-value pair
student["Home Address"] = "Malaybalay City"
print(student)

# Deleting a key-value pair
del student["Age"]
print(student)

# Adding dictionaries inside a dictionary
student = { 
    "Name": "Juan Dela Cruz", 
    "Age": 13 
}

subject_science = {
    "SubjectName": "Science",
    "Grade": 100
}
subject_math = {
    "SubjectName": "Math",
    "Grade": 99
}

student["Grades"] = [subject_science, subject_math]

print(student)
