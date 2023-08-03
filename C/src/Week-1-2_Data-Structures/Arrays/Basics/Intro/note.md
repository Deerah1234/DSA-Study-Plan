# Table of content

- [What is an Array](#What is Array)
- [Types of Arrays](#Types of Array)
- [Why Do We Need Arrays](#Why Do We Need Arrays)
- [Advantages of Arrays](#advantages-of-arrays)
- [Disadvantages of Arrays](#disadvantages-of-arrays)
- [Declaration](#declaration)
- [Initialization](#initialization)
- [Memory Representation](#memory-representation)
- [Time Complexity of Arrays](#time-complexity-of-arrays)

## What is Array

Array is a fixed size sequences collection of data items of same data type.

## Types of Array

There are two types of array:

- 1-D array
- 2-D array
- Multi-dimensional array

## Why we need Array

If we want to process large amount of data then we use array to store data of similar types. under one variable name.
Example:
Let's say we want to store 60 students score of a class, we could just create 60 variable for each student; like this:

```c
 int student1 = 10;
 int student2 = 20;
 int student3 = 30;
 ...
 int student58 = 90;
 int student59 = 100;
 int student60 = 101;
```

As we see this can be tiduos, imagine that we have 100 student instead of 60, then this code will get long.
But use Array will save us allot of time:

```c
 int student_score[60] = { 10, 20, 30, ..., 90, 100, 101 };
```

This when using an Array. See how simlified it is.

## Advantage of Array

1. Use to store large amount of data of similar type
2. easy to use
3. Random access is pursible
4. Data items are stored in continous locations

## Disadvantage of Array

1. Must contain similar types
2. fixed size is provided
3. size must be a contant
4. There is no upbound checking

## Declaration

Syntax to decalare an array:

```c
 dataType arrayName[sizeOfArray];
```

- dataType: can be of any dataype: (int, char, float, etc).
- arrayName: This is the name memory location i.e the name that will be recongonized by the complie to store the array. can be of any name.
- []: use to indicate that we are using an array, this is where the sizeOfArray will be inserted.
- sizeOfArray: this is a contant value of the array: (10, 20, 30, 50, etc). must be a contant only.

Check the decaration.c file to see the implimentation.

## Initialization

Syntax to initilize an array:

```c
 dataType arrayName[sizeOfArray] = { values, seperated, with, comma };
```

We have seen what he dataType, arrayName, [], and sizeOfArray is. But we will se the other.

- {}: This is use to indicate that we are going to insert value at complied time to the array. Remember must be of same type.
- values, seperated, with, comma:  This is where we insert our value of same type.

check the initialization.c  file to see the impllimentation.

## Memory representation

## Time complexcity of Array

- Travesal: O(1)
- insection:
  - insection at the begining: O(n)
  - insection at the end: O(1)
