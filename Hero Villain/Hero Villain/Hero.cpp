//
//  Hero.cpp
//  Hero Villain
//
//  Created by Robert Antonio on 1/21/15.
//  Copyright (c) 2015 Simpler. All rights reserved.
//

#include "Hero.h"

//constructor definition
Hero::Hero()
{
    
}

//overloaded constructor definition
Hero::Hero( std::string strName, std::string strSkill_1_Name, std::string strSkill_2_Name,
            std::string strMaster_Skill_Name, std::string strHealth_Potion_Name, std::string strMana_Potion_Name,
            int nHealth, int nMana, int nSkill_1_Power, int nSkill_2_Power, int nMaster_Skill_Power,
            int nHealth_Potion_Power, int nMana_Potion_Power)

            : Person(strName, strSkill_1_Name, strSkill_2_Name, strMaster_Skill_Name, strHealth_Potion_Name, strMana_Potion_Name,
                     nHealth, nMana, nSkill_1_Power, nSkill_2_Power, nMaster_Skill_Power,
                     nHealth_Potion_Power, nMana_Potion_Power)
{
    
}

//destructor definition
Hero::~Hero()
{
    
}