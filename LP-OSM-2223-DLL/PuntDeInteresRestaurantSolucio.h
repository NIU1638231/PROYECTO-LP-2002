#pragma once
#include "PuntDeInteresBase.h"
#include <string>

class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{
public:
	PuntDeInteresRestaurantSolucio() {
		this->m_coord = Coordinate{ 0.0, 0.0 };
		this->m_name = "undefinit";
		this->m_wheelchair = false;
	}

	PuntDeInteresRestaurantSolucio(Coordinate coord, std::string name, std::string amenity, std::string cuisine, bool wheelchair)
	: PuntDeInteresBase(coord, name), m_amenity(amenity), m_cuisine(cuisine), m_wheelchair() {}

	std::string getName()
	{
		return std::string();
	}

	unsigned int getColor()
	{
		if ((m_cuisine == "pizza") || (m_wheelchair == true))
			return 0x03FCBA;
		else
		{
			if (m_cuisine == "chinese")
				return 0xA6D9F7;
			else
			{
				if (m_wheelchair == true)
					return 0x251351;
				else
					return PuntDeInteresBase::getColor();
			}
		}
	}

private:
	std::string m_cuisine;
	std::string m_amenity; //Afegit per Gianina
	bool m_wheelchair;

};
