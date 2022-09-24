#include <stdio.h>
#include <cs50.h>

int main(void)
{
// get credit card number from user
long num = get_long("Credit number: ");

// retrieve every other number and multiply by two
long sum = 0;
long i = num / 10;
int digit;
while(i)
    {
    digit = (i % 10) * 2;
        if (digit == 10)
        {
            sum += (1 + 0);
        }
        
        if (digit == 12)
        {
            sum += (1 + 2);
        }

        if (digit == 14)
        {
            sum += (1 + 4);
        }

        if (digit == 16)
        {
            sum += (1 + 6);
        }

        if (digit == 18)
        {
            sum += (1 + 8);
        }

        else if (digit < 10 && digit != 0)
        {
            sum += digit;
        }
    i /= 100;
    }

// add this answer to the digits we didn't multiply by 2
int product = 0;
long x = num;
while (x)
    {
        product += (x % 10);
        x /= 100;
    }

// adding the sum of digits multiplied by two to those that weren't
int test;
test = (product + sum);

// AMEX: 15 digits, starts with 34 or 37
// Mastercard: 16 digits, starts with 51-55
// Visa: 13 or 16 digits, starts with 4

//if number is valid
int count;
if (test % 10 == 0)
    {
        for (count = 0; num > 100; count++)
            {
                num = num / 10;
                // AMEX condition
                if ((count == 12) && (num == 34 || num == 37))
                    {
                        printf("AMEX\n");
                    }
                // MasterCard condition
                else if ((count == 13) && (num > 50 && num <= 55))
                    {
                        printf("MASTERCARD\n");
                    }
                // Visa condition
                else if ((count == 10 || count == 13) && (num / 10 == 4))
                    {
                        printf("VISA\n");
                    }
                else
                    {
                        printf("INVALID\n");
                    }
            }
    }
    
// if number is invalid
else if (test % 10 != 0)
    {
        printf("INVALID\n");
    }
    
}
