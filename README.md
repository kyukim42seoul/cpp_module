# cpp_module

해야 할 것
	ScavTrap 이후로 복사생성자 작동하는지 확인

진행상황
	03-02까지 완료

전체 개선필요

변경이 없는 경우는 아래와 같이 수정
	const std::string &name
		이렇게 할 때 만약 name 을 밖에서 수정하면 같이 변할 수 있으므로 & 를 붙일지 여부를 고민할 때 생각할 것
함수 내에서 변경이 없는 경우는 함수 선언 가장 뒤에 const 로 외부의 변경을 막아줄 것
	int	getRawBits(void) const;

스타일 변경
function(void)
{
}

--> funtion(void) {}




01-04 : 테스트 추가
01-05 : 진행 중... 함수 포인터 / 맵 공부 중
01-05 : Harl 의 각 레벨에서 나오는 대사가 각 상황(debug, info, warning, error)에서만 나와야 하는가?
01-06 : SWITCH off 가 flag 를 의미하는지 switch-case 를 의미하는지 모르겠다.(스킵)
02-00 : 소수부가 8bit 다. 왼쪽으로 8bit shift 해주는 것은 소수부 8bit 를 비워주는 것.
	오늘 목표
		고정소수점, 부동소수점 반환 메서드 작성
	필요한 함수 for TEST
		(int)32bit 인자를 받아 bit 를 출력하는 함수
02-01 : temp.cpp : 비트 확인하기 위한 예시 저장용
	  : operator << float/int 분기 적어야 함
