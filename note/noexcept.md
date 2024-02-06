# noexcept

## 1. noexcept是表达式也是标识符，表达式是参数，可以返回一个可调用对象被标记为是noexcept(true) 或者 noexcept(false)

## 2. 未标记的。默认是noexcept(false)

## 3. C++17 之后，noexcept 标记到类型信息里；但是不能用于重载

```c++
void func()
{
    cout << "hello" << "\n";
}

void g() noexcept
{
    cout << "hello" << "\n";
}

void h() noexcept(true)
{
    cout << "hello" << "\n";
}

cout << std::boolalpha << noexcept(func()) << "\n"; //false
cout << std::boolalpha << noexcept(g()) << "\n"; //true
cout << std::boolalpha << noexcept(h()) << "\n"; //true
auto gg = h;
```