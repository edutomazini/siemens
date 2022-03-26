

# exercise 1
<p>Consider the following problem:

<p>Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

<p>For each multiple of 3, print "Foo" instead of the number.
<p>For each multiple of 5, print "Baa" instead of the number.
<p>For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

<p>The ternary operator (?:) was used since we need to handle a simple condition.

<p>Although it doesn't have a significant performance gain, it helps to simplify the code.

<p>Syntax
```C
condition ? value_if_true : value_if_false
```