Q1: Find the maximum number in any of three variables.

```
START 
INPUT Num1, Num2, Num3, Max
IF Num1 > Num2
  THAN Max = Num1
ELSE 
  Max = Num2
IF Num3 > Max
  THAN Max = Num3
PRINT "The Greatest number is:" Max
```

Q2: Take three variables as input and add them without using the + operator (Use your head for this)

```
START
INPUT Num1, Num2, Num3
Sum = -(-Num1-Num2-Num3)
PRINT Sum
```

Q3: Create a small calculator which only does ‘+’ or ‘-‘OperaƟons. (Hint: Take three variable inputs with
one being used for the operator)

```
START
INPUT Num1, Num2
PRINT "Enter 1 to add, Else enter 0 to subtract"
INPUT Op
IF Op == 1
  THAN Result = Num1 + Num2
ELSE
  Result = Num1 - Num2
PRINT "The result is " Result
```

Q4: Implement an algorithm for determining if an Nth is a divisor of an n Number (i.e. 2 is a divisor of 6).
If so, determine if it’s an even number or odd number as well.

```
START
INPUT NTH, n
Checker = n % NTH
IF Checker == 0
  THAN PRINT  NTH "is a divisor of " n
ELSE
  PRINT NTH "is not a divisor of " n
Check = n % 2
IF Check == 0
  THAN PRINT "Even"
ELSE
  PRINT "Odd"

```

Q5: Implement an algorithm where the user enters a number, and an appropriate month is displayed.

```
START
INPUT Num
Month = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
Print Month[Num-1]
```
Q6: Implement an algorithm for making a simple calculator with all the operators (+,-,*,/,%)

```
START
INPUT Num1, Num2
PRINT "What operation do you want to do 'add', 'subtract', 'divide', 'multiply', 'mod'"
INPUT OP
IF OP == 'add'
  Than Result = Num1 + Num2
ELSEIF OP == 'subtract'
  Than Result = Num1 - Num2
ELSEIF OP == 'divide'
  Than Result = Num1 / Num2
ELSEIF OP == 'multiply'
  Than Result = Num1 * Num2
ELSEIF OP == 'mod'
  Than Result = Num1 % Num2
PRINT Result
```












