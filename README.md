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
1. How does the BMI formula use pounds and inches? Why is height * height needed?
2. How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter? Explain how your conditions avoid gaps and handle both endpoints.
3. Why do you check weight and height before calculating BMI?
4. Why do you classify the unrounded BMI and round only its displayed value?
5. What does strcmp return for equal text? Why is == not the correct comparison for character-array contents? A character array evaluates to a memory address, using == on two character arrays compares their memory addresses, not their contents.
6. How do you make each mixture work in either input order and handle two identical primary colors?
7. How do you check for an invalid color in either input position?
8. How do named constants and result variables make your programs easier to read and check?
