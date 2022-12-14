# 0x03. Minimum Operations
## Task

### Minimum Operations

In a text file, there is a single character  `H`. Your text editor can execute only two operations in this file:  `Copy All`  and  `Paste`. Given a number  `n`, write a method that calculates the fewest number of operations needed to result in exactly  `n`  `H`  characters in the file.

-   Prototype:  `def minOperations(n)`
-   Returns an integer
-   If  `n`  is impossible to achieve, return  `0`

**Example:**

`n = 9`

`H`  =>  `Copy All`  =>  `Paste`  =>  `HH`  =>  `Paste`  =>`HHH`  =>  `Copy All`  =>  `Paste`  =>  `HHHHHH`  =>  `Paste`  =>  `HHHHHHHHH`

Number of operations:  `6`

#### Output expected using [0-main.py](https://github.com/Titania792/holbertonschool-interview/blob/main/0x03-minimum_operations/0-main.py):
```
Titania792@ubuntu:~/0x03-minoperations$ ./0-main.py
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
Titania792@ubuntu:~/0x03-minoperations$

```

-   File:  [`0-minoperations.py`](https://github.com/Titania792/holbertonschool-interview/blob/main/0x03-minimum_operations/0-minoperations.py)