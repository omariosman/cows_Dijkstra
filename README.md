# cows_Dijkstra
Topic description

    It was dinner time, and the cows were outside in the scattered pastures.

    Farmer John rang the bell, so they started walking towards the barn.

    Your job is to figure out which cow will reach the barn first (in the test data given, there will always be one and only one fastest cow).

    At milking time (before dinner) each cow is on her own pasture, some pastures may have no cows.

    Each ranch is connected by a road and one or more ranches (possibly including itself).

    Sometimes, two ranches (possibly identical) will be connected by more than one road.

    There is a road connection between at least one of the ranches and the barn.

    Therefore, all cows reach the barn eventually, and the cows always take the shortest path.

    Of course, cows can go in either direction, and they go at the same speed.

    Pastures are marked 'a'..'z' and 'A'..'Y', with one cow in the pasture in uppercase and none in lowercase.

    The barn is marked with a 'Z', note that there are no cows in the barn.

    input format

    Line 111: Integer P(1≤P≤10,000)P \left( 1 \leq P \leq 10,000 \right)P(1≤P≤10,000) , representing the number of roads connecting pastures (barns).

    Lines 2..P+12 ..P+12..P+1: two letters and an integer separated by a space, the marking of the pasture connected by the road and the length of the road (1≤length≤1,000)\left( 1 \leq length\leq 1,000 \right) (1≤length≤1,000).

    output format

    A single line contains two items:

    The marking of the pasture where the cow that first arrived at the barn was located, and the length of the path the cow traveled.
    
Input:
5
A d 6
B d 3
C e 9
d Z 8
e Z 3

Output:
B 11
