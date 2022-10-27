/**
 * The data class
 */
public class Cow {
    // Private data for Cow class
    private String cowName;
    private String cowImage;

    // Cow class constructor
    public Cow(String name) {
        cowName = name;
    }

    public String getName() {
        return cowName;
    }

    public String getImage() {
        return cowImage;
    }

    public void setImage(String _image) {
        cowImage = _image;
    }
}
