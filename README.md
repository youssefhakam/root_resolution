# Function Root Calculator

This C script allows you to calculate the root of a user-defined mathematical function within a specified range using the bisection method. The script provides a function to define the mathematical function you want to analyze and another function to find the root within the given range.

## Usage

1. **Function Definition:**

    Modify the `function` function in the script to define the mathematical function you want to analyze. By default, it's set to `sin(x)`.

2. **Specify the Range:**

    Define the range for finding the root by setting values for `a` and `b` in the `main` function. This specifies the interval `[a, b]` where the root will be calculated.

3. **Set Precision:**

    You can adjust the `epsilon` value to control the precision of the root calculation.

4. **Compile and Run:**

    Compile the script using your C compiler and execute it.

5. **View the Result:**

    The script will find and display the root of the function within the specified range with the chosen precision.

## Example

In the provided script, the function `sin(x)` is defined, and it calculates the root of this function within the range `[a, b]` where `a` and `b` are set to your desired values. You can modify the `function` function to analyze a different mathematical function.

```c
#include <stdio.h>
#include <math.h>

float function(float x) {
    return sin(x); // Define your function here
}

int main() {
    float a = -1.0;  // Set the lower bound of the range
    float b = 1.0;   // Set the upper bound of the range
    float epsilon = 0.000001;  // Set the desired precision
    float result = root(function, a, b, epsilon);

    printf("Root: %f\n", result);

    return 0;
}
