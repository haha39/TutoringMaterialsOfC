class CCircleException extends Exception {

}

class CCircle {
    private double radius;

    public void setRadius(double r) throws CCircleException {
        if (r < 0) {
            throw new CCircleException();
        } else {
            radius = r;
        }
    }

    public void show() {
        System.out.println("area =" + 3.14 * radius * radius);
    }
}

public class app13_6 {
    public static void main(String[] args) {
        CCircle cir = new CCircle();

        try {
            cir.setRadius(-22);
        } catch (CCircleException e) {
            System.out.println("exception = " + e);
        }

        cir.show();
    }
}
