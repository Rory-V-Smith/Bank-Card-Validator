# determines whether a provided credit card number is valid according to Luhn's algorithm
import re
import math

# prompts user for credit card number
NUM = int(input("Credit Card number: "))

# check if card is valid using Luhn's Algorithm:

# digitSet1
temp1 = math.trunc(NUM / 10)
sum1 = 0

while temp1 > 1:
    n = (temp1 % 10) * 2
    if n >= 10:
        sum1 += (n % 10) + math.trunc(n / 10)
    else:
        sum1 += n
    temp1 = math.trunc(temp1 / 100)

# digitSet2
temp2 = NUM
sum2 = 0

while temp2 > 1:
    sum2 += temp2 % 10
    temp2 = math.trunc(temp2 / 100)

# assess card validity
total = sum1 + sum2
if total % 10 == 0:
    card = True
else:
    card = False
    print("INVALID")

# Amex: 15 digit; start with 34 or 37
# MasterCard: 16 digit; start with 51,52,53,54,55
# Visa: 13 or 16 digit; start with 4
if card == True:
    num = str(NUM)
    Amex = re.findall("\A[3][4|7]", num)
    MasterCard = re.findall("\A[5][1-5]", num)
    Visa = re.findall("\A4", num)
    if len(num) == 15 and Amex:
        print("AMEX")
    elif len(num) == 16 and MasterCard:
        print("MASTERCARD")
    elif len(num) == 13 or len(num) == 16 and Visa:
        print("VISA")
