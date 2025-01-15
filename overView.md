***Improvement
--Comment style flush to each other on the right side with to match the "correct" standard
--Make use of header file
   +Make use of header guard
--Multi-file implementation (Make use of separate file for all the function)
--Got rid of global using namespace std, instead replace it with only syntax use (I.e, std::cout, std::cin, std::endl)
--Make use of '\n' because it improve performance since it doesn't flush the buffer
--Learn to initialize variable the modernize way. (ex int x = 0; would turn into int x{0};)
--Made the enter column and row into a function so it easier and quicker
--Made a function in which it check before go to col if the move input for row is legal
--Made a function so that 

***Struggle
--Struggle with how to implement a way to check the grid if the spot is taken. (Fixed by outside sources)
--Struggle with the implementation when figuring out why the return value is always false. (Fixed by rechecking the code that it have some logic error, before range was checking from 0 below and 3 and above, change the operators sign)
--Struggling how to implement after the else statement where it said that the input was invalid, to make it so that player turn still remain the same instead of switching to the next player. (Fixed by having a nested loop within the else statement in order to counteract the change in main solution)
--Struggling with how after checking if the number for col or row is legal, to make the user try again. (Fixed by using a do/while loop, and it check whether the spot is valid or not before returning the input)
--Now the board is telling bottom left corner spots is not allow to be mark even when it empty. (Fixed by rewriting the logic by CHATGPT in which it make so that after the input is validated and put down then it would check for win, I have no how that fix my code even when it relatively the same as my original code) 

