
class soldier:public Object,pubic Point2d{

    int Walking_speed;
    int life;
    int Attack_capabilities;
    Weapon w;
    Armor A;
    soldier(double x,double y,int WS,int life,int AC):Point2d(x,y),Walking_speed(WS),life(life),Attack_capabilities(AC){
    }
    setLocation(double x, double y){
    Point2d.setX(x);
    Point2d.setY(y);
    }
    int getLife(){return life;}
    int getWalking_speed(){return Walking_speed;}
    Armor getArmor(){return A;}
    void setArmor(Armor a){A=a;}
    Weapon getWeapon(){return w;}
    int getAttack_capabilities(){return Attack_capabilities;}
    virtual void setFullLife()=0;
    void setLife(int x){life=x;}



    void walk();
    void attack();

};
