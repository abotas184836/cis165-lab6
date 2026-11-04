# cis165-lab6

BMI tests: weight in pounds, height in inches
| Inputs: weight, height | Expected result | Actual result | Match or correction |
| -------- | -------- | -------- | -------- |
| 100, 70 | 14.35 — Underweight| 14.35 — Underweight| Match|
| 150, 70 | 21.52 — Optimal weight| 21.52 — Optimal weight| Match|
| 200, 70 | 28.69 — Overweight| 28.69 — Overweight| Match|
| 150, 0 | Error: weight and height must be positive.| Error: weight and height must be positive.| Match|
| -150, 70 | Error: weight and height must be positive.| Error: weight and height must be positive.| Match|

<br>

Color Mixer tests
| Inputs: first color, second color | Expected result | Actual result | Match or correction |
| -------- | -------- | -------- | -------- |
| red, blue | purple| purple| Match|
| red, yellow | orange| orange| Match|
| blue, yellow | green| green| Match|
| blue, red | purple| purple| Match|
| yellow, red | orange| orange| Match|
| yellow, blue | green| green| Match|
| orange, blue | Error: enter red, blue, or yellow.| Error: enter red, blue, or yellow.| Match|
| red, orange | Error: enter red, blue, or yellow.| Error: enter red, blue, or yellow.| Match|

<br>
1. How does the BMI formula use pounds and inches? Why is height * height needed?<br>The BMI formula multiplies weight by a conversion factor of 703, then divides it by the height squared. Since there is no function for squaring numbers in C++, I instead simply multiply the number by itself to get the same result.<br><br>
2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.<br>A BMI of 18.5 and 25.0 are both treated as optimal. Order of conditions matter as they are evaluated from top to bottom, one condition being met skips the rest. My conditions avoid gaps by checking if BMI is less than 18.5, then if they are greater than or equal to 18.5 and less than or equal to 25.0, before then checking if they are greater than 25.0. It avoids gaps by being inclusive of 18.5 and 25.0. <br><br>
3. Why do you check weight and height before calculating BMI?<br>I check that the value for weight and height aren't zero, as it is impossible for someone to have zero height or weight.<br><br>
4. Why do you classify the unrounded BMI and round only its displayed value?<br>Classifying the unrounded BMI and only rounding its displayed value preserves the actual BMI in memory while still outputting a more readable value.<br><br>
5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents?<br>A character array evaluates to a memory address, using == on two character arrays compares their memory addresses, not their contents.<br><br>
6. How do you make each mixture work in either input order and handle two identical primary colors?<br>I check each color for both first and second input. Two identical colors will result in the same color.<br><br>
7. How do you check for an invalid color in either input position?<br>I check if either input position is not red, blue, or yellow, then throw an error.<br><br>
8. How do named constants and result variables make your programs easier to read and check?<br>Named constants and result variables can tell you what the values represent, make updating easier, and prevent typos.<br><br>

The programs can be run using the following terminal, ran separately for each.

```
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
./bmi

g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
./color_mixer
```
