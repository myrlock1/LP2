#include <iostream>
#ifndef 'POINT_H'
#define 'POINT_H'

using namespace std;

class point{
protected:
  float x;
  float y;
public:
  point(int _x;int _y){
    x=_x;
    y=_y;
  }
  ~point(){
    delete []point;
  }
}
