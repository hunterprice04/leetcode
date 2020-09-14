#!/usr/bin/env python3

class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        n_sum = 0
        n_product = 1
        
        while n != 0:
            curr = n % 10
            print(curr)
            n_sum = n_sum + curr
            n_product = n_product * curr
            n = n / 10
        
        return n_product - n_sum
