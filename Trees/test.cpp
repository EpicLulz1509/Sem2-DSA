#include<iostream>
using namespace std;

class circle{
	public:
	int r;
	float c_area;
		circle(){
			cout << "Enter radius: ";
			cin >> r;
			c_area = 3.14 * r * r;
		}
		void area_circle(){
			cout << "Circle Area : " << c_area << endl;
		}
};

class rectangle: public circle{
	public:
		float r_area = r;
		rectangle(){
			cout << "Enter breadth: ";
			cin >> r;
			r_area *= r;
		}
		void area_rect(){
			cout << "Rectangle Area : " << r_area << endl;
		}
};

class box: public rectangle{
	public:
		float vol = r_area;
		box(){
			cout << "Enter height: ";
			cin >> r;
			vol *= r;
		}
		void volume(){
			cout << "Box Volume : " << vol << endl;
		}
};


int main(){
	box v1;
	v1.area_circle();
	v1.area_rect();
	v1.volume();
	return 0;
}