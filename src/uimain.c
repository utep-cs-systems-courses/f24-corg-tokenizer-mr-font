
//the most basic ui for testing
//TODO_0; implement a loop based ui like the one used in project 0
//TODO_1; implement history command

/*#include <stdio.h>

int main(void)
{

  char inpstr[101];
  printf("Hello, Please input a string of 100 characters or less to convert to tokens\n");
  fgets(inpstr,101,stdin);
  printf("%s", inpstr);

  return 0;
  }*/
 //By Michael Font


#include <stdio.h>

int main()
{
  char inpstr[101];

  puts("Welcome to Tokenizer!");

  while(1)
    {
      fputs("Please input a string of 100 characters or less to convert to tokens, !h for history, !1 through !10 for history item or !q to quit\n> ", stdout);
      fflush(stdout);/* stdout only flushes automatically on \n */
      fgets(inpstr,100,stdin);
      switch (inpstr[0]){
      case '!':
	switch (inpstr[1]){
	case'h':
	  puts("History is currently unsupported");
	  break;
	case'q':
	  puts("Exiting");
	  goto done;
	  //if (inpstr[1] >= '1' && inpstr[1] <= '10'){
	case '0' ... '9':{
	  puts("The History item option is currently unsupported");
	  break;

	}
	}
	break;
      }
      printf("%s", inpstr);
    }

 done:
  return 0;
}
