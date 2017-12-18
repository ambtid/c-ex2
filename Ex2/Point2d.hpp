
class Point2d:public Object{
double _x;
double _y;
Point2d(double x,double y):_y(y),_x(x){
}
double getX(){
return _x;}
double getY(){
return _y;}
void setX(double x){_x=x;}
void setY(double y){_y=y;}

};
