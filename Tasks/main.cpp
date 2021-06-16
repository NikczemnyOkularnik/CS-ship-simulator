#include <iostream>
#include <string>

class Ship
{
    int id_;
    std::string name_;
    float speed_;
    short int maxCrew_;
    float capacity_;

    public:
    void setName(const std::string& name) {name_ =  name;}
    std::string getName() const {return name_;}
    Ship(): id_(-1) {}
    Ship(int id_, std::string name, float speed_, short int maxCrew_, float capacity_);
};
