
class Watercraft {
   String registration, color, model;
   int number, yearOfProduction;
   public Watercraft(String registration, int number, String color, String model, int yearOfProduction) {
       this.registration = registration;
       this.number = number;
       this.color = color;
       this.model = model;
       this.yearOfProduction = yearOfProduction;
   }
   void displayInfo() {
       System.out.println("Registration: " + registration);
       System.out.println("Number: " + number);
       System.out.println("Color: " + color);
       System.out.println("Model: " + model);
       System.out.println("Year of Production: " + yearOfProduction);
   }
}
class Boat extends Watercraft {
   String boatType;
   int capacity;
   public Boat(String registration, int number, String color, String model, int yearOfProduction, String boatType, int capacity) {
       super(registration, number, color, model, yearOfProduction);
       this.boatType = boatType;
       this.capacity = capacity;
   }
   void displayInfo() {
       super.displayInfo();
       System.out.println("Boat Type: " + boatType);
       System.out.println("Capacity: " + capacity);
   }
}
class Jetski extends Watercraft {
   int enginePower;
   public Jetski(String registration, int number, String color, String model, int yearOfProduction, int enginePower) {
       super(registration, number, color, model, yearOfProduction);
       this.enginePower = enginePower;
   }
   void displayInfo() {
       super.displayInfo();
       System.out.println("Engine Power: " + enginePower);
   }
   }
   void displayInfo() {
       super.displayInfo();
       System.out.println("Length: " + length);
       System.out.println("Luxury Level: " + luxuryLevel);
     
class Yacht extends Watercraft {
   int length;
   String luxuryLevel;
   public Yacht(String registration, int number, String color, String model, int yearOfProduction, int length, String luxuryLevel) {
       super(registration, number, color, model, yearOfProduction);
       this.length = length;
       this.luxuryLevel = luxuryLevel;
   }
public class Main {
   public static void main(String[] args) {
       Marina marina = new Marina("Marina1", 50, "123 Marina St");
       Jetski jetski = new Jetski("REG124", 1, "Blue", "Model2", 2021, 200);
       Boat boat = new Boat("REG123", 2, "Yellow", "Model6", 2021, "Speedtboat", 5);
       Yacht yacht = new Yacht("REG125", 3, "Black", "Model3", 2021, 26, "Small");
       marina.addWatercraft(jetski);
       marina.addWatercraft(boat); 
       marina.addWatercraft(yacht);
       boat.displayInfo();
       jetski.displayInfo();
       yacht.displayInfo();
       marina.removeWatercraft(jetski);
       marina.removeWatercraft(boat);
       marina.removeWatercraft(yacht);
   }
}
class Marina {
   String name, address;
   int capacity;
   ArrayList<Watercraft> watercrafts;
   public Marina(String name, int capacity, String address) {
       this.name = name;
       this.capacity = capacity;
       this.address = address;
       this.watercrafts = new ArrayList<>();
   }
   void addWatercraft(Watercraft watercraft) {
       if (watercrafts.size() >= capacity) {
           throw new RuntimeException("Marina is full");
       }
       for (Watercraft w : watercrafts) {
           if (w.registration.equals(watercraft.registration)) {
               throw new RuntimeException("Watercraft is already in the marina");
           }
       }
       watercrafts.add(watercraft);
   }
   void removeWatercraft(Watercraft watercraft) {
       if (!watercrafts.remove(watercraft)) {
           throw new RuntimeException("Watercraft does not exist in the marina");
       }
   }
}
