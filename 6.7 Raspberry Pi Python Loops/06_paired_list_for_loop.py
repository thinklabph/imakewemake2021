

number_pair_list = [
    [1, 11],
    [2, 12],
    [3, 13],
    [4, 14],
    [5, 15]
]

# Usually what programmers do
for number_pair in number_pair_list:
    number_1 = number_pair[0]
    number_2 = number_pair[1]
    print(number_1, number_2)

# Same for loop with same result
for number_1, number_2 in number_pair_list:
    print(number_1, number_2)