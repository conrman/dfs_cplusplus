Depth First Search - C++
==========================

Implement DFS. Your graph will internally be represented by either and adjacency list or an adjacency matrix. While you can use a 2-dimensional array (if you choose an adjacency matrix), make sure to implement a graph class, which contains the 2-dimensional array.

Once the program is started, it will print out the promt "DFS> " (> is followed by a whitespace):

./a.out

DFS>

 

You will implement the commands "create", "dfs" and "quit":

 


create

Create takes as an argument the graph. The first number n indicates the dimension of the graph as represented by an adjacency matrix, i.e. n*n values will follow. The argument is provided on a single line. The value 0 indicates that there is no edge, whereas 1 represents the existence of an edge. Then repeat the prompt.

Example: 3 0 1 1 1 0 1 1 1 0 represents the following 3x3 matrix:

0 1 1 
1 0 1 
1 1 0

DFS> create 3 0 1 1 1 0 1 1 1 0
DFS>



dfs

Dfs takes as an argument the start node for the depth first search. Iterate through the adjacent nodes (in your matrix or adjacency list) in order of increasing node index as specified by the input. Print out the post-order-traversal, i.e. the order of node completion on a single line separated by white-spaces. (There is NO whitespace after the last entry!). Then repeat the prompt.

DFS> dfs 0

2 1 0
DFS> dfs 1

2 0 1
DFS> dfs 2

1 0 2
DFS>

 

quit

Exit the program

DFS> quit

 

Error Handling

If the command received from the user input is not supported, print out an error message starting with "Error!” (Do not capitalize the entire word "Error")
Submit AT LEAST the following files:

Your main file controlling the flow of the program
The prototype file for your graph

The implementation file for your graph

Possible other files could include files for a Node implementation (optional)
 

Example of program execution:

g++ *.cpp
./a.out

DFS> create 3 0 1 1 1 0 1 1 1 0
DFS> dfs 0
2 1 0
DFS> dfs 1
2 0 1
DFS> dfs 2
1 0 2
DFS> create 6 0 1 0 1 0 0 0 0 1 1 0 0 0 1 0 0 0 0 0 0 1 0 1 1 0 0 1 0 0 0 0 0 1 0 0 0
DFS> dfs 0
2 4 5 3 1 0
DFS> quit

<pre>make main</pre>
    
(2) To execute the program, enter:
<pre>./main</pre>
    
(3) To clean up all the generated files, enter:
<pre>make clean</pre>
    
    
