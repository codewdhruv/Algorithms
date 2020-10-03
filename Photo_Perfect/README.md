# Photo Perfect
This is a simple challenge in HackerRank.
 Do check it out [Photo Perfect](https://www.hackerrank.com/contests/the-dakittio-code/challenges/photo-perfect/copy-from/1325709394)

 ## Problem Statement
 While creating the shoe app for Penny, Sheldon being the perfectionist he is wants each photo to be uploaded of a minimum dimension of LxL, where L is length of the side of squares.

Now Sheldon has N photos of various dimensions. Dimension of a photo is WxH, each time Sheldon uploads a photo following events may occur:

[1] If any of the width or height is less than L, user is prompted to upload another one. Print "**UPLOAD ANOTHER**" in this case.

[2] If width and height, both are large enough and

(a) if the photo is already square then it is accepted. Print "**ACCEPTED**" in this case.

(b) else user is prompted to crop it. Print "**CROP IT**" in this case.

Given L, N, W and H as input, print appropriate text as output.

Solution is given in code.cpp.
The input and output format is given in input.txt with examples.

## Constraints
1 <= L,W,H <= 10000 1 <= N <= 1000

## Working
Check for various conditions given in the challenge and print the corresponding text. 