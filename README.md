**Credit Card Vallidator** <br>

Some credit card companies use Luhn algorithm to detect invalid credit card numbers.
The key thing in this algorithm is to find a check digit, which should be the rightmost
digit in any credit card number.
In this task, you have to implement a version of Luhn algorithm using the instructions
given below.
Step1: Read in credit card number as a series of digits into an array
Ask the user to enter series of one digit positive numbers into a one dimensional array,
the number -1 is used to indicate the end of series, no need to read in -1 into the array.
The maximum size of the array is set to 20.
Step2: Find sum1 (main should call a function passing array and size)
Ignoring the last check digit (right most digit) of the credit card number, and moving
left, double the value of every second digit and find the sum of these doubled numbers.
If the result of the doubling operation is a two digit number, you should add the digits of
the doubled number before finding the sum. You must printout the numbers for sum1,
these should be in the order (from left to right) as it appears on credit card.
Step 3: find sum2 (main should call a function passing array and size)
Find the sum of all other numbers (last digit is not included in this sum as well). You
must printout the numbers for sum2, these should be in the order (from left to right) as it
appears on credit card.
Step 4: Calculate check sum
Compute the total of sum1 and sum2 and multiply the result by 9, checksum is found
by extracting the rightmost digit.
Program should display if the credit is valid or not valid at the end. <br>
