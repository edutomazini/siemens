# Siemens

The idea is to use the same memory slot to change the values. For example, if you have two variables, x and y, and you want to change those values without an auxiliary variable, you can use the same variables. 
<p>Example:

```C
    int x = 10;
    int y = 20;
```
You can 'store' the value of y in x adding the value of y in x, then restore the value by efetuating a minus operation. 

```C
    int x = 10;
    int y = 20;

    x = x + y; // x now becomes 30
    y = x - y; // y becomes 20
    x = x - y; // x becomes 10
```

Doing in the end a 'swap' operation.

In a string, in background, we have a array of integer, than you can make this operations with the extremes of the 'array' (string).
