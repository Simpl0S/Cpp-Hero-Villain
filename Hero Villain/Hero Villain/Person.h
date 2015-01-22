//
//  Person.h
//  Hero Villain
//
//  Created by Robert Antonio on 1/21/15.
//  Copyright (c) 2015 Simpler. All rights reserved.
//

#ifndef __Hero_Villain__Person__
#define __Hero_Villain__Person__

#include <iostream>
#include <string>

class Person
{
public:
    
    //constructor declaration
    Person();
    
    //overloaded constructor declaration
    Person(std::string, std::string, std::string, std::string, std::string, std::string,
           int, int, int, int, int, int, int);
    
    //destructor declaration
    ~Person();
    
    //accessors declaration
    std::string getName(void) const;
    std::string getSkill_1_Name(void) const;
    std::string getSkill_2_Name(void) const;
    std::string getMaster_Skill_Name(void) const;
    std::string getHealth_Potion_Name(void) const;
    std::string getMana_Potion_Name(void) const;
    int getHealth(void) const;
    int getMana(void) const;
    int getSkill_1_Power(void) const;
    int getSkill_2_Power(void) const;
    int getMaster_Skill_Power(void) const;
    int getHealth_Potion_Power(void) const;
    int getMana_Potion_Power(void) const;
    
    
    //mutators declaration
    void setName(std::string);
    void setSkill_1_Name(std::string);
    void setSkill_2_Name(std::string);
    void setMaster_Skill_Name(std::string);
    void setHealth_Potion_Name(std::string);
    void setMana_Potion_Name(std::string);
    void setHealth(int);
    void setMana(int);
    void setSkill_1_Power(int);
    void setSkill_2_Power(int);
    void setMaster_Skill_Power(int);
    void setHealth_Potion_Power(int);
    void setMana_Potion_Power(int);
    
    
private:
    
protected:
    
    std::string strName, strSkill_1_Name, strSkill_2_Name, strMaster_Skill_Name,
                strHealth_Potion_Name, strMana_Potion_Name;
    int nHealth, nMana, nSkill_1_Power, nSkill_2_Power, nMaster_Skill_Power,
        nHealth_Potion_Power, nMana_Potion_Power;
    
};


#endif /* defined(__Hero_Villain__Person__) */
