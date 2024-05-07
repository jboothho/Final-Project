#include "DataAnalysis.h"
#ifndef URBANHEAT_H
#define URBANHEAT_H

class UrbanHeat : public DataAnalysis {
public:
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    UrbanHeat();
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    UrbanHeat(int ID, double lst, double can, double alb, double isa);
    
    // Getters
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    int getID() const;
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getLST() const;
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getCanopy() const;
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getAlbedo() const;
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getISA() const;

        // Setters
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    void setID(int newID);
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    void setLST(double newLST);
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    void setCanopy(double newCanopy);
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    void setAlbedo(double newAlbedo);
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    void setISA(double newISA);
    
    void readDataFromFile(std::vector<UrbanHeat>& data);

    private:
        int ID;
        double lst;
        double can;
        double alb;
        double isa;

};
#endif