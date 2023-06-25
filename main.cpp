#include <iostream>

class Box1{
public:
    int x =30;
    int y= 50;
    
public:
    Box1(int x_, int y_){
        x = x_;
        y = y_;
    }
    
private:
    int z;
    
};

class Box2: public Box1 {
        
public:
    
    Box2(int x_, int y_):
    Box1(x_, y_)
    {
        
    }

    void getvalues() {
        std::cout<< " x = " << x << " y = " <<  y <<std::endl;
    }
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Box2 newbox(30,40);
    newbox.getvalues();
    
    int i = 30;
    
    while ( i >= 0) {
       
        
        std::cout <<"hell i value is " << i <<std::endl;
        --i;
    }
    
    
    return 0;
}
