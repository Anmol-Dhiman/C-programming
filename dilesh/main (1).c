/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//#include <math.h>

double e = 2.718281828;
double pi = 3.14159265;

double power_int(double x, int n)
{
    double ret = 1; //value to be returned
    for (int i = 0; i < n; i++)
    {
        ret = ret * x;
    }
    return ret;
}
void Add(void);
void Subtract(void);
void Multiply(void);
void Divide(void);
void trig(void);
double power(double x, double n);
void power_prompt(void);
double exponentiation(double n);
void exp_prompt(void);
long double factorial(int n);
void hyperbolic_trig(void);
void inverse_trig(void);
double radian_to_degree(double);
double degree_to_radian(double);
void quadratic_equation_solver(void);
void modulo_operation(void);
double nlog(double n);
void logarithm(void);
void root(void);
void square(void);
void cube_root(void);
void cube(void);
void modulus(void);
void angle_conversion(void);
void Area(void);
void BMI(void);
void Greatest_integer_function(void);
void Least_integer_function(void);
void Volume(void);
int main(void)
{
    printf("Welcome to our Advanced Calculator!");
    int choice = 1, option;
    while (choice == 1)
    {
        printf(" Enter the number of your desired operation to calculate from the following list of options: \n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Trigonometric\n6. Inverse Trignometric\n7. Hyperbolic Trignometric\n8. Logarithm\n9. Exponential\n10. Factorial\n11. Modulo Operation (Find the Remainder)\n12. Power\n13. Root\n14. Square\n15. Cuberoot\n16. Cube\n17. Degree/Radian Conversion\n18. Quadratic Equation Solver\n19. Modulus\n20. Greatest Integer (Floor)\n21. Least Integer Function (Ceiling)\n22. Volume of Solid Shapes\n23. Area & Surface Area (Total +Curved) of Various Shapes\n24. BMI\n25. Unit Conversion\n26. Signum Function\n27. Binary/Decimal/Hexadecimal Conversion\n28. Average of Numbers\n29. Percentage Calculation\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            Add();
            break;
        case 2:
            Subtract();
            break;
        case 3:
            Multiply();
            break;
        case 4:
            Divide();
            break;
        case 5:
            trig();
            break;
        case 6:
            inverse_trig();
            break;
        case 7:
            hyperbolic_trig();
            break;
        case 8:
            logarithm();
            break;
        case 9:
            exp_prompt();
            break;
        case 10:
            //factorial();
            break;
        case 11:
            modulo_operation();
            break;
        case 12:
            //power_prompt();
            break;
        case 13:
            root();
            break;
        case 14:
            square();
            break;
        case 15:
            cube_root();
            break;
        case 16:
            cube();
            break;
        case 17:
            angle_conversion();
            break;
        case 18:
            quadratic_equation_solver();
            break;
        case 19:
            modulus();
            break;
        case 20:
            Greatest_integer_function();
            break;
        case 21:
            Least_integer_function();
            break;
        case 22:
            Volume();
            break;
        case 23:
            Area();
            break;
        case 24:
            BMI();
            break;
        case 25:
            break;
        case 26:
            break;
        case 27:
            break;
        case 28:
            break;
        case 29:
            break;

        default:
            printf("Invalid Choice! Please Try again.\n");
            break;
        }

        printf("\nDo you want to calculate again? Enter 1 for yes and 0 for no: ");
        scanf("%d", &choice);
    }
    printf("\nBye bye!");
    return 0;
}

void Add(void)
{
    double x, y, sum;
    printf("Enter the number to find it's addition: ");
    scanf("%lf\n%lf", &x, &y);
    sum = x + y;

    printf("The sum of two numbers is %lf ", sum);
}

void Subtract(void)
{
    double x, y, subtract;
    printf("Enter the number to find it's subtraction: ");
    scanf("%lf\n%lf", &x, &y);
    subtract = x - y;

    printf("The difference of two numbers is %lf ", subtract);
}

void Multiply(void)
{
    double x, y, product;
    printf("Enter the number to find it's multiplication: ");
    scanf("%lf\n%lf", &x, &y);
    product = x * y;

    printf("The product of two numbers is %lf ", product);
}

void Divide(void)
{
    double x, y, divide;
    printf("Enter the number to find it's division: ");
    scanf("%lf\n%lf", &x, &y);
    divide = x / y;

    printf("The division of two numbers is %lf ", divide);
}

