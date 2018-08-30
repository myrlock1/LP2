#ifndef MY_VECTOR_H
#define MY_VECTOR_H
using namespace std;

template <class T>

class my_vector
{
    private:
      int m_size;
      T *p_data;
      int MAX_CAP;
      static const int Max = 10;
      int contador=0;

    public:
      my_vector(int a_size=Max); //constructor
      ~my_vector(); //destructor
      void push_back();
}

my_vector<T>::my_vector(int a_size){
      int *V = new V[a_size];
}
my_vector<T>::~my_vector(){
    delete []V;
}
void my_vector::push_back(T x){
  for(int i=0;i<a_size;i++){
       if(i==contador){
         V[i]=x;
         contador=contador+1;
       }
  }
}

#endif //MY_VECTOR_H
