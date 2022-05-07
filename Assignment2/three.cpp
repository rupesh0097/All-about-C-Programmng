#include <iostream>
using namespace std;


class cement{
    public:
    int cement_cost;

    cement(){
        cement_cost = 150* 500;
    }
};

class steel{
    public:
    int steel_cost;

    steel(){
        steel_cost = 150* 500;
    }
};

class wood{
    public:
    int wood_cost;

    wood(){
        wood_cost = 150* 500;
    }
};

class cost: public cement, public steel, public wood{
    public: 
    int total_cost;

    cost(){
        total_cost = cement_cost + steel_cost + wood_cost;
    }

};

int main()
    {
        cost c;
        cout << "The cost of house is: "<< c.total_cost << endl;
    }