void trig(void)
{
    int choice, choice1, error_flag = 0; //to find if input was 90 or 0
    double x, value = 0, sinx;           //value= sinx to be calculated
    double cos_value = 0, cosx;
    printf("Choose from the following to calculate:\n1. sin(x)\n2. cos(x)\n3. tan(x)\n4. cosec(x)\n5. sec(x)\n6. cot(x)\n");
    scanf("%d", &choice);
    printf("Enter the angle in: \n1. Degree\n2. Radian\n");
    scanf("%d", &choice1);
    printf("Enter the value of x: ");

    scanf("%lf", &x);
    if ((x == 90) || (x == pi / 2))
        error_flag++;
    else if (x == 0)
        error_flag--;
    if (choice1 == 1)
    {
        x = x * pi / 180;
    }

    for (int i = 0; i < 100; i++)
    {
        value = -value + power(x, 2 * i + 1) / factorial(2 * i + 1);
    }

    for (int i = 0; i < 100; i++)
    {
        cos_value = -cos_value + power(x, 2 * i) / factorial(2 * i);
    }
    cos_value = -cos_value;
    cosx = cos_value;

    value = -value;
    sinx = value;
    if (choice1 == 1)
    {
        x = x * 180 / pi;
    }

    switch (choice)
    {
    case 1:
        printf("sin(%lf)=%lf", x, sinx);
        break;
    case 2:
        printf("cos(%lf)=%lf", x, cosx);
        break;
    case 3:
        if (error_flag == 1)
            printf("Error");
        else
            printf("tan(%lf)=%lf", x, sinx / cosx);
        break;
    case 4:
        if (error_flag == -1)
            printf("Error");
        else
            printf("cosec(%lf)=%lf", x, 1 / sinx);
        break;
    case 5:
        if (error_flag == 1)
            printf("Error");
        else
            printf("sec(%lf)=%lf", x, 1 / cosx);
        break;
    case 6:
        if (error_flag == -1)
            printf("Error");
        else
            printf("cot(%lf)=%lf", x, cosx / sinx);
        break;
    default:
        printf("You made a wrong choice! Exiting. Bye!");
    }
}

double nlog(double n)
{
    double x, y, ret = 0, save;
    int digit = 0;
    save = n;
    while (n > 1)
    {
        digit++;
        n = n / 10;
    }
    n = save; //printf("Number of digits: %d\n",digit);
    x = n / power_int(10, digit);
    //printf("Value of x: %lf\n",x);

    for (int i = 1; i <= 100; i++)
    {
        ret = ret - power_int((-x + 1), i) / i;
    }
    ret = ret + digit * 2.30258509299; //ln(10)=2.30258509299
    return ret;
}

void logarithm(void)
{
    double n, base;
    printf("Enter the number to find it's logarithm: ");
    scanf("%lf", &n);
    printf("Enter the base of the logarithm that you want to find: ");
    scanf("%lf", &base);
    double logbase = nlog(base);
    double answer = nlog(n) / logbase;
    printf("The log of %lf to the base %lf is: %lf\n", n, base, answer);
}

long double factorial(int n)
{
    long double ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret = ret * i;
    }
    return ret;
}

double exponentiation(double n)
{
    double ret = 0;

    for (int i = 0; i < 100; i++)
    {
        ret = ret + power_int(n, i) / factorial(i);
    }

    return ret;
}

void exp_prompt(void)
{
    double n, ret;
    printf("Enter the value of x in e^x: ");
    scanf("%lf", &n);
    ret = exponentiation(n);
    printf("e^%lf=%lf", n, ret);
}

double power(double x, double n)
{
    double y = n * nlog(x);
    double ret = exponentiation(y);
    return ret;
}

void hyperbolic_trig(void)
{
    int choice;
    double x, value;
    printf("Choose from the following to calculate:\n1. sinh(x)\n2. cosh(x)\n3. tanh(x)\n4. cosech(x)\n5. sech(x)\n6. coth(x)\n");
    scanf("%d", &choice);
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    switch (choice)
    {
    case 1:
        value = (exponentiation(x) - exponentiation(-x)) / 2;
        printf("sinh(%lf)=%lf", x, value);
        break;
    case 2:
        value = (exponentiation(x) + exponentiation(-x)) / 2;
        printf("cosh(%lf)=%lf", x, value);
        break;
    case 3:
        value = (exponentiation(x) - exponentiation(-x)) / (exponentiation(x) + exponentiation(-x));
        printf("tanh(%lf)=%lf", x, value);
        break;
    case 4:
        value = 2 / (exponentiation(x) - exponentiation(-x));
        printf("cosech(%lf)=%lf", x, value);
        break;
    case 5:
        value = 2 / (exponentiation(x) + exponentiation(-x));
        printf("sech(%lf)=%lf", x, value);
        break;
    case 6:
        value = (exponentiation(x) + exponentiation(-x)) / (exponentiation(x) - exponentiation(-x));
        printf("coth(%lf)=%lf", x, value);
        break;
    default:
        printf("You made a wrong choice! Exiting. Bye!");
    }
}

