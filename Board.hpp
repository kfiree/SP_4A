 //
// Created by user on 02/05/2021.
//

#pragma once

#include "City.hpp"
#include "Color.hpp"
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::ostream;
using std::string;
using std::map;
using std::vector;

typedef struct{
    int infectionLvl;
    vector<City> neighbours;
    Color color;
    bool reaserchStation;
}cityInfo;

typedef map<City, cityInfo> citiesMap;


namespace pandemic{

    class Board
    {
        private:
            citiesMap _citiesMap;

            void readCountries();

            bool cures[4];

        public:

            Board();

            bool is_clean();

            bool isBuilt(City city);

            bool isCured(Color color);

            int & operator[](City city);

            friend ostream& operator<< (ostream& out, const Board& num);

    };
}