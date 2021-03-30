# Codejam2021-solution-reversesort
here's the solution to google codejam 2021 qualification round question "REVERSESORT"

# Table of contents:
1.[problem statement](#problem-statement)

2.[libraries](#libraries)

3.[algorithm](#algorithm)

4.[code](#code)


## problem statement:


Reversort is an algorithm to sort a list of distinct integers in increasing order. The algorithm is based on the "Reverse" operation. Each application of this operation reverses the order of some contiguous part of the list.

The pseudocode of the algorithm is the following:

Reversort(L):
  for i := 1 to length(L) - 1
    j := position with the minimum value in L between i and length(L), inclusive
    Reverse(L[i..j])
After i−1 iterations, the positions 1,2,…,i−1 of the list contain the i−1 smallest elements of L, in increasing order. During the i-th iteration, the process reverses the sublist going from the i-th position to the current position of the i-th minimum element. That makes the i-th minimum element end up in the i-th position.

For example, for a list with 4 elements, the algorithm would perform 3 iterations. Here is how it would process L=[4,2,1,3]:

i=1, j=3⟶L=[1,2,4,3]

i=2, j=2⟶L=[1,2,4,3]

i=3, j=4⟶L=[1,2,3,4]

The most expensive part of executing the algorithm on our architecture is the Reverse operation. Therefore, our measure for the cost of each iteration is simply the length of the sublist passed to Reverse, that is, the value j−i+1. The cost of the whole algorithm is the sum of the costs of each iteration.

In the example above, the iterations cost 3, 1, and 2, in that order, for a total of 6.

Given the initial list, compute the cost of executing Reversort on it.

Input

The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of 2 lines. The first line contains a single integer N, representing the number of elements in the input list. The second line contains N distinct integers L1, L2, ..., LN, representing the elements of the input list L, in order.

Output

For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the total cost of executing Reversort on the list given as input.

Limits

Time limit: 10 seconds.

Memory limit: 1 GB.

Test Set 1 (Visible Verdict)

1≤T≤100.

2≤N≤100.

1≤Li≤N, for all i.

Li≠Lj, for all i≠j.

Sample


Sample Input

3

4

4 2 1 3

2

1 2

7

7 6 5 4 3 2 1


Sample Output

Case #1: 6

Case #2: 1


Case #3: 12

Sample Case #1 is described in the statement above.

In Sample Case #2, there is a single iteration, in which Reverse is applied to a sublist of size 1. Therefore, the total cost is 1.

In Sample Case #3, the first iteration reverses the full list, for a cost of 7. After that, the list is already sorted, but there are 5 more iterations, each of which contributes a cost of 1.

## Libraries

you can use c++ standa;rd library <bits/stdc++.h> .

if not using bits then

we are using vectors in our program so we need to incude 

1)iostream
2)vectors


## Algorithm

step 1: Take input t i.e no. of test cases:

step 2 : for t cases

step 3: input n : no. of elements in input list

step 4: create a vector of integre type

step 5: input elements inside cells of vector.

step 6: for i=0 to i<n-1 

step 7: find minimum from i to n-1.

step 8: store minimum and reverse the elements from i to minimum .

step 9:increment i and cost= (j+1)-(i+1)+1.

step 10 :continue loop from step 6

step 11: continue loop from step 2

step 12:  end loops

step 13: cout cost.

step 14: stop


## code

```
int p;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        vec.push_back(p);
    }
    
 ```
 
Above code intializes vector vec of type int.

then it inputs the elements inside it.

```
long r = 0;
    for (int i = 0; i < n - 1; i++)
    {
        auto begin = vec.begin() + i;
        auto end = vec.end();
        int min = min_element(begin, end) - vec.begin();
        // cout<<"min is"<<min<<endl;
        reverse(vec.begin() + i, vec.begin() + (min + 1));
        r = r + ((min + 1) - (i + 1) + 1);
        
        
```
1) auto begin is the variable storing the position of i after every loop.

2) auto end is the variable storing last index of the vector.

3) min_element is the in built function to find out minimum from given range of vector .
   
   it takes to parameters vec.begin() for starting and vec.end() for the last index.
   int min = min_element(begin, end) - vec.begin();
   this line gives stores in index of minimum element in min.

4) reverse(vec.begin(),vec.end()) is the in built functio used to reverse the elements between given parameters.

5) r is the variable to store the cost and give the final output as the cost.



**hence the program works succefully with the problem statement .sample cases are successfully passed.

# Thank you
