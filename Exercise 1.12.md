> What does the following ``for`` loop do? What is the final value of ``sum``? 
```cpp
int sum = 0;
for (int i = -100; i <= 100; i++) 
  sum += i;
```
The loop sums all numbers in the range between -100 and 100 (inclusive). The final value of ``sum`` will be 0 because when we add all numbers in this range they just cancel out. 
