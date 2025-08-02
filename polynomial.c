/*
 Implement a singly linked list to represent a polynomial (each node stores
coefficient and exponent). that means it is a polynomial it can be like
ax^2+bx^3-cx^4 or 6x^3+7x^2+8x^6

positive and negative signs can come to the code
so we have to use the if condition to print the  + or - and also the -> replaced
by the + or - that was not a drag and now it comes to the coefficient and the
exponent in the sll it is the new_node next is null and the new node data is
given to the x but here we have to give it to the coef and the power , it is a
little drag and then we have to write the code so here the -> replaced by the +
and the - so i have to be careful enough not to mess with it the postfix eval
code is used like the how the opeartors are treated with the opearnds actually
the node start is used in a way that

the start->coef is something and the start->power is something
when it is given in the input of the user
just like how the signle linked list data is new_node->data is value or x
so that it is used in the function add

 what a drag that i have to add the conditions too for adding the code in the
start middle end too

start and end gloabally means i can get them in the cases
like delete or either insert no need to give them again in the body

 when there is a single node i have to update the end too

the only problem that comes is the moving of the coeff too with the temp in the
insert it is a whole drag to write the extra piece of code just to waste the
time and makes me confused so the delete code is less than the adding ,and also
worked smoothly without any pressure or time waste 😮‍💨

now the real game starts at the display
the one which helps the numbers to either add or subtract or to display them
as of now the insert is a drag ,from now the display is also a headache
this process of writing code for the display almost irritated me as it needs the
logic that will only comes to the mind when we think a bit longer , but it is a
drag anyway 😮‍💨😮‍💨

if start is not null then we can display the polynomial
we check the temp not equal to null because the it havent crash
if we dont printf yhe temp values first it would skip the initial ones
for the printf of the + and - we have to think a little bit hard
i thought that display is the drag,but no it isnt , it is the one which is the
main drag is the insert 😩,it make me write the code damn long and i was like,
am i right what i am writing but in the end it is right,as i got no errors in
the syntax

first we have to think how to print the 2x and the 1 , so that means the if
condition is used there

the search condition is makes me feel excited , that it has to compare the both
the coef and expo
so i have to take the input from the user like , he has to enter the coef and
the ex then i have to check them with the temp coef and ex

huh 😮‍💨 when code comes to an end, but it have strucked in loop that, i
have gave the print statements in the do while,instaed of the insert user be
like : 🤬 are you sleeping when you writing the code, how the hell you have
written the code,in a way that it keep on insisting me me: 🥱 dont forget who
write the code, if you irritate me, i would delete the code you want ,and then
you would scream upto me and then begs me user: 🤡 i have understood, what i am
and who you are , sorry for my words, i wil take those back me : 😈 better know
,with whom yoy are messing with user: for sure me : get lost, for now , i have
to fix the code in the main
it took almost 2hr 10min to complete the pre movie version,it needs some patch
worls , they will be uploaded soon ,as of now enjoy with the code with bugs

😭 probably the insert is not at all a drag , i am the one who made it extra ,by
writing the extra code 😭 i dont expect that, but the code i write,isnt at all
wasted , it is used when we want to change the coef and the expo even after the
declaring that  single misunderstanding made me write the extra piece not it
feels like , i am the one who made it a drag ,not the insert 🤧

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
  int co;
  int ex;
  struct node *next;
};
struct node *start = NULL, *end = NULL;

int insert(int h, int v) {
  int opt, pos, i = 1, data;

  printf("enter the value of the coefficient: ");
  scanf("%d", &h);

  printf("enter the value of the exponent: ");
  scanf("%d", &v);

  printf("Enter where to insert: 1.start \t 2.end \t 3.position: ");
  scanf("%d", &opt);
  struct node *new_node = (struct node *)malloc(sizeof(struct node)),
              *temp = start;
  new_node->co = h;
  new_node->ex = v;
  new_node->next = NULL;

  if (start == NULL) {
    start = new_node;
    end = new_node;
    return 0;
  } else {
    switch (opt) {
    case 1:
      new_node->next = start;
      // new_node->co = h;
      // new_node->ex = v;
      start = new_node;
      break;

    case 2:
      end->next = new_node;
      // new_node->co = h;
      // new_node->ex = v;
      end = new_node;
      break;

    case 3:
      printf("enter the position you want to insert");
      scanf("%d", &pos);
      if (pos == 1) {
        new_node->next = start;
        // new_node->co = h;
        // new_node->ex = v;
        start = new_node;
        break;
      } else {
        temp = start;
        while (temp->next != NULL && i != pos - 1) {
          temp = temp->next;
          i++;
        }
        // new_node->co = h;
        // new_node->ex = v;
        new_node->next = temp->next;
        temp->next = new_node;
      }
      break;
    default:
      printf("Invalid choice");
      break;
    }
  }
  return 0;
}

int delete() {

  struct node *temp = start;
  int opt, pos, i = 1;
  printf("Enter where to delete the node: 1.start \t 2.end \t3.position : ");
  scanf("%d", &opt);

  if (start == NULL) {
    printf("list is empty");
    return 0;
  }

  else {
    switch (opt) {
    case 1:
      temp = start;
      start = start->next;
      free(temp);
      break;

    case 2:
      temp = start;
      if (start->next == NULL) {
        free(start);
        start = NULL;
        end = NULL;
      } else {
        temp = start;
        while (temp->next->next != NULL) {
          temp = temp->next;
          i++;
        }
        free(temp->next);
        temp->next = NULL;
        end = temp;
      }
      break;
    case 3:
      printf("Enter the position to delete: ");
      scanf("%d", &pos);
      struct node *extra;
      if (pos == 1) {
        temp = start;
        start = start->next;
        free(temp);
      } else {
        temp = start;
        while (temp->next != NULL && i != pos) {
          temp = temp->next;
          i++;
        }
        extra = temp->next;
        temp->next = extra->next;
        free(extra);
      }
      break;
    default:
      printf("exit");
      break;
    }
  }
  return 0;
}

int display() {
  struct node *temp = start;
  if (start == NULL) {
    printf("list is empty");
    return 0;
  }
  while (temp != NULL) {

    if (temp->co >= 0 && temp != start) {
      printf(" + ");
    } else if (temp->co < 0) {
      printf(" - ");
    }

    if (temp->ex == 0) {
      printf("%d", abs(temp->co));
    } else if (temp->ex == 1) {
      printf("%dx", abs(temp->co));
    } else {
      printf("%dx^%d", abs(temp->co), temp->ex);
    }
    temp = temp->next;
  }
  return 0;
}

int search() {
  int pos, i = 1, key_co, key_ex;
  struct node *temp = start;
  printf("Enter coefficient to search: ");
  scanf("%d", &key_co);
  printf("Enter exponent to search: ");
  scanf("%d", &key_ex);

  while (temp != NULL) {
    if (key_co == temp->co && key_ex == temp->ex) {
      printf("found");
      return 0;
    }
    temp = temp->next;
    i++;
  }
  printf("not found");
  return 0;
}

int main() {
  int data, opt, key, h, v;
  do {
    printf("\nenter the operation : \n1.insert \n"
           "2.delete\n3.display\n4.search\n5.exit");
    scanf("%d", &opt);
    switch (opt) {
    case 1:
      insert(h, v);
      break;
    case 2:
      delete();
      break;
    case 3:
      display();
      break;
    case 4:
      search();
      break;
    case 5:
      printf("exit");
      break;
    default:
      printf("invalid choice");
      break;
    }
  } while (opt != 5);
  return 0;
}
