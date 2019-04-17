#include <iostream>

using namespace std;

class Cube
{
         private : double size=10;
         public :
         Cube(double val)
         {
                  if(val>0)
                  {
                           size = val;
                  }
         }
         void setSize(double val)
         {
                  if(val>0)
                  {
                           size = val;
                  }
         }
         double getSize()
         {
                  return size;
         }
         double volume()
         {
                  return size*size*size;
         }
         void details()
         {
                  cout <<"\ndetails of rectangle";
                  cout <<"width="<<size   ;
                  cout <<"height="<<size<< endl;;
                  cout <<"length="<<size  << endl;;
                  cout <<"volume="<<volume()<< endl;
         }

};

int main()
{
                //Cube *cube = new Cube(10);
                Cube cube1(4);
                Cube cube2(3);
                Cube cube3(-2);
                cube1.details();
                cube2.details();
                cube3.details();

    cout << "Hello world!" << endl;
    return 0;
}
