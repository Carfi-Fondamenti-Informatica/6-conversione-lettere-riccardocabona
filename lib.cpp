#include"lib.h"
bool lettera(char &a){
    bool flag=true;
    if((((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))){
        bool flag=true;
        if((a>=65)&&(a<=90)){
            a=a+32;
            return a;

        }else{
            a=a-32;
            return a;
        }
    }else{
        flag=false;
    }
    return flag;
}
