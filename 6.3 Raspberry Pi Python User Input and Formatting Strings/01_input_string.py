# input() gets an input from the user in the shell
name = input()
print(name)

# Prints the string inside the input() function before waiting for input from user
name = input("What is your name? ")
print(name)


# Printing two strings together
name = input("What is your name? ")
print("Your name is", name)

# Asking for the age
age = input("What is your age? ")
print(age)

# Erroneous Computation from User input
age = input("What is your age? ")
age_after_10_years = age + 10
print(age_after_10_years)

# Checking the type of user input
age = input("What is your age? ")
print(type(age))
age_after_10_years = age + 10
print(age_after_10_years)

# Converting a string to an integer
age = input("What is your age? ")
print(type(age))
print(type(int(age)))
age_after_10_years = int(age) + 10
print(age_after_10_years)

# Converting a string to a float
age = input("What is your age? ")
print(type(age))
print(type(float(age)))
age_after_10_years = float(age) + 10
print(age_after_10_years)

# Concatenating strings
name = input("What is your name? ")
age = input("What is your age? ")

print(name)
print(age)

output = "Your name is " + name + " and your age is " + age

print(output)


# Formatting String using format() function
name = input("What is your name? ")
age = input("What is your age? ")

print(name)
print(age)

output = "Your name is {}} and your age is {}".format(name, age)

print(output)

# Another way of Formatting String using format() function
name = input("What is your name? ")
age = input("What is your age? ")

print(name)
print(age)

output = "Your name is {}} and your age is {}"

print(output.format(name, age))

# Another another way of Formatting String using format() function
name_input = input("What is your name? ")
age_input = input("What is your age? ")

output = "Your name is {name}} and your age is {age}. Your age again is {age}"

print(output.format(name=name_input, age=age_input))