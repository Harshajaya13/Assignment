/*
 i am in a high moment,let's see how far this problem will be solved

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

/*
 first to write a function to add the linked lists and results in a linked list

first we have added the linked list
now another list have to taken , like
let me clarify
suppose  a function is there in which the addition of the two ll is gonna work
so that we can include that in the main and we can call that
this is the primary to do
like the linked lists have to be added in the sense like the coefficinets of the
same power are added this is the addition of the linked list what he have called
addition and next when it comes to the linked list of the polynomial addition
then like,when we insert something if it is of the same power we have to add
those and the only thing  i have to do is the taking two seperate functions and
then calling in the part we need

int add() so that
in this we will use the insert function like to call this in the insert so that
like with a question of two polynomials are like i will call twice and then
after that we can easily add the coeff lets try like this

the only inserting process is happeing in the main that too the insert is called
in the main what if i use an extra case in that writing the insert twice it
would ask the user for the insertion of the twice so two polynomials are getting


consider this in a case 5
int addition() {
  insert(h,v);
  insert(h,v);
this is like the first ,creation of the polynomial is done ,
like it would ask the questions related to the insertion only
so the two poly will come to the life and next the addition has to take place
like the poly 1 and poly 2 are declared in the output as we question the user
and what next is storing the poly in the another container where we are trying
to perform the operation here it is like the same powers will do the addition
and the coeffiients can be any

i think this is a drag,to use in the insert
actually the inserted polynomial has to be saved
how can the previous linked list vales are saved then when i say display
then it means i have to target the display to get the entire polynomial there
and then calling

so now it is like targeting the display then, it is like target the
display(poly1,n1) and then we get the value of the poly 1 and the n1 tbh the
poly1 is necessary that n1 is useless cause we alreadyhave the temp data and the
temp data is the poly1 itself why the extra variable n1

so i have called the display
two times in the case 5 and now the magical wizard too that is the greatest
creation that it handles the both entering of the poly and the add of the poly
there but it is like for a normal person it is a random stick for a wizard it is
a magical stcik so even thoug display(int p) it has it cant be used unless it
uses the wizard key there that only happens in the case 5 not in the cas3 so it
i not a problem
in the display it is like
as we have used the while condition to traverse the temp and same happens like
the traversed one is the poly 1 ,and now we get the poly 1 directly

wait a min again we are out of the track
first we have to do the temp traverse
ok, for the first round it is the poly and for the second it is poly2
now,what next is
we have gave the display two times instead i have gave gave the insert two times
cause the user might choose this case as the printing of the two seperate ones
from the initial so tw inserts in the insert we have to use the wizard so the
single wizard is used and then the insert and the display are using the wizrd
for sure this is

well all i was saying is the when we call the display(poly) it is not needed to
save the values there so case 5 insert is only at the end no more values at all
so it goes so simple and the values are given to the poly 1 and poly 2 now the
display is like comes to the work when it is poly1 then it is the display of the
poly 1 if not then it is the display of the poy2 just like how things have gone
with the display of the ll before so that wizard ives the one we need

no, we use the if(wizard){
then we use the
if of the poly 1 so that the poly one is inserted at the condition we take fro
the insertion same for the poly 2 too now the insertion part is over as they are
created and now the real drag is how we use the display for the ll same we use
for the wizard too

why we used the poly
that means it is a struct so it stores the polynomial too
thats why for the wizard we have taken the struct
again it is a drag
what i have said in the start is
we use the if condition for the printing of the + and the - like using the both
wizard and the normal ones too so that it will work out for the signs too then
when it comes to printing the numbers take them into the wiard and then we can
print how we traversed in the start and now the poly comes thats it so

the n1 is the one which saves the poly 1 so the poly1 is saved in the n1 and the
n2 issimilar if we perform the adition and then check the values of the power
and coeff then it is like helps us to add the part only we need ignore others so
no need to use the array and make it complicated

ok all i was saying is
insert poly 1 and the n1
so case 1 is only one polynomial no need to add the other and also i wont even
bother anywhere it just goes like why did you even called me when you dont have
any use with me and the next part is the insert twice now it is like a bit messy
i have to handle like how did i save the n1 from the poly 1 that means i have to
write the code in the insert but that only printed when the case 5 is called
like it only saves the case 5
and now the addition process is going to take place

 now i will use the %d in the printf of the question so 1 and 2 polynomials
comes to the life now all i have to do is the i cant create a function inside a
fucntion in c better writing code outside is hard wait a min, like how about the
if condition so what will i use in the if condition is that related to the
something like a boolean like if with the true only that means calling in the


case5 we use the bool of the true and give to the if now only the bool will help
to get the case 5 it is like  a key to the magical door now the headache is
clearred now assing the poly 1 to the n1 and n2 , like using the bool
wizard_bool = true;
in the case 5
so if condition in the insert is(wizard_bool){
now it is like saving the n1 and n2 in the polynomial
as i ahve gave the insert with the insert(poly1 and n1) now its time to save the
poly 1 in te n1 and the addition is like comparing the powers of thr coeff and
then the ifs

no need to take the input as the input goes to the start not a problem
only collect the output
that's what i am saying from the start
you don't need to collect the input, just the output is enough
for me , it has to collect only the output
as it displays the outpiut just like how it displays for the non wizard ones
i want to do is the output taker
but the problem is why not this is like shifting directly to the polynomial 2
cant even waiting for the user to insert some more terms too

in the bottom we have took the display (head) the head wants a pointer
temp = head; that means for the start case the head is start for the polynomial
addition it is the poly1 or poly 2 which we have declared

this is so easy and flexile with what ever you gives the  type either start or
the poly




*/

