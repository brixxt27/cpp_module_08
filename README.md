# cpp_module_08
### 이슈 관리: [전체 이슈 list]()
# Module-specific rules
- 지금까지는 컨테이너와 알고리즘을 사요하면 안 됐지만 이번 과제에서는 이를 사용하지 않으면 점수를 받지 못할 것이다.

# Exercise 00: Easy find
## Usage
```
git clone https://github.com/brixxt27/cpp_module_08.git
cd cpp_module_08/ex00
make
./easy_find
```
## Summary
- Turn-in directory : ex00/
- Files to turn in : Makefile, main.cpp, easyfind.{h, hpp} and optional file: easyfind.tpp
- Forbidden functions : None
## Detail
- type T를 허용하는 easyfind라는 함수 템플릿을 만들 것입니다. 두 개의 인자를 받고, 첫 번째 인자는 type T, 두 번째는 integer입니다.
- T를 정수값을 갖는 container라 가정하고, 함수는 두 번째 인자로 들어온 정수를 첫 번째 들어온 컨테이너에서 찾아야 하는데 처음 발견된 정수를 찾아야 합니다. 즉, 중복된 수가 있을 수 있습니다. 
- 만약 발견되지 않는다면 예외를 던지거나 에러 값을 리턴할 수 있습니다. 당신의 선택에 맡길게요! 만약 영감이 필요하다면 표준 컨테이너의 동작을 분석하세요!
- 물론 이를 테스트할 여러 테스트를 main에 넣어주세요!

<bt> </bt>

# Exercise 01: Span
## Usage
```
git clone https://github.com/brixxt27/cpp_module_08.git
cd cpp_module_08/ex0x
make
./span
```
## Summary
- Turn-in directory : ex01/
- Files to turn in : Makefile, main.cpp, Span.{h, hpp}, Span.cpp
- Forbidden functions : None
## Detail
- 최대 N개의 정수를 저장할 수 있는 Span을 구현해라. N은 unsigned int 변수이고, 생성자에서 하나의 인수를 받는다.
- 클래스는 하나의 수를 추가하는 addNumber() 멤버함수를 가지고 있다. 이는 수를 추가하는데 사용된다. 만약 이미 N개의 요소가 저정되어 있는데 새로운 요소를 추가하려 시도한다면 예외를 던져야 한다.
- 다음은 shortestSpan, longestSpan() 멤버함수를 구현하라.
- 그들은 저장된 수 중 가장 작은 간격과 가장 긴 간격을 찾아 이를 반환합니다. 만약 숫자가 없거나 하나만 있다면 간격을 찾을 수 없고, 예외를 던져야 합니다.
- 물론 테스트를 포함하여 main 을 작성해야 하고, 아래 보다 많은 것을 작성해주세요. 최소 10,000개의 수를 테스트 하세요. 더 많이 하면 좋습니다.
```
int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

---------------------------------------------------

$> ./ex01
2
14
$>
```
- 반복자의 범위를 전달하여 숫자를 추가할 수 있다면 addNumber 를 수 천번 호출하는 번거로움을 피할 수 있어 매우 좋습니다.
<bt> </bt>

# Exercise 02: Mutated abomination
## Usage
```
git clone https://github.com/brixxt27/cpp_module_08.git
cd cpp_module_08/ex0x
make
./mutated_abomination
```
## Summary
- Turn-in directory : ex02/
- Files to turn in : Makefile, main.cpp, MutantStack.{h, hpp} and optional file: MutantStack.tpp
- Forbidden functions : None
## Detail
<bt> </bt>
