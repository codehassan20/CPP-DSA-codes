# C++ STL(Standard template library)

* **Containers**
* **Iterators**
* **Algorithms**
* **Functors**

## Containers

* Containers are data structures pre-implemented in STL.
* **Types of Containers** :
  * **Sequential containers:**
    * They are sequentially implemented.
    * Vectors
    * Stack
    * Queue
    * Pair (It is a C++ class, not a container)
  * **Ordered containers**.
    * Values are stored in a sorted order (Ascending / Descending).
    * Maps
    * Multimap
    * Set
    * Multiset
  * **Unordered containers**.
    * Based on hashing algorihtms in which values are hased and stored.
    * Unordered Map
    * Unordered Set
  * **Nested containers**.
    * Container inside container.
    * Examples:
```cpp
vector <vector<int> >
map <int, vector<int> >
set <pair <int, string> >
vector <map <int, set<int>>>
```


## Iterators

* Similar to pointers. In containers, we don't use pointers to point the memory address of any element of the containers. Instead we use **iterators** to point the elements memory address of the stl containers.
* Examples
```cpp
- begin(), end()
- vector <int> :: iterator it;
```
* How to write in short?
* Continuity & Discontinuity in iterators.
  * In many containers such as vectors, we can do itertor + 1, iterator + 2, etc. (continuous nature of iterators)
  * But in containers such as maps, we cannot do the same. (discontinuous nature of iterators)

## Algorithms

* Many complex algo's are implemented in best way possible in C++ STL.
* Examples of some algo's:
  * upper bound & lower bound(based on binary search):they helps us to find just greater/smaller elements in a container with log(n) complexity. 
  * sort (comparator) : nlog(n) complexity, implemented using multiple sorting techniques and faster than merge sort. Comparator gives us the capability to define custom sorting behaviour, with which we can use sorting on any complex data structure in easy way.
  * max_element
  * min_element
  * accumulate (sum of array)
  * reverse (reverse a string/array)
  * count (count/frequency of element in a container)
  * find (find the position of any element)
  * next_permutations
  * prev_permutations 

## Functors
* Classes which can act as functions. (not of much use in CP)
