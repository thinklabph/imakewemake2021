

def do_math(num1_param, num2_param):
    product = num1_param * num2_param

    return {
        "product": product, 
        "num1_param": num1_param, 
        "num2_param": num2_param
    }

returned_product = do_math(4, 2)

print("returned_product:", returned_product)
print("type(returned_product):", type(returned_product))