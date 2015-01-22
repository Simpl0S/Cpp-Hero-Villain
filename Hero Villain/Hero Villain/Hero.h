//
//  Hero.h
//  Hero Villain
//
//  Created by Robert Antonio on 1/21/15.
//  Copyright (c) 2015 Simpler. All rights reserved.
//

#ifndef __Hero_Villain__Hero__
#define __Hero_Villain__Hero__

#include <iostream>

#include "Person.h"

class Hero : public Person
{
    
public:
    
    //constructor declaration
    Hero();
    
    //overloaded constructor declaration
    Hero(std::string, std::string, std::string, std::string, std::string, std::string,
         int, int, int, int, int, int, int);
    
    //destructor declaration
    ~Hero();
    
private:
    
protected:
    

};

#endif /* defined(__Hero_Villain__Hero__) */
