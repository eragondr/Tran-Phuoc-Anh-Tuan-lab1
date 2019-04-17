#include <iostream>
#include <math.h>
using namespace std;


//JAVA

// WITH CONSTRUCTOR
class Point3D
{
private :
    double x,y,z;
public:
    Point3D(double X, double Y, double Z)
    {
        x = X;
        y = Y;
        z = Z;
    }
    double distanceFromCenter()
    {
        return distanceFrom(0,0,0);
    }
    double distanceFrom(Point3D other)
    {
        return   pow(x-other.x,2)+
                 pow(y-other.y,2)+
                 pow(z-other.z,2);
    }

    double distanceFrom(double xVal, double yVal, double zVal)
    {
        return   pow(x-xVal,2)+
                 pow(y-yVal,2)+
                 pow(z-zVal,2);
    }


    void details()
    {
        cout << endl<<"x="<< x<<endl << "y="<< y<<endl<<"z="<<z<<endl;
        //cout <<"X= "<<x<<" y="<< ;
    }

};


int main()
{
    Point3D point1(2,3,4);
    Point3D point2(3,7,8);
     cout<<"point1:";
    point1.details();
     cout<<"point2:";
    point2.details();
    cout<<"The distance between point1 and (0,0,0) is : " <<
        point1.distanceFromCenter()<<endl;
    cout<<"The distance between point1 and point2 is : " <<
        point1.distanceFrom(point2)<<endl;

    cout<<"The distance between point1 and other is : " <<
        point1.distanceFrom(3,5,1);


    return 0;
}
