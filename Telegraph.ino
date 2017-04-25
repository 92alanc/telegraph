#include <stdlib.h>
#include "morse.h"

#define BUZZER 2

void filterInput(char);

void setup()
{
  Serial.begin(9600);
  pinMode(BUZZER, OUTPUT);
}

void loop()
{
  String input = Serial.readString();
  for (int i = 0; i < input.length(); i++)
    filterInput(input[i]);
}

void filterInput(char input)
{
  switch (input)
  {
    // Lowercase letters
    
    case 'a':
      a(BUZZER);
      break;
    case 'b':
      b(BUZZER);
      break;
    case 'c':
      c(BUZZER);
      break;
    case 'd':
      d(BUZZER);
      break;
    case 'e':
      e(BUZZER);
      break;
    case 'f':
      f(BUZZER);
      break;
    case 'g':
      g(BUZZER);
      break;
    case 'h':
      h(BUZZER);
      break;
    case 'i':
      i(BUZZER);
      break;
    case 'j':
      j(BUZZER);
      break;
    case 'k':
      k(BUZZER);
      break;
    case 'l':
      l(BUZZER);
      break;
    case 'm':
      m(BUZZER);
      break;
    case 'n':
      n(BUZZER);
      break;
    case 'o':
      o(BUZZER);
      break;
    case 'p':
      p(BUZZER);
      break;
    case 'q':
      q(BUZZER);
      break;
    case 'r':
      r(BUZZER);
      break;
    case 's':
      s(BUZZER);
      break;
    case 't':
      t(BUZZER);
      break;
    case 'u':
      u(BUZZER);
      break;
    case 'v':
      v(BUZZER);
      break;
    case 'w':
      w(BUZZER);
      break;
    case 'x':
      x(BUZZER);
      break;
    case 'y':
      y(BUZZER);
      break;
    case 'z':
      z(BUZZER);
      break;
      
    // Uppercase letters
    case 'A':
      a(BUZZER);
      break;
    case 'B':
      b(BUZZER);
      break;
    case 'C':
      c(BUZZER);
      break;
    case 'D':
      d(BUZZER);
      break;
    case 'E':
      e(BUZZER);
      break;
    case 'F':
      f(BUZZER);
      break;
    case 'G':
      g(BUZZER);
      break;
    case 'H':
      h(BUZZER);
      break;
    case 'I':
      i(BUZZER);
      break;
    case 'J':
      j(BUZZER);
      break;
    case 'K':
      k(BUZZER);
      break;
    case 'L':
      l(BUZZER);
      break;
    case 'M':
      m(BUZZER);
      break;
    case 'N':
      n(BUZZER);
      break;
    case 'O':
      o(BUZZER);
      break;
    case 'P':
      p(BUZZER);
      break;
    case 'Q':
      q(BUZZER);
      break;
    case 'R':
      r(BUZZER);
      break;
    case 'S':
      s(BUZZER);
      break;
    case 'T':
      t(BUZZER);
      break;
    case 'U':
      u(BUZZER);
      break;
    case 'V':
      v(BUZZER);
      break;
    case 'W':
      w(BUZZER);
      break;
    case 'X':
      x(BUZZER);
      break;
    case 'Y':
      y(BUZZER);
      break;
    case 'Z':
      z(BUZZER);
      break;
    
    // Numbers
    case '0':
      zero(BUZZER);
      break;
    case '1':
      one(BUZZER);
      break;
    case '2':
      two(BUZZER);
      break;
    case '3':
      three(BUZZER);
      break;
    case '4':
      four(BUZZER);
      break;
    case '5':
      five(BUZZER);
      break;
    case '6':
      six(BUZZER);
      break;
    case '7':
      seven(BUZZER);
      break;
    case '8':
      eight(BUZZER);
      break;
    case '9':
      nine(BUZZER);
      break;
      
    // White space
    case ' ':
      space(BUZZER);
      break;
    
    // Default
    default:
      break;
  }
}
