# 0x04. Sandpiles
## Task

###  Sandpiles sum

Write a function that computes the sum of two sandpiles

-   Prototype:  `void sandpiles_sum(int grid1[3][3], int grid2[3][3]);`
-   You can assume that both  `grid1`  and  `grid2`  are individually  **stable**
-   A sandpile is considered  **stable**  when none of its cells contains more than 3 grains
-   When your function is done,  `grid1`  must be  **stable**
-   `grid1`  must be printed before each toppling round, only if it is unstable (See example)
-   You’re not allowed to allocate memory dynamically

#### Expected output using [0-main.c](https://github.com/Titania792/holbertonschool-interview/blob/main/0x04-sandpiles/0-main.c):
```
Titania792@~/0x04-sandpiles$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-sandpiles.c -o 0-sandpiles
Titania792@~/0x04-sandpiles$ ./0-sandpiles 
3 3 3   1 3 1
3 3 3 + 3 3 3
3 3 3   1 3 1
=
4 6 4
6 6 6
4 6 4
=
2 5 2
5 6 5
2 5 2
=
4 2 4
2 6 2
4 2 4
=
0 5 0
5 2 5
0 5 0
=
2 1 2
1 6 1
2 1 2
=
2 2 2
2 2 2
2 2 2
```
#### Expected output using [1-main.c](https://github.com/Titania792/holbertonschool-interview/blob/main/0x04-sandpiles/1-main.c):
```
Titania792@~/0x04-sandpiles$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 0-sandpiles.c -o 0-sandpiles
Titania792@~/0x04-sandpiles$ ./0-sandpiles 
0 0 0   3 3 3
0 0 0 + 3 3 3
0 0 0   3 3 3
=
3 3 3
3 3 3
3 3 3
```

-   File:  [`0-sandpiles.c`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x04-sandpiles/0-sandpiles.c)