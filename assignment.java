public abstract class Vehicle  {
    private String make;
    private String model;
    private int year;
    private String fueltype;
    private double fuelefficiency;
    public Vehicle(String make,String model,int year,String fueltype,double fuelefficiency){
        this.make=make;
        this.model=model;
        this.year=year;
        this.fueltype=fueltype;
        this.fuelefficiency=fuelefficiency;
    }
    public String getMake(){
        return make;
    }
    public String getModel(){
        return model;
    }
    public String getFuelTypr(){
        return fueltype;
    }
    public String getfuelefficiency(){
        return fuelefficiency;
    }
    public abstract double calculatefuelefficiency();
    public abstract double calculateDistanceTraveled();
    public abstract double getMaxSpeed();
}

public class Truck extends Vehicle{
    private truck cargocapacity;
    public Truck(String make,String model, int year,String fueltype, double fuelefficiency,double cargocapacity){
    super(make,model,year,fueltype,fuelefficiency);
    this.cargocapacity=cargocapacity;
}
    public double getCargoCapacity(){
        return CargoCapacity;
    }
    public double calculatefuelefficiency(){
        return getfuelefficiency()*(1.0/(1.0+(getcargocapacity()/1000.0)));
    }
    public double calculateDistanceTraveled(){
        return calculatefuelefficiency()*getfuelefficiency();
    }
    public double getMaxSpeed(){
        return 80.0;
    }
}

public class Motorcycle extends Vehicle{
    private double engineDisplacement;
    public Motorcycle(String make,String model,int year,String fueltype,double fuelefficiency){
        super(make,model,year,fueltype,fuelefficiency);
    }
    public double getenginedisplacement(){
        return enginedisplacement;
    }
    public double calculateDistanceTraveled(){
        return calculateDistanceTraveled()*getfuelefficiency();
    }
    public double getMaxSpeed(){
        return 80.0;
    }


}