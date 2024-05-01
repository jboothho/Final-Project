#include "UrbanHe.h"

class UrbanHeat : public DataAnalysis {
public:
    
    Urban_Heat:: Urban_Heat(){
        this -> ID = 0;
        this -> lst = 0;
        this -> can = 0;
        this -> alb = 0;
        this -> isa = 0;
    }
    
    Urban_Heat::Urban_Heat(int ID, double lst, double can, double alb, double isa)
        : ID(ID), lst(lst), canopy(can), albedo(alb), isa(isa) {}
    
    // Getters
        int getID() const { return ID; }
        double getLST() const { return lst; }
        double getCanopy() const { return canopy; }
        double getAlbedo() const { return albedo; }
        double getISA() const { return isa; }

        // Setters
        void setID(int newID) { ID = newID; }
        void setLST(double newLST) { lst = newLST; }
        void setCanopy(double newCanopy) { canopy = newCanopy; }
        void setAlbedo(double newAlbedo) { albedo = newAlbedo; }
        void setISA(double newISA) { isa = newISA; }

    private:
        int ID;
        double lst;
        double canopy;
        double albedo;
        double isa;
    
    
}
