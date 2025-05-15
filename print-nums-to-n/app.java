public class App {
    public static void main(String[] args) {
        int n = 1000;

        long start = System.nanoTime();

        for (int i = 0; i <= n; i++) {
            System.out.println(i);
        }

        long end = System.nanoTime();

        double executionTime = (end - start) / 1_000_000_000.0; // Convert nanoseconds to seconds
        System.out.println("Execution time: " + executionTime);
    }
}