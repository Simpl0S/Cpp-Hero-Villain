//
//  Person.cpp
//  Hero Villain
//
//  Created by Robert Antonio on 1/21/15.
//  Copyright (c) 2015 Simpler. All rights reserved.
//

#include "Person.h"

//constructor definition
Person::Person()
{
    Person::strName                 = "";
    Person::strSkill_1_Name         = "";
    Person::strSkill_2_Name         = "";
    Person::strMaster_Skill_Name    = "";
    Person::strHealth_Potion_Name   = "";
    Person::strMana_Potion_Name     = "";
    Person::nHealth                 = 0;
    Person::nMana                   = 0;
    Person::nSkill_1_Power          = 0;
    Person::nSkill_2_Power          = 0;
    Person::nMaster_Skill_Power     = 0;
    Person::nHealth_Potion_Power    = 0;
    Person::nMana_Potion_Power      = 0;
}
//overloaded constructor definition
Person::Person(std::string strName, std::string strSkill_1_Name, std::string strSkill_2_Name,
               std::string strMaster_Skill_Name, std::string strHealth_Potion_Name, std::string strMana_Potion_Name,
               int nHealth, int nMana, int nSkill_1_Power, int nSkill_2_Power, int nMaster_Skill_Power,
               int nHealth_Potion_Power, int nMana_Potion_Power)
{
    Person::strName                 = strName;
    Person::strSkill_1_Name         = strSkill_1_Name;
    Person::strSkill_2_Name         = strSkill_2_Name;
    Person::strMaster_Skill_Name    = strMaster_Skill_Name;
    Person::strHealth_Potion_Name   = strHealth_Potion_Name;
    Person::strMana_Potion_Name     = strMana_Potion_Name;
    Person::nHealth                 = nHealth;
    Person::nMana                   = nMana;
    Person::nSkill_1_Power          = nSkill_1_Power;
    Person::nSkill_2_Power          = nSkill_2_Power;
    Person::nMaster_Skill_Power     = nMaster_Skill_Power;
    Person::nHealth_Potion_Power    = nHealth_Potion_Power;
    Person::nMana_Potion_Power      = nMana_Potion_Power;
}
//destructor definition
Person::~Person()
{
    
}
//accessors definition
std::string Person::getName(void) const
{
    return Person::strName;
}

std::string Person::getSkill_1_Name(void) const
{
    return Person::strSkill_1_Name;
}
std::string Person::getSkill_2_Name(void) const
{
    return Person::strSkill_2_Name;
}
std::string Person::getMaster_Skill_Name(void) const
{
    return Person::strMaster_Skill_Name;
}
std::string Person::getHealth_Potion_Name(void) const
{
    return Person::strHealth_Potion_Name;
}
std::string Person::getMana_Potion_Name(void) const
{
    return Person::strMana_Potion_Name;
}
int Person::getHealth(void) const
{
    return Person::nHealth;
}
int Person::getMana(void) const
{
    return Person::nMana;
}
int Person::getSkill_1_Power(void) const
{
    return Person::nSkill_1_Power;
}
int Person::getSkill_2_Power(void) const
{
    return Person::nSkill_2_Power;
}
int Person::getMaster_Skill_Power(void) const
{
    return Person::nMaster_Skill_Power;
}
int Person::getHealth_Potion_Power(void) const
{
    return Person::nHealth_Potion_Power;
}
int Person::getMana_Potion_Power(void) const
{
    return Person::nMana_Potion_Power;
}

//mutators definition

void Person::setName(std::string strName)
{
    strName = Person::strName;
}
void Person::setSkill_1_Name(std::string strSkill_1_Name)
{
    strSkill_1_Name = Person::strSkill_1_Name;
}
void Person::setSkill_2_Name(std::string)
{
    strSkill_2_Name = Person::strSkill_2_Name;
}
void Person::setMaster_Skill_Name(std::string strMaster_Skill_Name)
{
    strMaster_Skill_Name = Person::strMaster_Skill_Name;
}
void Person::setHealth_Potion_Name(std::string strHealth_Potion_Power)
{
    strHealth_Potion_Name = Person::strHealth_Potion_Name;
}
void Person::setMana_Potion_Name(std::string strMana_Potion_Name)
{
    strMana_Potion_Name = Person::strMana_Potion_Name;
}
void Person::setHealth(int nHealth)
{
    nHealth = Person::nHealth;
}
void Person::setMana(int nMana)
{
    nMana = Person::nMana;
}
void Person::setSkill_1_Power(int nSkill_1_Power)
{
    nSkill_1_Power = Person::nSkill_1_Power;
}
void Person::setSkill_2_Power(int nSkill_2_Power)
{
    nSkill_2_Power = Person::nSkill_2_Power;
}
void Person::setMaster_Skill_Power(int nMaster_Skill_Power)
{
    nMaster_Skill_Power = Person::nMaster_Skill_Power;
}
void Person::setHealth_Potion_Power(int nHealth_Potion_Power)
{
    nHealth_Potion_Power = Person::nHealth_Potion_Power;
}
void Person::setMana_Potion_Power(int nMana_Potion_Power)
{
    nMana_Potion_Power = Person::nMana_Potion_Power;
}








