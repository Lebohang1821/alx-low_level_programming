#!/usr/bin/python3

def is_palindrome(n):
    string_n = str(n)
    return string_n == string_n[::-1]

def find_largest_palindrome_product():
    largest_palindrome = 0
    factors = (0, 0)

    for i in range(999, 99, -1):
        for j in range(i, 99, -1):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product
                factors = (i, j)

    return largest_palindrome, factors

result, factor_pair = find_largest_palindrome_product()

print("Largest Palindromic Product:", result)
print("Factors:", factor_pair)
