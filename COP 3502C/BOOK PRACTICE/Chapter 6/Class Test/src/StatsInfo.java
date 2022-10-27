public class StatsInfo {
    // Note: This class intentionally has errors

    private int num1;
    private int num2;

    public void setNum1(int numVal) {
        num1 = numVal;
    }

    public void setNum2(int numVal) {
        num2 = numVal;
    }

    public int getNum1() {
        return num1;
    }

    public int getNum2() {
        return num2;
    }

    public int getAverage() {
        return num1 + num2 / 2;
    }
}
