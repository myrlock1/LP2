#include <iostream>
#ifndef 'FIGURES_H'
#define 'FIGURES_H'

using namespace std;

class figure{
  protected:
    int color;
  public:
    figure();
    ~figure();
    virtual draw();
}
#endif
