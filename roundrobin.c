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

 the reason is that, we have to use this is, we are using the rem bt which is a
variable that changes in the body, so better taking the values into the rem bt

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

int main() {

  struct process {
    int pid;
    int burst_time;
    int rem_bt;
  };
  struct process plist[MAX];
  int n, t, time = 0;
  printf("enter the number of processes: ");
  scanf("%d", &n);
  printf("enter the time quantum: ");
  scanf("%d", &t);

  for (int i = 0; i < n; i++) {
    printf("enter the burst time fot the process :%d ", i + 1);
    scanf("%d", &plist[i].burst_time);
    plist[i].pid = i + 1;
    plist[i].rem_bt = plist[i].burst_time;
    enqueue(i);
  }

  while (f != -1) {

    int p_index = dequeue();

    if (plist[p_index].rem_bt <= t) {
      time += plist[p_index].rem_bt;
      printf("Process %d ran for %dms and COMPLETED.\n", plist[p_index].pid,
             plist[p_index].rem_bt);
      plist[p_index].rem_bt = 0; // this shows that process is completed
    } else {
      time += t;
      // this means the time it takes is more than the
      // time allocated by the cpu,here the time is taken
      // , so that we can get the remaining time
      plist[p_index].rem_bt -= t;
      // the reason is that,we already know that it has burst
      // time of x ms and we have to remove the time quantum
      // , so that we can get the remaining time
      printf("Process %d ran for %dms. Remaining: %dms\n", plist[p_index].pid,
             t, plist[p_index].rem_bt);
      enqueue(p_index);
      // as this is more time consuming  push to the
      // queue and then move the next one
    }
  }

  printf("PID\tBurst Time");
  for (i = 0; i < n; i++) {
    printf("%d\t%d\n", plist[i].pid, plist[i].burst_time);
  }
  printf("\nAll processes have been completed.\nTotal time taken : %d", time);
  return 0;
}