/*
now it is the process of the adding of the code like the functionaliy and all
like taking a function add and then adding the all the same expo to the sum and
left remaining for that i have create a function add and then as the poly 1 and
the poly2 are globally dclared i can use the anywhere i want so it is like
usieng them for the addition and comparing if they ave the same power terms if
yes depends on the sign it takes it work

after many attempts i have realised that the wizard id good but its
implementation is not that good,but better way of thinking it then it comes to
the play
  */

/*
 well
for the array addition of the polynomial and the array multiplcation of the
polynomial we have to declare them too instead we can continue with the previou
ones we have , its simple though , just it has two inner cases either add ot
multiply if that comes out of bounds that the user try to over react and
directly gets to the array add and multiply then i will say first define them
using the case 5 conditions on how we get the polynomial 1 and 2 and then we can
perorm the add or mul

see this we can add the case 8 as the array adddition of the polynomial and the
array multiplication of the polynomial i dont think there is a big differences
for the user on how he uses the polynomial input as we use the poly1 and 2 that
too they are the same as the flow type when thyey enter it i mean there is not a
specific difference in how the user sees it all all changes in the background
then what is the real purpose

as you see in the case 5 of mine
initaily start and end are the null so that the list becomes empty if at all any
revoius ones are left and the next ones like poly1 = start, cause in the display
temp = head;as we call the display(poly1) so the poly1 is the start and the list
starts that was ok but how can the list knoe the polynomial we enter is the
first one is comes from he staring of the list if the lsit is empty start is the
new one so we are going there and then the work starts to print each ones that
was ok, why would the insert at start dont work as like the polynomial defining
as the the insert one inserts at the first place but here the polynomial every
terms directly comes beside each other just the display is making that ok well
this is like when we are making the start null and the temp comes to the role
and then it shifts to the other one,so this all comes from the starting if
condition??
that means , till now i felt that the if condition is just for the use if there
is any list empty so that it is like works , but i have realised its value,but
that if condiition is in the insert how can it is used without the case 1

for all the questions the answer itself is the calling of the insert() vecause
in the insert calling we are using it for the taking the values by seeing the
start is null or not if yes the new node will be the start

i will create a new insertarr function so that
it prints like
the %d %d arr[coef][exp] so that it feels like the user is entering them into
the array or else i can do one thing an wizard boolean so that it will only
access the print of the array in the insert one so no nee to write another
function just the condition for the start npde and the taking of the coeffiients
and al or writing a new function is better as i always wanted to make it like a
magic by taking the bool and goes only for the valid ones like thatpreviously i
thought of the wizard at the insert function as it is like takes me to the
conclusion after writing the code like poly1 ad all instead of taking the wizard
call the insert wholely so i came to understand the insert value,but this time i
have to use,but thinking what to use lets see what i will prefer for

no no, actually the size is the long long int
and now i want to take the arrays, in the two d, how can the size is measured
even like when we take the arrays size to use the loop for thst msny times so
what next to do and also i was saying is once the two are added the merging is
not that tough the twod arrays the poly1->co = r poly1->ex = c this is what it
is for adding it and now result is also stored only if the expo are matching in
not they all comes to the new line thats it why so much bigger code

no, all i want to do is the array ones wait a min when do like this why nit the
answr come i will stik with my plan i will say all just help me with that all i
am saying is the the users enter the polynomial and now take the coef and the
array in to the arrays and now the result is the merge of the two as we are
taking them into the arrays we can know how much we are taking now say isnt this
possible
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_EXP 1000
struct node {
  int co;
  int ex;
  struct node *next;
};
struct node *start = NULL, *end = NULL;

struct node *poly1 = NULL;
struct node *poly2 = NULL;
struct node *harsha = NULL; // declared at top of file
// this is for the entire new arrays
int poly1_arr[MAX_EXP] = {0};
int poly2_arr[MAX_EXP] = {0};
int result_arr[MAX_EXP] = {0};
// this above code is handled with care
bool wizard_mode = false;
int insert() {
  int opt, pos, i = 1, data;
  int h, v;
  if (wizard_mode) {
    printf("Enter term as arr[coef][exp]: ");
    scanf("%d %d", &h, &v);
  } else {

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

int display(struct node *head) {
  struct node *temp = head;
  if (temp == NULL) {
    printf("list is empty");
    return 0;
  }
  while (temp != NULL) {

    if (temp->co >= 0 && temp != head) {
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
int addArr() {
  for (int i = 0; i < MAX_EXP; i++) {
    result_arr[i] = poly1_arr[i] + poly2_arr[i];
  }

  printf("Array-based Addition Result: ");
  for (int i = MAX_EXP - 1; i >= 0; i--) {
    if (result_arr[i] != 0) {
      if (i == 0)
        printf("%d", result_arr[i]);
      else if (i == 1)
        printf("%dx", result_arr[i]);
      else
        printf("%dx^%d", result_arr[i], i);

      if (i > 0)
        printf(" + ");
    }
  }
  printf("\n");
  return 0;
}

int multiplyArr() {
  for (int i = 0; i < MAX_EXP; i++) {
    for (int j = 0; j < MAX_EXP; j++) {
      result_arr[i + j] += poly1_arr[i] * poly2_arr[j];
    }
  }

  printf("Array-based Multiplication Result: ");
  for (int i = MAX_EXP - 1; i >= 0; i--) {
    if (result_arr[i] != 0) {
      if (i == 0)
        printf("%d", result_arr[i]);
      else if (i == 1)
        printf("%dx", result_arr[i]);
      else
        printf("%dx^%d", result_arr[i], i);

      if (i > 0)
        printf(" + ");
    }
  }
  printf("\n");
  return 0;
}

void convertToArray(struct node *poly, int poly_arr[MAX_EXP]) {
  for (int i = 0; i < MAX_EXP; i++) {
    poly_arr[i] = 0;
  }
  struct node *temp = poly;
  while (temp != NULL) {
    poly_arr[temp->ex] += temp->co;
    temp = temp->next;
  }
}

void reset_arrays() {
  for (int i = 0; i < MAX_EXP; i++) {
    poly1_arr[i] = 0;
    poly2_arr[i] = 0;
    result_arr[i] = 0;
  }
}

int add() {

  while (poly1 != NULL && poly2 != NULL) {
    if (poly1->ex == poly2->ex) {
      printf("%dx^%d", poly1->co + poly2->co, poly1->ex);
      poly1 = poly1->next;
      poly2 = poly2->next;
    } else if (poly1->ex > poly2->ex) {
      printf("%dx^%d", poly1->co, poly1->ex);
      poly1 = poly1->next;
      if (poly1 != NULL || poly2 != NULL)
        printf(" + ");
    } else {
      printf("%dx^%d", poly2->co, poly2->ex);
      poly2 = poly2->next;
      if (poly1 != NULL || poly2 != NULL)
        printf(" + ");
    }
  }

  while (poly1 != NULL) {
    printf("%dx^%d", poly1->co, poly1->ex);
    poly1 = poly1->next;
    printf(" + ");
  }

  while (poly2 != NULL) {
    printf("%dx^%d", poly2->co, poly2->ex);
    poly2 = poly2->next;
    printf(" + ");
  }

  return 0;
}

int result(int coef, int expo) {
  struct node *term = malloc(
      sizeof(struct node)); // term is like new node which we have created
  term->co = coef;
  term->ex = expo; // term is tha storage box
  term->next = NULL;

  if (harsha == NULL) { // harsha is the start of the folder that result stores
    harsha = term;
  } else {
    struct node *ptr = harsha; // the ptr is the one which is like temp
    while (ptr->next != NULL)
      ptr = ptr->next;
    ptr->next = term;
  }

  // Merge like terms
  struct node *temp = harsha, *runner;
  while (temp != NULL) {
    runner = temp->next;
    while (runner != NULL) {
      if (runner->ex == temp->ex) {
        temp->co += runner->co;
        runner->co = 0;
      }
      runner = runner->next;
    }
    temp = temp->next;
  }

  return 0;
}

int multiplication() {

  for (struct node *p1 = poly1; p1 != NULL; p1 = p1->next) {
    for (struct node *p2 = poly2; p2 != NULL; p2 = p2->next) {
      int coef = p1->co * p2->co;
      int expo = p1->ex + p2->ex;
      result(coef, expo);
    }
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
           "2.delete\n3.display\n4.search\n5.Add two polynomials\n6.Multiply "
           "two polynomials\n7.Addition of two arrasy\n8.Multiplication of two "
           "arrays\n9.exit");
    scanf("%d", &opt);
    switch (opt) {
    case 1:
      insert();
      break;
    case 2:
      delete();
      break;
    case 3:
      display(start);
      break;
    case 4:
      search();
      break;

    case 5:

      // Polynomial 1
      start = NULL;
      end = NULL;
      printf("Enter Polynomial 1:\n");
      int choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to Polynomial 1? (1 = yes, 0 = no): ");
        scanf("%d", &choice);
      }
      poly1 = start;

      // Polynomial 2
      start = NULL;
      end = NULL;
      printf("Enter Polynomial 2:\n");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to Polynomial 2? (1 = yes, 0 = no): ");
        scanf("%d", &choice);
      }
      poly2 = start;
      printf("Polynomial 1: ");
      display(poly1);

      printf("\nPolynomial 2: ");
      display(poly2);
      printf("\n");
      add();
      break;

    case 6:
      // Reset result list before multiplication
      harsha = NULL;

      // Input polynomials
      start = NULL;
      end = NULL;
      printf("Enter Polynomial 1:\n");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to Polynomial 1? (1 = yes, 0 = no): ");
        scanf("%d", &choice);
      }
      poly1 = start;

      start = NULL;
      end = NULL;
      printf("Enter Polynomial 2:\n");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to Polynomial 2? (1 = yes, 0 = no):");
        scanf("%d", &choice);
      }
      poly2 = start;

      // Display input
      printf("Polynomial 1: ");
      display(poly1);
      printf("\nPolynomial 2: ");
      display(poly2);
      printf("\n");

      // Multiply and display result
      multiplication();
      printf("Multiplication Result: ");
      display(harsha);
      printf("\n");
      break;

    case 7:
      // for  array 1
      start = NULL;
      end = NULL;
      printf("enter the polynomial 1 :");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to the array[] 1? (1 = yes , 0= no):");
        scanf("%d", &choice);
      }
      poly1 = start;

      // for array
      start = NULL;
      end = NULL;
      printf("enter the polynomil 2 :");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to the array[] 2? (1 = yes , 0= no):");
        scanf("%d", &choice);
      }
      poly2 = start;

      printf("Polynomial 1: ");
      display(poly1);

      printf("\nPolynomial 2: ");
      display(poly2);
      printf("\n");
      reset_arrays();
      convertToArray(poly1, poly1_arr);
      convertToArray(poly2, poly2_arr);

      addArr();
      break;

    case 8:
      // for  array 1
      wizard_mode = true;
      start = NULL;
      end = NULL;
      printf("enter the polynomial 1 :");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to the array[] 1? (1 = yes , 0= no):");
        scanf("%d", &choice);
      }
      poly1 = start;

      // for array
      start = NULL;
      end = NULL;
      printf("enter the polynomil 2 :");
      choice = 1;
      while (choice) {
        insert();
        printf("Add more terms to the array[] 2? (1 = yes , 0= no):");
        scanf("%d", &choice);
      }
      poly2 = start;

      printf("Polynomial 1: ");
      display(poly1);

      printf("\nPolynomial 2: ");
      display(poly2);
      printf("\n");
      reset_arrays();
      convertToArray(poly1, poly1_arr);
      convertToArray(poly2, poly2_arr);

      multiplyArr();
      break;

    case 9:
      printf("exit");
      break;
    default:
      printf("invalid choice");
      break;
    }
  } while (opt != 9);
  return 0;
}
