# Bank-Card-Validator
Implementing Luhn's Algorithm to determine the validity of card numbers, per the below. Written in C and Python.

```
 $ python credit.py
Number: 378282246310005
AMEX
```

### Luhn's Algorithm
According to Luhn’s algorithm, you can determine if a credit card number is (syntactically) valid as follows:
```
- Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
- Add the sum to the sum of the digits that weren’t multiplied by 2.
- If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
```

Completed in part of Harvard's [CS50 - Introduction to Computer Science, 2020](https://cs50.harvard.edu/x/2020/).
This was pset6: [credit](https://cs50.harvard.edu/x/2020/psets/6/credit/).
 
