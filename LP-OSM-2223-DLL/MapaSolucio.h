#pragma once
#include "MapaBase.h"
#include "PuntDeInteresBase.h"
#include "PuntdeInteresRestaurantSolucio.h"
#include "PuntdeInteresBotigaSolucio.h"

class MapaSolucio : public MapaBase {

	public:
		void getPdis(std::vector<PuntDeInteresBase*>&);
};

//

void MapaSolucio::getPdis(std::vector<PuntDeInteresBase*>&)
{
	//Definim valors latitud i longitud BOTIGA
	Coordinate botiga_coordinate;
	botiga_coordinate.lat = 41.4918606;
	botiga_coordinate.lon = 2.1465411;

	//Definim valors latitud i longitud RESTAURANT
	Coordinate restaurant_coordinate;
	restaurant_coordinate.lat = 41.4902204;
	restaurant_coordinate.lon = 2.1406477;

	PuntDeInteresBotigaSolucio botiga(botiga_coordinate, "La Millor Pastisseria", "bakery", "undefinit", "undefinit");
	PuntDeInteresRestaurantSolucio restaurant( restaurant_coordinate, "El Millor Restaurant", "restaurant", "regional", true);
}