double radian_to_degree(double x)
{
    return 180 * x / pi;
}

double degree_to_radian(double x)
{
    return pi * x / 180;
}

//Radius of convergence of arctan series is 1 which is a problem.

void inverse_trig(void)
{
    double temp; //for temporary storage of variable

    printf("Choose from the following to calculate:\n1. arcsin(x)\n2. arccos(x)\n3. arctan(x)\n4. arccosec(x)\n5. arcsec(x)\n6. arccot(x)\n");

    double x, sin_in_x = 0, tan_in_x = 0, cosec_in_x = 0;
    int choice, choice1; //sin_in_x= sin inverse x or sin-1(x)

    scanf("%d", &choice);

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    if ((choice == 1) || (choice == 2))
    {
        for (int i = 0; i < 20; i++)
        {
            sin_in_x = sin_in_x + (factorial(2 * i) * power(x, 2 * i + 1)) / (power(power(2, i) * factorial(i), 2) * (2 * i + 1));
        }
    }

    if ((choice == 3) || (choice == 6))
    {
        temp = x;

        x = (2 * x) / (1 + x * x);
        for (int i = 0; i < 20; i++)
        {
            tan_in_x = tan_in_x + (factorial(2 * i) * power(x, 2 * i + 1)) / (power(power(2, i) * factorial(i), 2) * (2 * i + 1));
        }
        tan_in_x = tan_in_x / 2;
        x = temp;
    }

    if ((choice == 4) || (choice == 5))
    {
        temp = x;
        x = 1 / x;
        for (int i = 0; i < 20; i++)
        {
            cosec_in_x = cosec_in_x + (factorial(2 * i) * power(x, 2 * i + 1)) / (power(power(2, i) * factorial(i), 2) * (2 * i + 1));
        }
        x = temp;
    }

    printf("Do you want the answer in: \n1. Degree\n2. Radian\n");
    scanf("%d", &choice1);

    switch (choice)
    {
    case 1:
        if (choice1 == 1)
            sin_in_x = radian_to_degree(sin_in_x);
        printf("arcsin(%lf)=%lf", x, sin_in_x);
        break;
    case 2:
        if (choice1 == 1)
        {
            sin_in_x = radian_to_degree(sin_in_x);
            printf("arccos(%lf)=%lf", x, 90 - sin_in_x);
        }
        else
            printf("arccos(%lf)=%lf", x, pi / 2 - sin_in_x);
        break;
    case 3:
        if (choice1 == 1)
            tan_in_x = radian_to_degree(tan_in_x);
        printf("arctan(%lf)=%lf", x, tan_in_x);
        break;
    case 4:
        if (choice1 == 1)
            cosec_in_x = radian_to_degree(cosec_in_x);
        printf("arccosec(%lf)=%lf", x, cosec_in_x);
        break;
    case 5:
        if (choice1 == 1)
        {
            cosec_in_x = radian_to_degree(cosec_in_x);
            printf("arccosec(%lf)=%lf", x, 90 - cosec_in_x);
        }
        else
            printf("arccosec(%lf)=%lf", x, pi / 2 - cosec_in_x);
        break;
    case 6:
        if (choice1 == 1)
        {
            tan_in_x = radian_to_degree(tan_in_x);
            printf("arccot(%lf)=%lf", x, 90 - tan_in_x);
        }
        else
            printf("arccot(%lf)=%lf", x, pi / 2 - tan_in_x);
        break;
    default:
        printf("Wrong choice! exiting. Bye!");
    }
}

void quadratic_equation_solver(void)
{
    double a, b, c, x1, x2; //x1,x2 : Solution of quad. eqn.
    printf("Enter the value of a, b and c to solve the equation ax^2+bx+c=0: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("The roots are not real. ");
        printf("The value of the complex roots are: (%lf) + (%lf)i ,  (%lf) + (%lf)i ", -b / 2 * a, power(-discriminant, 0.5) / (2 * a), -b / 2 * a, -power(-discriminant, 0.5) / (2 * a));
    }
    else

        if (discriminant == 0)
    {
        printf("The roots are real and equal, and the value of them is: %lf", -b / 2 * a);
    }
    else
    {
        x1 = (-b + power(discriminant, 0.5)) / (2 * a);
        x2 = (-b - power(discriminant, 0.5)) / (2 * a);
        printf("The roots are unequal and real, and the value of those roots are: %lf , %lf", x1, x2);
    }
}

