#include <iostream>
#include <vector>

int numberOfDuplicates(const std::vector<int>& nums);

int main() {

    //sets up randomization system
    srand(time(0));

    //initializes the four vectors (empty)
    std::vector<int> vector1(4);
    std::vector<int> vector2(4);
    std::vector<int> vector3(8);
    std::vector<int> vector4(8);

    //adds values to vectors 1 and 2
    for (int i = 0; i < 4; i++) {
        vector1[i] = rand()%4 + 1;
        vector2[i] = rand()%4 + 1;
    }

    //adds values to vectors 3 and 4
    for (int i = 0; i < 8; i++) {
        vector3[i] = rand()%4 + 1;
        vector4[i] = rand()%4 + 1;
    }

    //prints out Vector 1's contents
    std::cout << "Vector 1: " << "{ ";
    for (int i = 0; i < 3; i++) {
        std::cout << vector1[i] << ", ";
    }
    std::cout << vector1[3] << " }" << std::endl;

    //prints out number of duplicates for Vector 1
    std::cout << "Duplicates: " << numberOfDuplicates(vector1) << "\n" << std::endl;

    //prints out Vector 2's contents
    std::cout << "Vector 2: " << "{ ";
    for (int i = 0; i < 3; i++) {
        std::cout << vector2[i] << ", ";
    }
    std::cout << vector2[3] << " }" << std::endl;

    //prints out number of duplicates for Vector 2
    std::cout << "Duplicates: " << numberOfDuplicates(vector2) << "\n" << std::endl;

    //prints out Vector 3's contents
    std::cout << "Vector 3: " << "{ ";
    for (int i = 0; i < 7; i++) {
        std::cout << vector3[i] << ", ";
    }
    std::cout << vector3[7] << " }" << std::endl;

    //prints out number of duplicates for Vector 3
    std::cout << "Duplicates: " << numberOfDuplicates(vector3) << "\n" << std::endl;

    //prints out Vector 4's contents
    std::cout << "Vector 4: " << "{ ";
    for (int i = 0; i < 7; i++) {
        std::cout << vector4[i] << ", ";
    }
    std::cout << vector4[7] << " }" << std::endl;

    //prints out number of duplicates for Vector 4
    std::cout << "Duplicates: " << numberOfDuplicates(vector4) << "\n" << std::endl;

    
    
}

int numberOfDuplicates(const std::vector<int>& nums) {

    int duplicates = 0;
    int count1(0), count2(0), count3(0), count4(0);

    //for every element in the vector
    for (int i = 0; i < nums.size(); i++) {
        //count how many times each possible number shows up
        if (nums[i] == 1)
            count1++;
        if (nums[i] == 2)
            count2++;
        if (nums[i] == 3)
            count3++;
        if (nums[i] == 4)
            count4++;
    }

    //if any of the counts are more than 1 the number will be considered a "duplicate"
    if (count1 > 1) {
        duplicates++;
    }
    if (count2 > 1) {
        duplicates++;
    }
    if (count3 > 1) {
        duplicates++;
    }
    if (count4 > 1) {
        duplicates++;
    }
   
    return duplicates;
}