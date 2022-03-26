# Siemens

A use the idea of to use the same slot of memory to change the values.
For exemplo, if you have two variables, x and y and want to change this values whitout an auxiliary varible you can use the same variables.
Exemplo

```C
    int x = 10;
    int y = 20;
```
you can 'store' the value of y in x adding the value of y in x, then restore the value by efetuating a minus operation?

```C
    int x = 10;
    int y = 20;

    x = x + y; // x now becomes 30
    y = x - y; // y becomes 20
    x = x - y; // x becomes 10
```

Than, you can 'swap' the values.

In a string, in background, we have a array of integer, than you can makes this operations with the extremes of the 'array' (string).