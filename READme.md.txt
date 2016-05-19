
#**Exercise 2.9**

----------


>Explain the following dedinitions. For those that are illegal explain what's wrong and how to correct it.

* std::cin >> int input_value; invalid报错
* int i = { 3.14 }; invalid，会报错。
* double salary = wage = 9999.99 invalid，wage没有值
* int i = 3.14; OK，但是double不能给int，小数部分会丢掉

<br />

#**Exercise 2.10**

----------


>What are the initial values, if any, of each of the following variables?
>>```
std::string global_str;
int global_int; 

>>int main()
{
    int local_int;
std::string local_str;
}
```

global_str 　 　empty string
global_int  　  0
local_int   　　 undefined
local_str   　　 empty string

<br />

#**Exercise 2.11 **

----------

>Explain whether each of the following is a declaration or a definition:

>* (a) extern int ix = 1024;
* (b) int iy;
* (c) extern int iz;

a) definition but erro
b) declaration and definition
c) declaration but not definition
<br />

#**Exercise 2.12**
----------
>Which, if any, of the following names are invalid?

>* (a) int double = 3.14;
* (b) int _;
* (c) int catch-22;
* (d) int 1_or_2 = 1;
* (e) double Double = 3.14;

invalid: a d same name with table2.3 and table 2.4
         c no such thing identifiers only composed of letters digits and the underscorevalid
         
nosure   b if outside funtion then incalid otherwise OK

<br />

# **Exercise 2.13**

----------

>What is the value of j in the following program?
> 
>     int i = 42;
>     int main()
>     {
>         int i = 100;
>         int j = i;
>     }

    j = 100

<br />
# **Exercise 2.14**

----------

> Is the following program legal? If so, what values are 
> printed?
> 
>     int i = 100, sum = 0;
>     for (int i = 0; i != 10; ++i)
>         sum += i;
>     std::cout << i << " " << sum << std::endl;

Legal  output: 100 450
<br />

# **Exercise 2.15**

----------

> Which of the following definitions, if any, are incalid? Why?
> 
> * a)int ical = 1.01;
> * b)int &rall = 1.01; 
> * c)int &rval2 = ival;   
> * d)int &rval3;

b(initializer should be an object), 
c(initializer not been defined), wrong, this one is valid. initializer does not have necessary to be defined.
d(a reference must be initialized)

<br />
# **Exercise 2.16**
----------

>  Which, if any, of the following assignments are invalid? If they are
>  valid, explain what they do.
> 
>     int i = 0, &r1 = i; double d = 0, &r2 = d;
> 
> * (a) r2 = 3.14159; 
> * (b) r2 = r1; 　　　
> * (c) i = r2;     
> * (d) r1 = d;

(a): valid. d = 3.14159.
(b): valid. 
(c): valid. truncated when a double type be assigned to a int type
(d): valid. truncated. same as c
<br />

# **Exercise 2.17**
----------

 >What dose the followint code print?
>     
>     int i, &ri = i;
>     i = 5; ri = 10;
>     std::cout << i << " " << ri << std::endl;

10 10