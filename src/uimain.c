
//the most basic ui for testing
//TODO_0; implement a loop based ui like the one used in project 0
//TODO_1; implement history command

#include <stdio.h>

int main(void)
{

  char inpstr[101];
  printf("Hello, Please input a string of 100 characters or less to convert to tokens\n");
  fgets(inpstr,101,stdin);
  printf("%s", inpstr);

  return 0;
}
