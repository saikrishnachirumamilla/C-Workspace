/*
 * signal.cpp
 *
 *  Created on: 17-Jan-2019
 *      Author: saikrishnachirumamilla
 */




#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void catch_ctlc (int sig_num)
{ printf("\nYou cannot kill this process\n");
  printf ("Enter an integer (enter 0 to terminate): ");
  fflush(stdout);
}

int main(int argc, char **argv)
{ // bind an interrupt bit to an interrupt handler function
  signal(SIGINT, catch_ctlc);

  int input;
  do
  { printf ("Enter an integer (enter 0 to terminate): ");
    scanf ("%d", &input);
    printf ("Square of %d = %d\n", input, input*input);
  } while (input != 0);
  return (1);
}