void modulo_operation(void) //The modulo operation returns the remainder or signed remainder of a division, after one number is divided by another (called the modulus of the operation).

{
    int a, b;
    printf("Enter the number you want to find the remainder of: ");
    scanf("%d", &a);
    printf("Enter the number by which you want to find it's remainder: ");
    scanf("%d", &b);
    printf("The remainder when %d is divided by %d is: %d", a, b, a % b);
}

void root(void)
{
    double n;
    printf("Enter the number you want to find the root of: ");
    scanf("%lf", &n);
    printf("The root of %lf is: %lf", n, power(n, 0.5));
}

void BMI(void)
{
    float weight, height, BMI;
    printf(" Enter the weight in kilogram \n");
    scanf("%f", &weight);

    printf(" Enter the height in metre \n");
    scanf("%f", &height);

    BMI = weight / (height * height);
    printf(" Your Body Mass Index is = %f \n", BMI);

    if (BMI >= 18.5 && BMI <= 24.9)
        printf(" You are lying in healthy range \n");

    else if (BMI >= 25)
        printf(" You are overweight \n");

    else
        printf(" You are underweight \n");
}

void square(void)
{
    double n;
    printf("Enter the number you want to find the square of: ");
    scanf("%lf", &n);
    printf("The square of %lf is: %lf", n, n * n);
}

void cube_root(void)
{
    double n;
    printf("Enter the number you want to find the  cube root of: ");
    scanf("%lf", &n);
    printf("The cube root of %lf is: %lf", n, power(n, 0.333333333));
}

void cube(void)
{
    double x;
    printf("enter the no whose cube you want to find \n");
    scanf("%lf", &x);
    printf("the no you enter is %lf\n", x);

    printf("the cube of %lf is %lf", x, x * x * x);
}

void angle_conversion(void)
{
    int x;
    double n1, n2;
    float pi = 3.14159265;
    printf("enter 1 if you want to convert degree into radian\n");
    printf("enter  any key except 1 if you want to convert radian into degree\n");
    scanf(" %d", &x);

    if (x == 1)
    {
        printf("enter the angle in degree which is to be convert in radian\n");
        scanf("%lf", &n1);
        printf("The angle in radian is %lf\n", n1 * (pi / 180));
    }
    else
    {
        printf("enter the angle in radian which is to be convert in degree\n");
        scanf("%lf", &n2);
        printf("the angle in degree is %lf\n", n2 * (180 / pi));
    }
}

void Greatest_integer_function(void)
{
    int b;
    float num;
    printf(" Enter a number \n ");
    scanf("%f", &num);

    b = num;
    if ((num - b) == 0)
    {
        printf(" Greatest integer of the num is : %d\n", b);
    }

    else if ((num - b) > 0)
    {
        printf(" Greatest integer of the num is : %d\n", b);
    }

    else
    {
        printf(" Greatest integer of the num is : %d\n", b - 1);
    }
}

void Least_integer_function(void)

{
    int b1;
    float num1;
    printf(" Enter a number \n ");
    scanf("%f", &num1);
    b1 = num1;

    if ((num1 - b1) == 0)
    {
        printf(" Least integer of the num is : %d\n", b1);
    }

    else if ((num1 - b1) > 0)
    {
        printf(" Least integer of the num is : %d\n", b1 + 1);
    }

    else
    {
        printf(" Least integer of the num is : %d\n", b1);
    }
}
void modulus(void)
{
    float a;
    printf("enter number whose modulus you want to take ");
    scanf("%f", &a);
    if (a >= 0)
    {
        printf("|a|is %f", a);
    }
    else
    {
        printf("|a| is %f", -1 * a);
    }
}

void Volume(void)
{
    double pie = 3.14159;
    int option;
    char choice;
    float num1, num2, weight, height, BMI, num, l1, l2, length, side;
    float volume, surface_area, curved_SA, Total_SA, side1, side2, side3, area, radius;
    int b1, b, num3, sum;

    printf("  1.Volume of cube. \n ");
    printf(" 2.Volume of cuboid. \n ");
    printf(" 3.Volume of cylinder. \n ");
    printf(" 4.Volume of prism. \n");

    printf(" Enter the operation to be performed. \n");
    scanf("%d", &option);

    switch (option)
    {

    case 1:

        printf(" Enter the length of side of cube in meter.\n");
        scanf("%f", &side);

        volume = side * side * side;
        printf(" Volume of cube is : %f \n", volume);
        break;

    case 2:

        printf(" Enter the length of all the three side of cuboid in meter.\n");
        scanf("%f%f%f", &side1, &side2, &side3);

        volume = side1 * side2 * side3;
        printf(" Volume of cuboid is : %f \n", volume);
        break;

    case 3:

        printf(" Enter the radius and height of the cylinder in meter.\n");
        scanf("%f%f", &radius, &height);

        volume = pie * radius * radius * height;
        printf(" Volume of cylinder is : %f \n", volume);
        break;

    case 4:

        printf(" Enter the area of cross section and length of prism in meter.\n");
        scanf("%f%f", &area, &side);

        volume = area * side;
        printf(" Volume of prism is : %f \n", volume);
        break;
    }
}

