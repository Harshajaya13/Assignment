
// once inside the while,we will directly prints
// all the values in one go, this will check the
// infix individual digit or . , this will take
// the whole blocks and the push to the postfix

// it will print the gap,cause we have already
// printed the numbers its time for the gap
// now, we have reduce the i, this will help the loop to come
// back 12.5+ suppose this question firts 1 then 2 then . then  5
// and the condition fails at the + and then it will check the next
// number but ignoring the +,so we have to comeback to the +
// now the current i value is the 3, that means it points the
// number 5,once it goes out the main i++ in the bottom of the
// while loop, increments it and make it 4 and the e[4] now checks
// whether it is a number or not

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

float stack[MAX];
char num[MAX];
int top = -1;

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
  if (start == NULL) {
    return '\0';
  }
  struct node *temp = start;
  char val = temp->data;
  start = start->next;
  free(temp);
  return val;
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

void pusheval(float result) {
  if (top == MAX - 1) {
    printf("Evaluation stack overflow\n");
    return;
  }
  stack[++top] = result;
}

float popeval() {
  if (top == -1) {
    printf("Evaluation stack empty\n");
    return 0;
  }
  return stack[top--];
}

int main() {
  int i = 0, j = 0;
  char infix[MAX], postfix[MAX], e;

  printf("Enter the infix expression: ");
  scanf("%[^\n]", infix);
  BracketChnager(infix);

  // --- Infix to Postfix Conversion ---
  while (infix[i] != '\0') {
    e = infix[i];

    //   skip whitespace characters
    if (isspace(e)) {
      i++;
      continue;
    }

    if (isdigit(e) || e == '.') {
      while (isdigit(infix[i]) || infix[i] == '.') {
        postfix[j++] = infix[i++];
      }
      postfix[j++] = ' '; // Add a space to separate tokens
      i--;
    } else if (e == '(') {
      push(e);
    } else if (e == ')') {
      while (start != NULL && start->data != '(') {
        postfix[j++] = pop();
        postfix[j++] = ' '; // FIX 2: Add a space after every popped operator
      }
      if (start != NULL) {
        pop(); // Pop the '('
      }
    } else {
      while (start != NULL && precedence(start->data) >= precedence(e)) {
        postfix[j++] = pop();
        postfix[j++] = ' ';
      }
      push(e);
    }
    i++;
  }

  // Pop any remaining operators from the stack
  while (start != NULL) {
    postfix[j++] = pop();
    postfix[j++] = ' ';
  }
  postfix[j] = '\0'; // Null-terminate the postfix string

  printf("Postfix: %s\n", postfix);

  // --- Postfix Evaluation ---
  i = 0;
  while (postfix[i] != '\0') {
    e = postfix[i];

    if (isspace(e)) { // Skip spaces
      i++;
      continue;
    }

    if (isdigit(e) || e == '.') {
      int k = 0;
      while (isdigit(postfix[i]) || postfix[i] == '.') {
        num[k++] = postfix[i++];
      }
      num[k] = '\0';
      pusheval(atof(num));
      i--; // Adjust index
    } else if (e == '+' || e == '-' || e == '*' || e == '/' || e == '^') {
      float b = popeval();
      float a = popeval();
      switch (e) {
      case '+':
        pusheval(a + b);
        break;
      case '-':
        pusheval(a - b);
        break;
      case '*':
        pusheval(a * b);
        break;
      case '/':
        pusheval(a / b);
        break;
      case '^':
        pusheval(pow(a, b));
        break;
      }
    }
    i++;
  }

  printf("Evaluated result is: %.2f\n", popeval());
  return 0;
}
