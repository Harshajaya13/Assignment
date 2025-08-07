/*suppose f is at the 2
r is at the 0
then it is like starts from f where it is the f = 2 and goes to the i !=( r+1) %
max then the 1 is missing not to print as the i != 1 when r is 0 so how can the
as it only prints the presnet elements not deleted ones so i!= (r+1%)max works
as it skips the deleted one unlike the search
even in search when we use the r+1 condition it is like if the f is 3 and r is 0
then it will skip the 1 2 indexs to search for*/

/*
 first we have to know the each process details
 the burst time and the process id and the remaining burst time

burst time means how much time the process needs to complete the starts
 time quantum means how much time the cpu gives for every process

*/
#include <stdio.h>
#define MAX 30
#define MAX_PRO 10
int cq[MAX], r = -1, f = -1, i, x;

void enqueue(int x) {
  if (r == MAX - 1) {
    printf("queue is oevrflow");
    return;
  }
  if (f == -1) {
    f = r = 0;
    cq[r] = x;
  } else {
    r = (r + 1) % MAX;
    cq[r] = x;
  }
}

int dequeue() {
  if (f == -1) {
    printf("queue is empty");
    return 0;
  }
  int x = cq[f];

  if (f == r) {
    f = r = -1;
  } else {
    f = (f + 1) % MAX;
  }
  return x;
}

void display() {
  if (f == -1) {
    printf("queue is empty");
  } else {
    for (i = f; i != (r + 1) % MAX; i = (i + 1) % MAX) {
      printf("%d", cq[i]);
    }
  }
}

void search() {
  int key, found = 0;
  printf("enter the element: ");
  scanf("%d", &key);
  if (f == -1) {
    printf("Queue is empty.\n");
    return;
  }
  int i = f;
  do {
    if (cq[i] == key) {
      printf("Found at position %d\n", i);
      found = 1;
      break;
    }
    i = (i + 1) % MAX;
  } while (i != (r + 1) % MAX);

  if (!found)
    printf("Not found.\n");
}

