#pragma once

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

class Base;
class A;
class B;
class C;

Base * generate(void);
void identify(Base * p);
void identify(Base & p);
