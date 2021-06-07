class ParkingSystem {
public:
    int bigCar; int mediumCar; int smallCar;
    
    ParkingSystem(int big, int medium, int small) {
        
        bigCar = big;
        mediumCar = medium;
        smallCar = small;
        
    }
    
    bool addCar(int carType) {
        
        if (carType == 1 && bigCar > 0) {
            bigCar--;
            return true;
        }
        
        else if (carType == 2 && mediumCar > 0) {
            mediumCar--;
            return true;
        }
        
        else if (carType == 3 && smallCar > 0) {
            smallCar--;
            return true;
        }
        
        else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
