#include <iostream>
#include <vector>
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
  vector<Shape*> Shapes;
  vector<double> Surfaces;

  Triangle t1(1, 2);
  Triangle t2(3, 4);
  Triangle t3(5, 6);

  Rectangle r1(1, 2);
  Rectangle r2(3, 4);
  Rectangle r3(5, 6);

  Circle c1(4);
  Circle c2(9);
  Circle c3(16);

  Shapes.insert(Shapes.end(), {&t1, &t2, &t3, &r1, &r2, &r3, &c1, &c2, &c3});

  for (int i = 0; i < Shapes.size(); i++) {
    Surfaces.push_back(Shapes[i]->CalculateSurface());
  }

  for (int i = 0; i < Shapes.size(); i++) {
    cout << Surfaces[i] << endl;
  }
}
