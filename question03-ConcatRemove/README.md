

# exercise 2
<p>Consider a string containing lowercase characters from the Portuguese alphabet. You can perform two types of operations on this string:
<p>1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
<p>2. Remove the last character from the string. If the string is empty, it will remain empty.

<p>Given an integer k and two strings s and t, determine if you can convert s to t using exactly k operations described above on s. If possible, the program prints 'yes', otherwise it prints 'no'.

<p>For example, string s = [a, b, c] and string t = [d, e, f]. The number of moves k = 6. To convert s to t, we first remove all characters using 3 moves. Then we concatenate each of the characters of t in the order. In the sixth move, you will have the expected string s. If more movements are available than necessary, they <p>can be eliminated by performing multiple removals on an empty string. If there are fewer movements, it would not be possible to create the new string.

<p>Develop a C/C++ or Java language program that implements and uses the ConcatRemove (s, t, k) function. It should return the results 'yes' or 'no'.
<p>The function has the following parameters:
<p>s: starting string
<p>t: desired string
<p>k: an integer that represents the number of operations

