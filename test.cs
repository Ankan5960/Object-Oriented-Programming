class Car {
    private int _speed;

    public int Speed {
        // The 'get' block runs when you read the property
        get { 
            return _speed; 
        }      
        // The 'set' block runs when you assign to the property
        set {
            _speed = value;
        }
    }
}