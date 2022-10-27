/**
 * A class representing the different critters
 * It contains information such as critter species, attack level
 * defense level and speed
 * @author Romel Fatal
 * @version 1.0
 * @March 19, 2022
 */
public class Pakuri {
    /**
     * Variables storing critters' information
     */
    private String critterSpecies;
    private int attack,
            defense,
            speed;

    /**
     * Default constructor initializing all fields as described.
     */
    // Constructor for Pakuri class
    public Pakuri(String species) {
        critterSpecies = species;
        this.attack  = (species.length() * 7) + 9;
        this.defense = (species.length() * 5) + 17;
        this.speed   = (species.length() * 6) + 13;
    }


    /**
     * Method for returning critter species
     * @return a string value representing the critter species
     */
    public String getSpecies() {
        return critterSpecies;
    }

    /**
     * Method for returning attack value
     * @return an int value representing the critter's attack value
     */
    public int getAttack() {
        return attack;
    }

    /**
     * Method for returning defense value
     * @return an int value representing the critter's defense value
     */
    public int getDefense() {
        return defense;
    }

    /**
     * Method for returning speed value
     * @return an int value representing the critter's speed value
     */
    public int getSpeed() {
        return speed;
    }

    /**
     * Sets the critter's attack
     * @attack critter's attack to new attack
     */
    public void setAttack(int newAttack) {
        this.attack = newAttack;
    }

    /**
     * Species evolution as defined by new values
     * @att attack critter's evolution based on new value of attack
     * @att defense critter's evolution based on new value of defense
     * @att speed critter's evolution based on new value of speed
     */
    public void evolve() {
        this.attack *= 2;
        this.defense *= 4;
        this.speed *= 3;
    }
}