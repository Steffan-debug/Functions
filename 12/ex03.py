def multiply(numbers):  
    total = 1
    for x in numbers:
        total *= x  
    return total  
print(multiply((5, -2, 3, 7, 6)))