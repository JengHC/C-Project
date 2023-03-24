#pragma once

// 프로그램에 필요한 상수들이 있을때
// 한곳에 모아두는게 좋음. 그래서 헤더파일만들고
// namespace정해서 지정해놓음.
namespace constants
{
	constexpr double pi(3.141592);
	constexpr double avogadro(630221413e23);
	constexpr double moon_gravity(9.8 / 6.0);

}