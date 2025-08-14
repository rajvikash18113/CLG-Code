number = int(input("Enter a number: "))
sum_of_digits = sum(int(digit) for digit in str(number))
print("The sum of the digits is:", sum_of_digits)
