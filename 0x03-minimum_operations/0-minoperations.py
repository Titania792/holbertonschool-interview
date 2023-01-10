#!/usr/bin/python3
""" Method that calculates the fewest number of operations
needed to result in exactly n H characters in the file """


def minOperations(n):
    """ Return sum of process until n H """
    if n < 2 or type(n) is not int:
        return 0
    count = 1
    p_list = []
    while n != 1:
        count += 1
        if n % count == 0:
            while (n % count == 0 and n != 1):
                n /= count
                p_list.append(count)
    return sum(p_list)