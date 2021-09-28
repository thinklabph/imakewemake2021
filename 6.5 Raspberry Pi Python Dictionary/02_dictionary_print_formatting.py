# Prints the dictionary in an orderly manner

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

import json
print(json.dumps(student, indent=2))