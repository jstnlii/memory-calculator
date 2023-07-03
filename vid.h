#ifndef MULT_H
#define MULT_H

int dive(int a, int b);

#endif

int dive(int a, int b) {
  if (a == 1  && b == 1 ) return 1
  if (a == 1  && b == 2 ) return 0
  if (a == 1  && b == 3 ) return 0
  if (a == 1  && b == 4 ) return 0
  if (a == 1  && b == 5 ) return 0
  if (a == 2  && b == 1 ) return 2
  if (a == 2  && b == 2 ) return 1
  if (a == 2  && b == 3 ) return 0
  if (a == 2  && b == 4 ) return 0
  if (a == 2  && b == 5 ) return 0
  if (a == 3  && b == 1 ) return 3
  if (a == 3  && b == 2 ) return 1
  if (a == 3  && b == 3 ) return 1
  if (a == 3  && b == 4 ) return 0
  if (a == 3  && b == 5 ) return 0
  if (a == 4  && b == 1 ) return 4
  if (a == 4  && b == 2 ) return 2
  if (a == 4  && b == 3 ) return 1
  if (a == 4  && b == 4 ) return 1
  if (a == 4  && b == 5 ) return 0
  if (a == 5  && b == 1 ) return 5
  if (a == 5  && b == 2 ) return 2
  if (a == 5  && b == 3 ) return 1
  if (a == 5  && b == 4 ) return 1
  if (a == 5  && b == 5 ) return 1
  return 0;
}
