#include <iostream>
using namespace std;
#define pi 3.14
class Dimensions//BASE CLASS
{
protected:
    float area;
    float length;
    float breadth;
    float height;
public:
    float volume;
    void set_rectangle_dimensions(float a, float b)
    {
        length = a;
        breadth = b;
    }
    float radius;
    void set_cuboid_dimensions(float a,float b, float c)
    {
        length=a;
        breadth=b;
        height=c;
    }
    void set_circle_radius(float r)
    {
        radius = r;
    }
    void set_sphere_radius(float r)
    {
        radius = r;
    }
};
class area_of_rectangle : virtual public Dimensions//INHERITED FROM Dimensions
{
public:
    void calculate_area()
    {
        area = length * breadth;
        cout << area << endl;
    }
};
class area_of_circle : virtual Dimensions//INHERITED FROM Dimensions
{
public:
    void calculate_area()
    {
        area = pi * radius * radius;        
        cout << area << endl;
    }
};
class volume_of_sphere : virtual public Dimensions//INHERITED FROM Dimensions
{
public:
    void calculate_volume()
    {
        volume = (4.0/3) *pi * radius * radius * radius;        
        cout << volume << endl;
    }
};
class volume_of_cuboid : virtual public Dimensions//INHERITED FROM Dimensions
{
public:
    void calculate_volume()
    {
        volume = length*breadth*height;        
        cout << volume << endl;
    }
};
class circle: public volume_of_sphere,public area_of_circle
{
    public:
    void set_circle_values(float a){
        set_circle_radius(a);
    }
    void set_sphere_values(float a)
    {
        set_sphere_radius(a);
    }
};
class rectangle: public volume_of_cuboid ,public area_of_rectangle
{
    public:
    void set_reactangle_values(float a,float b)
    {
        set_rectangle_dimensions(a,b);
    }
    void set_cuboid_values(float a,float b,float c)
    {
        set_cuboid_dimensions(a,b,c);
    }

};
int main()
{
    circle one;
    one.set_circle_radius(23);
    one.set_sphere_values(23);
    one.calculate_area();
    one.calculate_volume();
    rectangle two;
    two.set_reactangle_values(12,10);
    two.set_cuboid_values(10,20,30);
    two.calculate_area();
    two.calculate_volume();
    return 0;
}
