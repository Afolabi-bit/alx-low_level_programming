##### 0x0A. C - argc, argv

### Learning Objectives

- How to use arguments passed to your program
- What are two prototypes of main that you know of, and in which case do you use one or the other
- How to use **__attribute__((unused))** or **(void)** to compile functions with unused variables or parameters

### Tasks

* [0-whatsmyname](/0-whatsmyname): A program that prints its name, followed by a new line
				   - If you rename the program, it will print the new name, without having to compile it again

* [1-args.c](/1-args.c): A program that prints the number of argument passed into it
			 - Your program should print a number, followed by a new line

* [2-args.c](/2-args.c): A program that prints all the arguments it receives
			 - All arguments should be printed, including the first one
			 - Only print one argument per line, ending with a new line

* [3-mul.c](/3-mul.c): A program that multiplies two numbers
		       - Your program should print the result of the multiplication, followed by a new line
       		       - You can assume that the two numbers and result of the multiplication can be stored in an integer
		       - If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

* [4-add.c](/4-add.c): A program that adds positive numbers
		       - Print the result, followed by a new line
		       - If no number is passed to the program, print 0, followed by a new line
		       - If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
		       - You can assume that numbers and the addition of all the numbers can be stored in an int