void Area(void)
{
    double pie = 3.14159;
    int option;
    char choice;
    float num1, num2, weight, height, BMI, num, l1, l2, length, side;
    float volume, surface_area, curved_SA, Total_SA, side1, side2, side3, area, radius;
    int b1, b, num3, sum;

    printf(" 1.Surface area of cube.\n");
    printf(" 2.Surface area of cuboid.\n");
    printf(" 3.Curved surface area of cylinder.\n");
    printf(" 4.Area of each end of cylinder. \n 5.Total surface area of cylinder.\n");
    printf(" 6.Area of triangle.\n 7.Area of square.\n 8.Area of rectangle.\n");
    printf(" 9.Area of parallelogram.\n 10.Area of trapezium.\n 11.Area of circle.\n");
    printf(" 12.Area of ellipse. \n 13. Area of sector.\n");

    printf(" Enter the operation to be performed \n");
    scanf("%d", &option);

    switch (option)
    {

    case 1:

        printf(" Enter the length of side of cube\n");
        scanf("%f", &side);

        surface_area = 6 * side * side;
        printf(" Surface area of cube is : %f \n", surface_area);
        break;

    case 2:

        printf(" Enter the length of all the three side of cuboid\n");
        scanf("%f%f%f", &side1, &side2, &side3);

        surface_area = 2 * (side1 * side2 + side2 * side3 + side3 * side1);
        printf(" Surface area of cuboid is : %f \n", surface_area);
        break;

    case 3:

        printf(" Enter  the radius and height of the cylinder\n");
        scanf("%f%f", &radius, &height);

        surface_area = 2 * pie * radius * height;
        printf(" Curved surface area of cylinder is : %f \n", surface_area);
        break;

    case 4:

        printf(" Enter the radius  of the cylinder\n");
        scanf("%f", &radius);

        area = pie * radius * radius;
        printf(" Area of each end of cylinder is : %f \n", area);
        break;

    case 5:

        printf(" Enter  the radius and height of the cylinder\n");
        scanf("%f%f", &radius, &height);

        Total_SA = 2 * pie * radius * (height + radius);
        printf(" Total surface area of cylinder is : %f \n", Total_SA);
        break;

    case 6:

        printf(" Enter the length of base and height of triangle\n");
        scanf("%f%f", &length, &height);

        area = 0.5 * length * height;
        printf(" Area of triangle is : %f \n", area);
        break;

    case 7:

        printf(" Enter the length of side of square\n");
        scanf("%f", &side);

        area = side * side;
        printf(" Area of square is : %f \n", area);
        break;

    case 8:

        printf(" Enter the length and width of rectangle\n");
        scanf("%f %f", &length, &height);

        area = length * height;
        printf(" Area of rectangle is : %f \n", area);
        break;

    case 9:

        printf(" Enter the base and vertical height of parallelogram\n");
        scanf("%f %f", &length, &height);

        area = length * height;
        printf(" Area of parallelogram is : %f \n", area);
        break;

    case 10:

        printf(" Enter the length of parallel side and height of trapezium\n");
        scanf("%f %f %f", &l1, &l2, &height);

        area = 0.5 * (l1 + l2) * height;
        printf(" Area of trapezium is : %f \n", area);
        break;

    case 11:

        printf(" Enter the radius of circle\n");
        scanf("%f", &radius);

        area = pie * radius * radius;
        printf(" Area of circle is : %f \n", area);
        break;

    case 12:

        printf(" Enter the length of major and minor axis of ellipse\n");
        scanf("%f %f", &l1, &l2);

        area = pie * l1 * l2;
        printf(" Area of ellipse is : %f \n", area);
        break;

    case 13:

        printf(" Enter the radius and angle(in radians) theta covered by sector\n");
        scanf("%f %f", &radius, &l1);

        area = 0.5 * radius * radius * l1;
        printf(" Area of sector is : %f \n", area);
        break;
    }
}


