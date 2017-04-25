/*
 * Morse code library
 *
 * Author: Alan Camargo - 2017
 */

#include <Arduino.h>

#define DOT 100
#define DASH 400

// ##################################### //
// ######## FUNCTION TEMPLATES ######### //
// ##################################### //

// Beeps
void dot(int);
void dash(int);

// Letters
void a(int);
void b(int);
void c(int);
void d(int);
void e(int);
void f(int);
void g(int);
void h(int);
void i(int);
void j(int);
void k(int);
void l(int);
void m(int);
void n(int);
void o(int);
void p(int);
void q(int);
void r(int);
void s(int);
void t(int);
void u(int);
void v(int);
void w(int);
void x(int);
void y(int);
void z(int);

// Numbers
void zero(int);
void one(int);
void two(int);
void three(int);
void four(int);
void five(int);
void six(int);
void seven(int);
void eight(int);
void nine(int);

// White space
void space(int);

// ##################################### //
// ############ FUNCTIONS ############## //
// ##################################### //

// Beeps

void dot(int buzzer)
{
  digitalWrite(buzzer, HIGH);
  delay(DOT);
  digitalWrite(buzzer, LOW);
}

void dash(int buzzer)
{
  digitalWrite(buzzer, HIGH);
  delay(DASH);
  digitalWrite(buzzer, LOW);
}

// Letters

void a(int buzzer)
{
  dot(buzzer);
  dash(buzzer);
}

void b(int buzzer)
{
  dash(buzzer);
  for (int i = 1; i <= 3; i++)
    dot(buzzer);
}

void c(int buzzer)
{
  for (int i = 1; i <= 2; i++)
  {
    dash(buzzer);
    dot(buzzer);
  }
}

void d(int buzzer)
{
  dash(buzzer);
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
}

void e(int buzzer)
{
  dot(buzzer);
}

void f(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
  dash(buzzer);
  dot(buzzer);
}

void g(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
  dot(buzzer); 
}

void h(int buzzer)
{
  for (int i = 1; i <= 4; i++)
    dot(buzzer); 
}

void i(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
}

void j(int buzzer)
{
  dot(buzzer);
  for (int i = 1; i <= 3; i++)
    dash(buzzer);
}

void k(int buzzer)
{
  dash(buzzer);
  dot(buzzer);
  dash(buzzer);
}

void l(int buzzer)
{
  dot(buzzer);
  dash(buzzer);
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
}

void m(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
}

void n(int buzzer)
{
  dash(buzzer);
  dot(buzzer);
}

void o(int buzzer)
{
  for (int i = 1; i <= 3; i++)
    dash(buzzer);
}

void p(int buzzer)
{
  dot(buzzer);
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
  dot(buzzer);
}

void q(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
  dot(buzzer);
  dash(buzzer);
}

void r(int buzzer)
{
  dot(buzzer);
  dash(buzzer);
  dot(buzzer);
}

void s(int buzzer)
{
  for (int i = 1; i <= 3; i++)
    dot(buzzer);
}

void t(int buzzer)
{
  dash(buzzer);
}

void u(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
  dash(buzzer);
}

void v(int buzzer)
{
  for (int i = 1; i <= 3; i++)
    dot(buzzer);
  dash(buzzer);
}

void w(int buzzer)
{
  dot(buzzer);
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
}

void x(int buzzer)
{
  dash(buzzer);
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
  dash(buzzer);
}

void y(int buzzer)
{
  dash(buzzer);
  dot(buzzer);
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
}

void z(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
}

// Numbers

void zero(int buzzer)
{
  for (int i = 1; i <= 5; i++)
    dash(buzzer);
}

void one(int buzzer)
{
  dot(buzzer);
  for (int i = 1; i <= 4; i++)
    dash(buzzer);
}

void two(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
  for (int i = 1; i <= 3; i++)
    dash(buzzer);
}

void three(int buzzer)
{
  for (int i = 1; i <= 3; i++)
    dot(buzzer);
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
}

void four(int buzzer)
{
  for (int i = 1; i <= 4; i++)
    dot(buzzer);
  dash(buzzer);
}

void five(int buzzer)
{
  for (int i = 1; i <= 5; i++)
    dot(buzzer);
}

void six(int buzzer)
{
  dash(buzzer);
  for (int i = 1; i <= 4; i++)
    dot(buzzer);
}

void seven(int buzzer)
{
  for (int i = 1; i <= 2; i++)
    dash(buzzer);
  for (int i = 1; i <= 3; i++)
    dot(buzzer);
}

void eight(int buzzer)
{
  for (int i = 1; i <= 3; i++)
    dash(buzzer);
  for (int i = 1; i <= 2; i++)
    dot(buzzer);
}

void nine(int buzzer)
{
  for (int i = 1; i <= 4; i++)
    dash(buzzer);
  dot(buzzer);
}

// White space

void space(int buzzer)
{
  delay(1000);
}
