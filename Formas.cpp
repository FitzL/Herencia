#include <iostream>
#define PI 3.141592653589793238462643383279 //30 digitos, eso da

using namespace std;

class Shape { //Está todo en inglés...
  protected: 
    double Height, Width;

  public:
    // Methods
    virtual double CalculateSurface() = 0;

    //Getters
    double GetHeight() {
      return Height;
    }

    double GetWidth() {
      return Width;
    }

    //Setters
    void SetHeight(double H) {
      Height = H;
    }

    void SetWidth(double W) {
      Width = W;
    }
    
    //Constructor
    Shape(double Height, double Width = -1){
	SetHeight(Height);
	SetWidth(Width);
    }
};

class Triangle : public Shape{
  public:
    double CalculateSurface(){
      return Height * Width * 0.5d;
    }

  using Shape::Shape; //Jalo el mismo constructor
};

class Rectangle : public Shape{
  public:
    double CalculateSurface(){
      return Height * Width;
    }

  using Shape::Shape; 
};

class Circle : public Shape{
  public:
    double CalculateSurface(){
      return (Height) * (Height) * PI;
    }

    void SetRadius(double r) {
      Height = r;
      Width = r;
    }

    Circle(double r) : Shape(r, r) { }
};

int main (){
  cout << "Hello World!" << endl;
  Triangle test(5, 3);
  cout << test.GetHeight() << endl;
  cout << test.GetWidth() << endl;
  cout << test.CalculateSurface() << endl;

  test.SetWidth(10);
  test.SetHeight(4);
  cout << test.GetHeight() << endl;
  cout << test.GetWidth() << endl;
  cout << test.CalculateSurface() << endl;

  Rectangle test1(5, 3);
  cout << test1.GetHeight() << endl;
  cout << test1.GetWidth() << endl;
  cout << test1.CalculateSurface() << endl;

  test1.SetWidth(10);
  test1.SetHeight(4);
  cout << test1.GetHeight() << endl;
  cout << test1.GetWidth() << endl;
  cout << test1.CalculateSurface() << endl;

  Circle test2(53);
  cout << test2.GetHeight() << endl;
  cout << test2.GetWidth() << endl;
  cout << test2.CalculateSurface() << endl;

  test2.SetRadius(4);
  cout << test2.GetHeight() << endl;
  cout << test2.GetWidth() << endl;
  cout << test2.CalculateSurface() << endl;
}
