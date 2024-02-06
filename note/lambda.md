# lambda

## 1. 实际是一个类类型，捕获变量相当于增加了成员变量

## 2. lambda类的operator默认是const修饰的

## 3. 非捕获的lambda表达式才可以转换成 函数指针及其他类型

## 4. lambda支持泛型

```c++
auto p = [num = 0](){return 0;};
auto q = [](){return 0;};
cout << sizeof p << "\n";  // 4
cout << sizeof q << "\n";  // 1

auto p_ = []<typename T>(T a){cout << a << "\n";};
p_(10);
p_("str");
```