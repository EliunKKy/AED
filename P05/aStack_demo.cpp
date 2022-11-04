//
// Tomás Oliveira e Silva, AED, November 2021
//
// matched-parenthesis verification
//

#include <iostream>
#include "aStack.h"

using std::cout;
using std::cerr;
using std::endl;

int check_parenthesis(const char *s)
{
  // put your code here (20 lines of code should be enough)
  aStack<int> st(100);
  int x;
  int flag = 0;
  for(int i = 0; s[i] != '\0'; i++) // go through input string
  {
    if (s[i] == '(')
    {
      st.push(i);
      flag = 1;
    } 
    else if (s[i] == ')')
    {
      if (!st.is_empty())   // check the stack to prevent errors
      {
        x = st.pop();
        printf("'(' at position %d and matching ')' at position %d\n", x, i);
      }
      else
      {
        printf("')' unmatched at position %d\n", i);
        return -1;
      }
      flag = 1;
    }
  }

  // final conditioning
  if(flag == 0)
  {
    printf("No pareteses!\n");
    return 0;
  }

  if(st.is_empty())
  {
    return 0;
  } 
  else
  {
    while(!st.is_empty())
    {
      x = st.pop();
      printf("'(' unmatched at position %d\n", x);
    }
    return -1;
  }
}

int main(int argc,char **argv)
{
  if(argc == 1)
  {
    cerr << "usage: " << argv[0] << " [arguments...]" << endl;
    cerr << "example: " << argv[0] << " 'abc(def)ghi' 'x)(y'" << endl;
    return 1;
  }
  for(int i = 1;i < argc;i++)
  {
    cout << argv[i] << endl;
    if(check_parenthesis(argv[i]) == 0)
      cout << "  good\n" << endl;
    else
      cout << "  bad\n" << endl;
  }
  return 0;
}
