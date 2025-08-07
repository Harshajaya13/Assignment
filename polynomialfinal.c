
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_EXP 1000
struct node {
  int co;
  int ex;
  struct node *next;
};
struct node *start = NULL, *end = NULL, *poly1 = NULL, *poly2 = NULL,
            *harsha = NULL;
int poly1_arr[MAX_EXP] = {0};
int poly2_arr[MAX_EXP] = {0};
int result_arr[MAX_EXP * 2] = {0};
int insert() {
  int opt;
  int pos, i = 1;
  int h, v;

  printf("enter the value of the coefficient and exponent: ");
  scanf("%d %d", &h, &v);

  printf("Enter where to insert: 1.start \t 2.end \t 3.position: ");
  scanf("%d", &opt);

  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->co = h;
  new_node->ex = v;
  new_node->next = NULL;

  if (start == NULL) {
    start = new_node;
    end = new_node;
    return 0;
  }

  switch (opt) {
  case 1:
    new_node->next = start;
    start = new_node;
    break;
  case 2:
    end->next = new_node;
    end = new_node;
    break;
  case 3:
    printf("enter the position you want to insert");
    scanf("%d", &pos);
    if (pos == 1) {
      new_node->next = start;
      start = new_node;
    } else {
      struct node *temp = start;
      while (temp->next != NULL && i != pos - 1) {
        temp = temp->next;
        i++;
      }
      new_node->next = temp->next;
      temp->next = new_node;
    }
    break;
  default:
    printf("Invalid choice\n");
    free(new_node); // Free the unused node
    break;
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

void add() {
  while (poly1 != NULL && poly2 != NULL) {

    if (poly1->ex == poly2->ex) {
      int sum = poly1->co + poly2->co;
      if (sum != 0)
        printf("%d^%d", sum, poly1->ex);
      poly1 = poly1->next;
      poly2 = poly2->next;
    } else if (poly1->ex > poly2->ex) {
      printf("%dx^%d", poly1->co, poly1->ex);
      poly1 = poly1->next;
      if (poly1 != NULL || poly2 != NULL) {
        printf(" + ");
      }
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
    printf(" + ");
    poly2 = poly2->next;
  }
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
  harsha = NULL;
  for (struct node *p1 = poly1; p1 != NULL; p1 = p1->next) {
    for (struct node *p2 = poly2; p2 != NULL; p2 = p2->next) {
      int coef = p1->co * p2->co;
      int expo = p1->ex + p2->ex;
      result(coef, expo); // insert into result list
    }
  }
  return 0;
}
// arrays
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
  for (int i = MAX_EXP - 1; i >= 0; i--) {
    for (int j = MAX_EXP - 1; j >= 0; j--) {
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
  // Reset the input arrays
  for (int i = 0; i < MAX_EXP; i++) {
    poly1_arr[i] = 0;
    poly2_arr[i] = 0;
  }
  // Reset the larger result array
  for (int i = 0; i < MAX_EXP * 2; i++) {
    result_arr[i] = 0;
  }
}

int main() {
  int data, opt, key, h, v, n1, n2;
  do {
    printf(
        "\nenter the operation : \n1.insert \n"
        "2.delete\n3.display\n4.search\n5.Add two new polynomials\n6.Multiply "
        "two polynomials\n7.Addition of two arrays\n8.Multiplication of two"
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
      printf("enter how many terms you want in the first polynomial : ");
      scanf("%d", &n1);
      start = NULL;
      for (int i = 0; i < n1; i++) {
        insert();
      }
      poly1 = start;
      printf("Polynomial 1: ");
      display(poly1);

      printf("enter how many terms you want in the second polynomial: ");
      scanf("%d", &n2);
      start = NULL;
      for (int i = 0; i < n2; i++) {
        insert();
      }
      poly2 = start;
      printf("Polynomial 2: ");
      display(poly2);
      add();
      poly1 = poly2 = NULL;
      break;

    case 6:
      multiplication();
      display(harsha);
      break;

    case 7:
      reset_arrays();
      convertToArray(poly1, poly1_arr);
      convertToArray(poly2, poly2_arr);

      addArr();
      break;

    case 8:
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
