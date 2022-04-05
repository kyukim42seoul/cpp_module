개요
* phonebook 은 클래스의 인스턴스(객체와 유사)
* 연락처 배열 포함
* 연락처도 클래스의 인스턴스

클래스 공통 규칙
* show() 함수로 클래스의 private 변수 출력

각 클래스의 역할
* listener
	* listen
	* understand what to do : ADD, SEARCH, EXIT, Guide ...
	* do something to phonebook
* phonebook
	* show
		* all(summary)
		* choosed index(full)
	* record
	* delete


사용 할 수 있는 명령어
* ADD
	* 순차적으로 각 필드 입력 받음
	* 성(first name), 이름(last name), 별명(nickname), 번호(phone number), 비밀(darkest secret)
* SEARCH
	* 저장된 모든 연락처를 다음 네 필드로 출력 인덱스(), 성(), 이름(), 별명()
	* 각 필드(열)의 폭 == 10, '|'로 구분, 폭을 초과하는 문자는 잘림, 마지막 출력 문자는 '.' 으로 치환
	* 찾을 연락처의 인덱스를 입력받아 한 줄에 한 필드씩 출력(세로). ADD 에서 입력받은 정의대로 출력.
	* 의미 없는 값(ex. 수가 아닌 값, 인덱스에 존재하지 않는 수:음수, 미만, 초과값)에 대한 나름의 정의.
	* 나머지 입력값 버림.
* EXIT
	* 저장한 연락처 삭제 후 종료
* 모든 입력어가 실행 된 후 EXIT 가 들어올 때까지 프로그램은 다시 대기.

제한
* 동적할당 금지
* 연락처 저장 최대 8개
	* 9번째 연락처부터 가장 앞 연락처 삭제 후 입력
	* put tail, head out
