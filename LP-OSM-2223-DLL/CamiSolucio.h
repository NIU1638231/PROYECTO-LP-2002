#pragma once
#include "CamiBase.h"

class CamiSolucio :public CamiBase
{
public:
	CamiSolucio() {}
	std::vector<Coordinate> getCamiCoords() { return m_punts; }
	void afegirCoord(Coordinate a) { m_punts.push_back(a); }
	void afegirCoord(double lat, double lon) { m_punts.push_back(Coordinate{ lat,lon }); }
private:
	std::vector<Coordinate> m_punts;
};