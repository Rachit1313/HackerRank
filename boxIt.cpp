
//Implement the class Box  
class Box{
  int l;
  int b;
  int h;
  public:
  Box();
  Box(int a,int b,int c);
  Box( Box& obj);
  int getLength()const;
  int getBreadth()const;
  int getHeight()const;
  long long CalculateVolume()const;
  bool operator<(Box& b);
};
  ostream& operator<<(ostream& out,Box& B);
  
  Box::Box(){
      this->l = 0;
      this->b = 0;
      this->h = 0;
  }
  Box::Box(int a,int b,int c){
      this->l = a;
      this->b = b;
      this->h = c;
  }
  Box::Box( Box& obj){
      this->l = obj.l;
      this->b = obj.b;
      this->h = obj.h; 
  }
  int Box::getLength()const{
      return this->l;
  }
  int Box::getBreadth()const{
      return this->b;
  }
  int Box::getHeight()const{
      return this->h;
  }
  long long Box::CalculateVolume()const{
      unsigned long long vol;
      vol = (long)(l)*b*h;
      return vol;
  }
  bool Box::operator<(Box &b){
      return (this->l< b.l) || (this->b < b.b && this->l == b.l) || (this->h < b.h && this->b == b.b && this->l == b.l);
  }
  
  ostream& operator<<(ostream& out,Box& B){
      out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
      return out;
  }
  
