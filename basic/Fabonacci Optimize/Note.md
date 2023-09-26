# Big O Problems
Caculate the time complexicity of a program.
## Thoughts
1.Big O problem mainly concentrate in how the programming works not how many recursions they have.


### Fabonacci Optimize Problem
Can be optimized in time complexity MIN -->O(N)

Fibonacci数列的时间复杂度取决于采用的计算方法。有多种方法可以计算Fibonacci数列，每种方法都具有不同的时间复杂度。以下是一些常见的方法和它们的时间复杂度：

1. 递归方法：最简单的方法是使用递归来计算Fibonacci数列。但是，这种方法的时间复杂度是指数级的，通常为O(2^n)。这是因为在计算第n个Fibonacci数时，会递归地调用计算第n-1和n-2个Fibonacci数，依此类推，导致指数级的计算量。

2. 动态规划方法：使用动态规划可以大大降低计算Fibonacci数列的时间复杂度。这种方法的时间复杂度为O(n)，其中n是要计算的Fibonacci数的位置。动态规划将中间结果存储在一个数组中，以避免重复计算。

3. 矩阵乘法方法：通过矩阵乘法可以进一步降低时间复杂度，将其降至O(log n)。这种方法利用矩阵乘法的性质来计算Fibonacci数列，但需要一些数学知识和矩阵运算的支持。

总的来说，Fibonacci数列的时间复杂度可以从指数级的O(2^n)降低到线性级的O(n)，甚至进一步降低到对数级的O(log n)，具体取决于所选的计算方法。在实际应用中，应根据具体需求和性能要求选择合适的计算方法。