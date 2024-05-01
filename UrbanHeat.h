#include "DataAnalysis.h"

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
    int getID();
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getLST();
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getCanopy();
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getAlbedo();
    /**
     * Requires:
     * Modifies:
     * Effects:
     */
    double getISA();

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
    
    void readDataFromFile(vector<UrbanHeat>) override;

    private:
        int ID;
        double lst;
        double canopy;
        double albedo;
        double isa;
    
    
}
