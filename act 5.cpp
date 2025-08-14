import 'dart:io'

void main () {
    print ("Enter your Age: ");
    int? Age = int.parse(stdin.readLineSync()!);
    print ("Your Age is: $Age");
    
    if (Age <= 18) {
        print ("Minor");
    }
    else{
        print ("Adult");
    }
        
}