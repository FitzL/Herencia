#include <iostream>

using namespace std;

class Shape { //Lo quice hacer en ingles(vars), espero que eso no importe...
  protected: 
    double Height, Width;

  public:
    double GetArea(){
      return Height * Width;
    }

    double GetHeight() {
      return Height;
    }

    double GetWidth() {
      return Width;
    }

    void SetHeight(double H) {
      Height = H;
    }

    void SetWidth(double W) {
      Width = W;
    }
    
    Shape(double Height, double Width){
	SetHeight(Height);
	SetWidth(Width);
    }
};

int main (){
  cout << "Hello World!" << endl;
  Shape test(2,3);
  cout << test.GetHeight() << endl;
  cout << test.GetWidth() << endl;
  cout << test.GetArea() << endl;

  test.SetWidth(10);
  test.SetHeight(2);
  cout << test.GetHeight() << endl;
  cout << test.GetWidth() << endl;
  cout << test.GetArea() << endl;
}
