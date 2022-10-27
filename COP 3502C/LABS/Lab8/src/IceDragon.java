// This class is derived from the Dragon class
public class IceDragon extends Dragon {
    // Constructor for the Ice Dragon class
    public IceDragon(String name, String image) {
        /*
        * Accessing the Dragon class's constructor which
        * contains the name and image fields.
        * */
        super(name, image);
    }

    /*
    * Method to check whether dragon breathes fire and is always false
    * */
    public boolean canBreathFire() {
        return false;
    }
}
