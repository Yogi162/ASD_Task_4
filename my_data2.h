#ifndef MY_DATA2_H_INCLUDED
#define MY_DATA2_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      :IF-41-08
    NAME       :Supra Yogi
    STUDENT ID :1301174264
**/

struct mytype2 {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
    */
    //=================================================
    // YOUR CODE STARTS HERE
    int id;
    string nama;
    int nilai;

    // YOUR CODE ENDS HERE
    //=================================================
};

mytype2 create_data(mytype2 d);
void view_data(mytype2 d);
void edit_data(mytype2 &d);

#endif // MY_DATA2_H_INCLUDED
