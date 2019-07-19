># sorting_algo
this repository is meant to store some of the sorting algorithms
___
___

* >## Merge Sort
  * **Complexity**   T(n)= 2T(n/2) + **0**(n)  i.e.   **T(n)=nlog(n)**

  * Only known algorithm which is __external__ sorting.

  * not **in** **place** since it requires **0**(n) additional space

  * Complexity in best as well as in worst case is **nlog(n)**

  * In merge sort partition requires **0**(1) time while merging requires **0**(n) time
___

* >## Quick Sort
  * **Complexity** T(n)

  * It is an example of __internal__ sorting since all the elements are needed to be sorted at once.

  * A perfect example of **in** **place** out of the given sorting algorithms.

  * **Worst** **Case** **Complexity**  **T(n)=T(n-1)+0(n)**

  * **Best** **Case** **Complexity**  **T(n)=T(n/2)+0(n)**

  * In quick sort most time is taken by **partition** part of the algorithm while merging requires **0**(n) time
    
  * Complexity can be decreased through **randomized** **prioritization** of elements
___
* >## Insertion Sort
  * **Best** **Case** **Complexity**  **T(n)=0(n)**
  
  * **Worst** **Case** **Complexity**  **T(n)=0(n^2)**
  
  * An example of **in** **place** algorithm

  * An example of **internal** sorting
___
 * >## Bubble Sort
  * **Complexity** **T(n)=O(n)**
  * Maximum number of swaps
___
 * **Best sorting algorithm in terms of minimum swaps** - **Cycle Sort**
___
 * **Most algorithms use merge sort in sorting in STLs but when input is small they use insertion sort**





