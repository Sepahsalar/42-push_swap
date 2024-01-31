# 42-push_swap
Push_swap is a sorting algorithm project that aims to sort a stack of integers using a limited set of operations while minimizing the number of moves. The goal is to implement two programs: one that checks if a given list of instructions sorts the stack, and another that generates the list of instructions to sort the stack.

</br>

# Content

1. [Usage](#usage)
2. [Description](#description)
3. [Algorithm](#algorithm)
4. [Resources](#resources)

</br>

## Usage

Follow the steps below to test the project: 

1. Clone the repository:
```bash
$> git clone https://github.com/Sepahsalar/42-push_swap.git
```
2. Compile the project:
```bash
$> make
```
3. Run the program with the following syntax:
```bash
$> ./push_swap num1 num2 num3 num4
```
- **num**: unique numbers in a non-ascending order.

### Example
```bash
$> ./push_swap 8 5 2 4 9
```

</br>

## Description

Sort a random list of integers using the smallest number of moves, two stacks and a limited set of operations. You start with two empty stacks: **a** and **b**. You are given a random list of integers via command line arguments.
<br />

Only these moves are allowed:
- `sa` : swap `a` - Swap the first `2` elements at the top of stack `a`. Do nothing if there is only one or no elements.
- `sb` : swap `b` - Swap the first `2` elements at the top of stack `b`. Do nothing if there is only one or no elements.
- `ss` : `sa` and `sb` at the same time.
- `pa` : push `a` - Take the first element at the top of `b` and put it at the top of `a`. Do nothing if `b` is empty.
- `pb` : push `b` - Take the first element at the top of `a` and put it at the top of `b`. Do nothing if `a` is empty.
- `ra` : rotate a - Shift up all elements of stack `a` by `1`. The first element becomes the last one.
- `rb` : rotate b - Shift up all elements of stack `b` by `1`. The first element becomes the last one.
- `rr` : `ra` and `rb` at the same time.
- `rra` : reverse rotate `a` - Shift down all elements of stack a by `1`. The last element becomes the first one.
- `rrb` : reverse rotate `b` - Shift down all elements of stack b by `1`. The last element becomes the first one.
- `rrr` : `rra` and `rrb` at the same time.
<br />

At the end, **stack `b`** must empty empty and all integers must be in **stack `a`**, sorted in ascending order.

</br>

## Algorithm

1. To initiate the sorting process, my code first pushes the top two elements from stack `a` to stack `b`. This creates the smallest and largest numbers in stack `b`, which are prerequisites for my code. Before pushing a number from stack `a` to stack `b`, the algorithm compares the number being pushed with the smallest and largest numbers in stack `b`.

2. At this stage, the algorithm examines each number in stack `a` to determine which requires the minimum number of operations to be placed correctly in stack `b`.

3. Following this, the algorithm determines which number to push, calculates the required rotations for both stacks, and performs rotations accordingly. If one stack requires more rotations, the algorithm completes the remaining rotations in that stack.

4. Subsequently, the algorithm pushes the number from the top of stack `a` to the top of stack `b`. The spot in stack `b` is ensured to be the correct position for the number due to previous calculations. This pushing process continues until only three elements remain in stack `a`.

5. The algorithm efficiently sorts the remaining three members in stack `a`.

6. Each member in stack `b` is then pushed one by one to stack `a` from top to bottom. However, the algorithm verifies each element before pushing it. This process continues until stack `b` is empty.

7. Finally, the algorithm applies the required amount of rotation one last time to bring the smallest number to the top of stack `a`.

</br>

## Resources

[Push swap tutorial](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)