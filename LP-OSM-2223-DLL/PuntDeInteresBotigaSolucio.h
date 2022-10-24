#pragma once
#include "PuntDeInteresBase.h"
#include <string>

class PuntDeInteresBotigaSolucio : public PuntDeInteresBase
{
public:
	PuntDeInteresBotigaSolucio(){
		this->m_coord = Coordinate{ 0.0, 0.0 };
		this->m_name = "undefinit";
		this->m_shop = "undefinit";
		this->m_opening_hours = "undefinit";
		this->m_wheelchair = "undefinit";

	}

	PuntDeInteresBotigaSolucio(Coordinate coord, std::string name, std::string shop, std::string opening_hours, std::string wheelchair)
	: PuntDeInteresBase(coord,name), m_shop(shop), m_opening_hours(opening_hours), m_wheelchair(wheelchair){}

	unsigned int getColor()
	{
		if (m_shop == "supermarket")
			return 0xA5BE00;
		else
		{
			if (m_shop == "tobacco")
				return 0xFFAD69;
			else
			{
				if (m_shop == "bakery")
					return 0xE85D75;
				else
				{
					if ((m_shop == "bakery") || (m_opening_hours.find("06:00-22:00")) || (m_wheelchair == "yes"))
						return 0x4CB944;
					else
						return 0xEFD6AC;
				}
			}
		}

	}

	std::string getName()
	{
		return std::string();
	}

private:
	std::string m_shop;
	std::string m_opening_hours;
	std::string m_wheelchair;
};
