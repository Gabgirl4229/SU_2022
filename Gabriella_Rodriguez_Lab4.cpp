#include <iostream>

//function prototypes
std::string rocketship(std::string path);
std::string rotateRight(std::string arr[]);
std::string rotateLeft(std::string arr[]);
int advance(std::string direction, int x, int y);

int main() {

    //create variables for main function
    std::string path;

    //set up input for path
    std::cout << "Input: ";
    std::cin >> path;


    //print results
    std::cout << "Return Value: {" << rocketship(path) << "}" << std::endl;

    
}

std::string rocketship(std::string path) {

    //create array for cardinal directions
    std::string direction[] = {"up", "right", "down", "left"};

    //create variables for direction and coordinates
    std::string currentDirection = direction[0];

    //set x and y coordinates
    int x = 0;
    int y = 0;

    //for every letter  in the sequence...
    for (int i = 0; i < path.size(); i++) {
        switch (path[i]) {
            case 'R':
                //rotate all elements in the string to the right
                currentDirection = rotateRight(direction);
                break;
            case 'L':
                //rotate all elements in the string to the left
                currentDirection = rotateLeft(direction);
                break;
            case 'A':
                if (currentDirection == "up" || currentDirection == "down") {
                    //increase/decrease y by 1
                    y = advance(currentDirection, x, y);
                } else if (currentDirection == "left" || currentDirection == "right") {
                    //increase/decrease x by 1
                    x = advance(currentDirection, x, y);
                }
                break;
        }
    }

    //final direction and coordinates
    return "x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", direction: '" + currentDirection + "'";
    
    
}

std::string rotateRight(std::string arr[]) {
    std::string tempR = arr[0];
    for (int i = 0; i < 3; i++) {
        arr[i] = arr[i + 1];
    }
    arr[3] = tempR;
    return arr[0];
}

std::string rotateLeft(std::string arr[]) {
    std::string tempL = arr[3];
    for (int i = 3; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = tempL;
    return arr[0];
}

int advance(std::string direction, int x, int y) {

    //change the x and y coordinates based on direction
    if (direction == "down") {
        y++;
        return y;
    } else if (direction == "up") {
        y--;
        return y;
    } else if (direction == "right") {
        x++;
        return x;
    } else if (direction == "left") {
        x--;
        return x;
    }
}