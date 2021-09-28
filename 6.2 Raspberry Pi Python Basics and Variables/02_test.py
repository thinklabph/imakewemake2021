# Will not show anything
"Hello World!"

# Will print Hello World in the shell
print("Hello World!")
print(1)
print(4.5)
print(True)


# Variables
greeting = "Hello World!"
print(greeting)
print(type(greeting))

# Variable Naming Rule #1
# Variable names should start with a letter or an underscore

# All small letter variables name
greeting = "Hello World!"
print(greeting)

# Capital letter on the start of the variable name
Greeting = "Hello World!"
print(Greeting)

# All capital letters of the variable name
GREETING = "Hello World!"
print(GREETING)

# Starting character of the variable name is an underscore (_)
_greeting = "Hello World!"
print(_greeting)

# ERROR: semicolon in the start of the variable name
;greeting = "Hello World!"
print(;greeting)

# ERROR: number in the start of the variable name
2greeting = "Hello World!"
print(2greeting)

# Variable Naming Rule #2
# Variable names should not have any punctuation marks or operands in any part of the variable name.

# This will throw an ERROR
greeting% = "Hello World!"
print(greeting%)

# This will throw an ERROR
gree+ing = "Hello World!"
print(gree+ing)

# Numbers in the middle of the variable name is okay.
gree7ing = "Hello World!"
print(gree7ing)

# Variables Naming Rule #3
# Variable Names are case sensitive

# GREETING will not be recognized since variable names are case sensitive
greeting = "Hello World!"
print(GREETING)


# Naming Variables Tips
# - Always use small letters
# - Use descriptive names
# - If variable name has more than 1 word, use underscores to separate each word

# Recommended
water_temperature = 30
print(water_temperature)

# Not recommended
wt = 30
print(wt)

# Recommended
is_water_above_threshold = True
print(is_water_above_threshold)

# Changing the data types of a variable
# Not recommended but possible

random_variable = "Hello"
print(random_variable)
print(type(random_variable))

random_variable = 23
print(random_variable)
print(type(random_variable))

random_variable = True
print(random_variable)
print(type(random_variable))

random_variable = 8.9
print(random_variable)
print(type(random_variable))




