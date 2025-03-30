#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    
    cout<<"Enter your Word:";
    cin>>a;
    
    if (a== "FORCE"){
        cout<<"A push or pull that can change an object's motion.";
    }else if (a== "MASS"){
        cout<<"The amount of matter in an object.";
    }else if (a== "VELOCITY"){
        cout<<"The rate of change of an objects position including direction.";
    }else if(a== "ACCELERATION"){
        cout<<"The rate of change of an object's position, including direction.";
    }else if (a== "MOMENTUM"){
        cout<<"A measure of an object's motion, calculated as mass times velocity";
     }else if (a== "ENERGY"){
        cout<<"The ability to do work.";
    }else if (a== "WORK"){
        cout<<"The force applied over a distance.";
    }else if(a== "POWER"){
        cout<<"The rate at which work is done.";
    }else if (a== "DISPLACEMENT"){
        cout<<" The change in position of an object.";
    }else if (a== "DISTANCE"){
        cout<<"The total path traveled by an object..";
    }else if (a== "SPEED"){
        cout<<"The rate of change of distance traveled.";
    }else if(a== "GRAVITY"){
        cout<<"The force of attraction between any two objects with mass.";
    }else if (a== "FRICTION"){
        cout<<"A force that opposes motion between surfaces in contact.";
    }else{
        cout<<"No word is found";
    }
    
   return 0;
}