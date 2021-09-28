# Nested if-else statements

number = 3                              # Will print "The number is positive"
# number = -5                           # Will print "The number is negative"
# number = 0                              # Will print "The number is zero"
# number = 11                           # Will print "The number is greater than 10"
# number = 10                           # Will print "The number is less than or equal to 10"

if number > 0:                          # Condition
    print("The number is positive")     # Will print if the number is positive

    if number > 10:
        print("The number is greater than 10")
    else:
        print("The number is less than or equal to 10")

elif number < 0:
    print("The number is negative")     # Will print if the number is negative
else:
    print("The number is zero")         # Will print if the number is zero

print("Number is", number)              # Not indented therefore will always be executed.