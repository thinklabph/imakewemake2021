# Empty List
empty_list = []
print(empty_list)
print(type(empty_list))

# List of fruits
fruit_list = ["apple", "orange", "pineapple", "banana"]
print(fruit_list)

# Selecting a fruit from the list via index
print(fruit_list[0])        # prints apple
print(fruit_list[2])        # prints pineapple

# Selecting from the end of the list; negative indexes
print(fruit_list[-1])

# Adding an item at the end of the list
fruit_list.append("papaya")
print(fruit_list)

# Adding two lists together
fruit_list = ["apple", "orange", "pineapple", "banana"]
vegetable_list = ["cucumber", "ampalaya", "okra"]

print("fruit_list:", fruit_list)
print("vegetable_list:", vegetable_list)

shopping_list = fruit_list + vegetable_list

print("shopping_list:", shopping_list)

# Inserting an item to a list with location
shopping_list.insert(1, "atis")
print("shopping_list:", shopping_list)

# Removing the last item in the list
removed_item = shopping_list.pop()
print("removed_item:", removed_item)

# Removing a specific item
shopping_list.remove("pineapple")
print("shopping_list:", shopping_list)

# Removing an item in the list based on the index of the item
del shopping_list[3]
print("shopping_list:", shopping_list)

# Emptying a list
shopping_list.clear()
print("shopping_list:", shopping_list)