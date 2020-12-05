 //sami mohammeden hmed esmail  
//second class
//department of computer 
#include <iostream>
using namespace std;
class shape{                                            //inheritance
    private:                                                             //
    	polygon,rectangle,tringle,square,circle,Elibse;     //class sahape inclde 6 shape
    public:                                              
	
	float area_perimeter;  	
};
class polygon:public shape   // i mmake class polgon from class shape      
{
    public:                   //
    void set_values(int a,  b)
	{width=a;hight=b;};
    protected:
    int width,hight; 
};
class rectangle:public polygon   // i make class rectangle from class polgone
{
    public:
    int area()                                  // class rectangle include function of area
    {return width*hight;};
    int perimeter()                               // hear function of perimeter
    {return 2width+2*hight;
	}
} ;
class triangle: public polygon    // make class triangle from polgone 
{
    int area()                         // function of area
    {return width*hight/2;}
    int perimeter()                      // function of perimeter
    {return width+hight)*2  
	}
};
class square: public polygon   //and also make  classsqure from  classpolgone
{
    int area()               // function of area
    {return hight*hight/2}
        
        
    int perimeter()              // function of perimeter
    {return 2*hight;
	}
    
};
class elipse:public shape    // hear imake class elipse to inheritance from shape
{    
public:
circle;
elipse::getmajor Radius;       //class elipse have radiuse
elipse::minor Radius;
Radiuse(r);
get Radiuse () const
int area()                  // function of area
{retuurn 3.14*major Radius*major Radiuus; // low of area 
}
};
class cirle:public elipse                       // class circle inharitance from elipse
{
int area();{return minorRadius*majorRadius*majorRaduis    
}
int perimeter(){retrun 2*3.14*major Radius\2
}
};
int main(){
    rectangle>>set values(2,2);  // iask commputer to give thise values to rectangle set in width and hight
    
    triangle>>set value(3,3);   // value of  width and hight
    square>>set value(4,4);   //
    polygon>>set value(2,2);//
    elipse>>set value(3,3);// and also igave value for widht and hight to elipse
    circle>>set value(2,2);
    cout <<rectangle.perimeter_area()'\n';  // iask computer to cout value of area and perimeter to rectangle and include thise in all shape under hear 
	cout <<triangle.perimmeter_area()'\n';
    cout <<square.perimeter_area()'\n';
    cout <<polygon.perimeter_area()'\n';
    cout<<elipse. perimeter_area()'\n';
    cout<<circle.perimeter_area()'\n';
 
 
return 0;    
}







