/**
 * A class representing all Pakuri critters encounter in Pakuri objects
 * @author Romel Fatal
 * @version 1.0
 * @March 19, 2022
 */
public class Pakudex {
    /**
     * Variables declaration
     */
    private int size,
            maxSize;
    private static Pakuri speciesArray[];

    /**
     * Default constructor
     */
    public Pakudex() {
        maxSize = 20;
        speciesArray = new Pakuri[maxSize];
    }

    /**
     * Parameterized constructor containing exactly capacity objects
     */
    public Pakudex(int capacity) {
        maxSize = capacity;
        speciesArray = new Pakuri[maxSize];
    }

    /**
     * Method for returning number of critters
     * @return an int value representing the number of critters
     * stored in Pakudex
     */
    public int getSize() {
        // Count the number of critters stored at that location
        int kuriSize = 0;

        for (int i = 0; i < speciesArray.length; i++) {
            if (speciesArray[i] != null) {
                kuriSize++;
            }
        }
        return kuriSize;
    }

    /**
     * Method for returning max number of critters
     * @return an int value representing the max number of critters
     * stored in Pakudex
     */
    public int getCapacity() {
        return maxSize;
    }

    /**
     * Method for returning critter species
     * @return an object value representing the critter species in Pakudex
     */
    public Pakuri[] getSpeciesArray() {
        if (speciesArray[0] != null) {
            return speciesArray;
        } else {
            return null;
        }
    }

//    public String[] getSpeciesArray() {
//        if (speciesArray[0] == null) {
//            return null;
//        }
//
//        for (int i = 0; i < speciesArray.length; i++) {
//            speciesArray[i] =
//        }
//    }

    /**
     * Method for returning critter stats
     * @return an array value representing statistics on critters
     * stored in Pakudex
     */
    public int[] getStats(String species) {
        for (int i = 0; i < speciesArray.length; i++) {
            if (speciesArray[i].getSpecies().equals(species)) {
                int[] statResults = new int[3];
                statResults[0] = speciesArray[i].getAttack();
                statResults[1] = speciesArray[i].getDefense();
                statResults[2] = speciesArray[i].getSpeed();
                return statResults;
            }
        }
        return null;
    }

    /**
     * Method for sorting Pakuri stored in Pakudex
     */
    public void sortPakuri() {}

    /**
     * Method for returning current critter species
     * @return a true or false if the critter species is there
     * stored in Pakudex
     */
    public boolean addPakuri(String species) {
        for (int i = 0; i < speciesArray.length; i++) {
            if (i == speciesArray.length - 1 && speciesArray[i] != null) {
                System.out.println("Error: There's no space, Pakudex is full!");
                return false;
            }
            Pakuri kuri = new Pakuri(species);
            if (speciesArray[i] == null) {
                speciesArray[i] = kuri;
                System.out.println("Pakuri species " + speciesArray[i].getSpecies() + " " +
                        "successfully added!");
                return true;
            } else if (speciesArray[i].getSpecies().equals(kuri.getSpecies())) {
                System.out.println("Error: Pakudex already contains this species!");
                return false;
            }
        }
        return false;
    }

    /**
     * Method for returning evolve critters
     * @return a true or false value representing evolve critters
     * stored in Pakudex
     */
    public boolean evolveSpecies(String species) {
        for (int i = 0; i < speciesArray.length; i++) { // run in debug mode watch for error
            if (speciesArray[i].getSpecies().equals(species)) {
                speciesArray[i].evolve();
                return true;
            }
        }
        return false;
    }

    /**
     * Method for returning critter species
     * @return an object value representing critter species
     * stored in Pakudex
     */
    public Pakuri getPakuri(String species) {
        for (Pakuri kuri : speciesArray) {
            if (kuri.getSpecies().equals(species)) {
                return kuri;
            }
        }
        return null;
    }

    /**
     * Method for critter species
     */
    public void setSpeciesArray(Pakuri[] kuriSortedArray) {
        speciesArray = kuriSortedArray;
    }
}