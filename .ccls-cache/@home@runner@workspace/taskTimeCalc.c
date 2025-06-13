#include "stdio.h"
#include<unistd.h>
int quant =1;
typedef struct {
void (*fptr)(int);
int time_period;
}Task;
int min(int a, int b)
{

  if(a >= b)
    return b;
  else
    return a;
}
void pre_task(int time_period)
{
  printf("Preemptive task=>time_period =%d\n",time_period);
  sleep(time_period);
}
void Actaltask(int time_period)
{
  printf("Actual task=>time_period =%d\n",time_period);
  sleep(time_period);
    
}
void Actaltask2(int time_period)
{
  printf("Actual task2 =>time_period =%d\n",time_period);
  sleep(time_period);

}
void post_task(int time_period)
{
  printf("Post task=>time_period =%d\n",time_period);
  
}
int main(void) {

  Task task1 = {pre_task, 2};
  Task task2 = {Actaltask, 20};
  Task task3 = {Actaltask2, 10};
  Task task4 = {post_task, 2};
  Task tasks[4] = {task1, task2, task3,task4};
  for (int i = 0;; i = (i + 1) % 4)
    {
      if(tasks[i].time_period>0)
      {
        tasks[i].time_period = tasks[i].time_period - quant;
        int dt = min(quant,tasks[i].time_period);
        tasks[i].fptr(dt);
        tasks[i].time_period = tasks[i].time_period - dt;
        

      }

    }
  printf("Hello World\n");
  return 0;
}
