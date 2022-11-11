# Analytical Geometry Calculator

Geometry based calculator for calculating vectors, lines and basic math

## Main Classes

> - Vector3 - A vector in R3  
>
> - Matrix - A math matrix
>
> - Line - A math straight line
>
> - Circumference - A math circunference
>
> - Matha - The main math classes which has different methods and complement the other classes

## Examples

1. Calculate distance between two Vectors:

        Vector3 v1 = Vector3(10, 2, 4);
        Vector3 v2 = Vector3(2, 10, 3);
        
        cout << Vector3::Distance(v1, v2) << "\n";
        
        Output:
        11.3578

2. Sum of Vectors:

        Vector3 v1 = Vector3(10, 2, 4);
        Vector3 v2 = Vector3(2, 10, 3);

        cout << v1 + v2 << "\n";

        Output:
        (12, 12, 7)

3. Comparating Vectors:

        Vector3 v1 = Vector3(10, 2, 4);
        Vector3 v2 = Vector3(2, 10, 3);

        cout << (v1 == v2) << "\n";

        Output:
        0

## Observations
This packet of classes was made for me, Breno Soares, when studying Computer Science, motivated by my curiosity for 3D world and game development.  
<p align="center"><strong>Feel free to use and modificate</strong></p>