#include <iostream>

using namespace std;
 class Rectangle{
     protected:
     int width;
     int height;
     public:
     void display(){
         cout << width << " " << height << endl;
     }
     void set_height(int h){
         this->height = h;
     }
    void set_width(int w){
         this->width = w;
     }
 };
 class RectangleArea: public Rectangle
 {
    //  private:
    //  int m_width;
    //  int m_height;
     public:
   void read_input(){
       cin >> width >> height;
   }
   void display(){
       // Rectangle::display();
       cout << width * height << endl;
   }
     
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
