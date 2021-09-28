

def do_math(num1_param, num2_param):
    product = num1_param * num2_param
    quotient = num1_param / num2_param

    return product, quotient

returned_product, returned_quotient = do_math(4, 2)

print("returned_product:", returned_product)
print("returned_quotient:", returned_quotient)