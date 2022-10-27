// The class is derived from the Cow class
public class Dragon extends Cow {
    // Constructor for the Dragon class
    public Dragon(String name, String image) {
        // Accessing the Cow class's constructor which contains the name field
        super(name);

        // Accessing the setImage method from the Cow class
        this.setImage(image);
    }

    // Method to check whether dragon breathes fire and is always true
    public boolean canBreathFire() {
        return true;
    }
}
