#ifndef URBANHEAT_H
#define URBANHEAT_H
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using std::ifstream, std::string, std::vector, std::cout, std::endl;

class UrbanHeat {
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
    UrbanHeat(long ID, double lst, double can, double alb, double isa);
    
    // Getters
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    long getID() const;
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
    void setID(long newID);
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

    bool operator<(const UrbanHeat &s) const;
    bool operator>(const UrbanHeat &s) const;
    bool operator<=(const UrbanHeat &s) const;
    bool operator>=(const UrbanHeat &s) const;
    bool operator==(const UrbanHeat &s) const;
    
    static void readDataFromFile(std::vector<UrbanHeat>& data);

    private:
        long ID;
        double lst;
        double can;
        double alb;
        double isa;

};
#endif