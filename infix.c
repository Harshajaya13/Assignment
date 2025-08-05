/*
 * that means
{[a+b]*(c-d)}
if you see this
if the a+b are only considered and then (c-d) is ok , that will complete and the
[a+b] only adds the both a+b with out that it would be a + b*(c-d) that means we
are missing the a+b sum ?? so better converting the [] {} into the () then it
wouldn't be a drag and also there is no pain at all because there is not at all
a chance that it would give the wrong answer

ok now lets come to the algorithm part
first we have to declare the struct node and all
and then top just like how we have declared the next

now the fucntion push

new_node initialisation and the push is over it is just like the single linked
list now the pop it is like we have to give the temp as the top, as we will move
the top and delete the temp so we have to store the value of the temp somewere
else cause we need to pop the values out and then we use in the below considered

the reason for the bracket chnager is, suppose the question is the {[a+b] *
(c-d)} here what is happening is normally we ignore the brackets as we consider
them that there are no {} and [] in the operation but if we do that then it
will cause some errors like if we ignore them then
a + b *(c-d) that means it wont multiply with the sum of the a and b , it only
multiplies with the b itself so it is a bug itself, thats why converting is far
better than doing normally as you know the precedence now comes to the main
function it is the main part

the infix and the postfix is the string and then we have to take the infix
equation and then we can read the values of the individual if it is the char
then send to the postfix

if it is ( then we have to send to the stack
if the ) enters then we have to pop the values and then give those to the
postfix so that it is completed and pop() will neglect the ( if they are not
there then first an operator goes to the stack and it check with the other
operator and then based on the priority it goes to the postfix and at last it
push the e which is a infix character goes to the stack if all these conditions
are over then it is like pop the remaining ones and then push to the postfix
after the more priority ones have gone in the end we have to add the '\0' so
that garbage values dont enter and the stack wont overflow due to the buffering
print postfix

harshavardhan13@harsha:~/Assignments$ nv infix.c
harshavardhan13@harsha:~/Assignments$ gcc infix.c
harshavardhan13@harsha:~/Assignments$ ./a.out
enter the expression {[a+b]*(c-d)}
postfix: {ab+[cd-*]}
see if i dont convert that it would be like this

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char x, opt;

struct node {
  char data;
  struct node *next;
};
struct node *start = NULL;

void push(char x) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = x;
  new_node->next = NULL;
  new_node->next = start;
  start = new_node;
}

char pop() {
  struct node *temp;
  if (start == NULL) {
    printf("stack is empty");
    return 0;
  } else {
    temp = start;
    char val = temp->data;
    start = start->next;
    free(temp);
    return val;
  }
}

void BracketChnager(char *infix) {
  for (int i = 0; infix[i] != '\0'; i++) {
    if (infix[i] == '{' || infix[i] == '[')
      infix[i] = '(';
    if (infix[i] == '}' || infix[i] == ']')
      infix[i] = ')';
  }
}

int precedence(char opt) {
  if (opt == '^')
    return 3;
  if (opt == '*' || opt == '/')
    return 2;
  if (opt == '+' || opt == '-')
    return 1;

  return 0;
}

int main() {
  int i = 0, j = 0;
  char infix[MAX], postfix[MAX], e;
  printf("enter the expression");
  scanf("%s", infix);
  BracketChnager(infix);
  while (infix[i] != '\0') {
    e = infix[i];
    if (isalpha(e)) {
      postfix[j++] = e;
    } else if (e == '(') {
      push(e);
    } else if (e == ')') {
      while (start != NULL && start->data != '(') {
        postfix[j++] = pop();
      }
      pop();
    } else {
      while (start != NULL && precedence(start->data) >= precedence(e)) {
        postfix[j++] = pop();
      }
      push(e);
    }
    i++;
  }

  while (start != NULL) {
    postfix[j++] = pop();
  }
  postfix[j] = '\0';
  printf("postfix: %s\n", postfix);
  return 0;
}
