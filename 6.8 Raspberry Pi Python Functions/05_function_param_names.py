
# Function declaration
def say_hello(name_param, age_param=33):
    print("Hello", name_param)
    print("Your age is", age_param)

# Variable to b used as parameter to the function
name_var = "Michael"
age_var = 24

# Using the function
say_hello(name_param=name_var, age_param=age_var)
say_hello(age_param=age_var, name_param=name_var)

say_hello("Michael", 24)
say_hello("Shishio")


print("This is outside the function")