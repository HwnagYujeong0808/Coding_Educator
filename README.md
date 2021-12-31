# Python_Lec
Winter Lecture 오티자료


***

## 파이썬 이란?
- 1991년 발표
- 인터프리터식
- 객체지향적
- 동적 타이핑


***

## 파이썬 특징

### 인터프린터 언어
직관적임, 파이썬은 사람이 생각하는 방식을 그대로 표현할 수 있는 언어임 따라서 프로그래머는 굳이 컴퓨터의 사고 체계에 맞추어서 프로그래밍을 하려고 애쓸 필요가 없음

### 간단하고 쉬운 문법
비전공자들도 배우기 쉬움

### 고수준의 내장 객체 자료형 제공
유연한 개발 가능

### 메모리 자동관리
Garbage Collection기능을 사용하여 메모리를 자동 할당함

### 높은 확장성
다른 언어와 쉽게 결합시킬 수 있음

### 무료이지만 강력함
파이썬은 오픈소스 무료이고, 프로그래머들은 만들고자 하는 프로그램의 대부분을 파이썬으로 만들 수 있음

***
## 파이썬으로 뭘 하나?

#### CAN
- 시스템 유틸리티
- GUI(Graphhic User Interface)
- C/C++과의 결합
- CGI 프로그래밍
- 수치연산 프로그래밍
- 데이터베이스 프로그래밍

#### CAN'T
- 엄청난 횟수의 반복 연산이 필요한 프로그램
- 하드웨어를 직접 건드리는 프로그램

***

## 파이썬 설치 및 환경변수

**1. 파이썬 설치**

**2. 제어판 -> 시스템 및 보안 -> 시스템 -> 고급 시스템 설정**

- 시스템 속성 > 환경 변수 > 사수탬 변수에서 편집 누르기 > 본인 path에 맞게 경로 추가하기
- ex) C:\Users\user\AppData\Local\Programs\Python\Python37 

<img src="https://user-images.githubusercontent.com/66208800/147761988-53b8867d-a4a5-4edd-ab7f-e0cde271cd64.png" width = "300" height="400"/>
<img src="https://user-images.githubusercontent.com/66208800/147762003-765ff0c6-0d9b-4e3b-8a56-819222dce0ce.png" width = "600" height="400"/>


-  개발 환경의 경우 파이썬이 제대로 깔렸는지 확인하기 위해 cmd에 python을 쳐서 다음과 같이 뜬다면 파이썬이 잘 깔린 것입니다.
<img src="https://user-images.githubusercontent.com/66208800/147762432-5b43bb09-1aca-4c2d-a7f5-abbfa96ff5f4.png" width = "600" height="200"/>

***

## 개발툴

- IDLE, CMD로 파이썬 프로그래밍을 할 수 있습니다.
- 파이참,아톰 등 다양한 파이썬 에디터 프로그램이 있지만, 저희 학원에서는 **Pycharm**을 씁니다.
<img src="https://user-images.githubusercontent.com/66208800/147762711-81a4fad6-d476-4d50-80be-17975904101d.png" width = "120" height="100"/>

#### Pycharm의 장점

1. 별도의 Extension이나 플러그 인을 따로 설치할 필요가 없다.
2. 코드 작성 시 자동완성, 문법 체크 등 편리한 기능을 많이 제공한다.

***
## New Project 생성

<img src="https://user-images.githubusercontent.com/66208800/147763775-a7735ee9-36d2-4aab-ae29-ba9dff76ffb8.png" width = "600" height="300"/>
1. Create New Project 클릭

<img src="https://user-images.githubusercontent.com/66208800/147768654-9b8a1598-59e2-48a1-8f5b-94e54bf2654b.png" width = "600" height="300"/>
2. 프로젝트 이름은 기본적으로 Untitled 이므로 바꿔주고, 아래쪽의 Project Interpreter를 설정해 둔다. 미리 설정했다면 목록이 보일 것이고, 아니라면 새로 생성하거나 python.exe 위치를 찾아 지정해준다.

<img src="https://user-images.githubusercontent.com/66208800/147763491-6357e11d-bf64-4bc4-8e86-33bc0938ddbd.png" width = "600" height="300"/>
3. 맨 왼쪽에는 프로젝트 창이 있다. 맨 왼쪽 빨간 박스로 표시한 곳을 클릭하면 프로젝트 창을 접었다 폈다 할 수 있다. 단축키를 눌러도 된다(Alt + 1).

***

## 목차(배우는 순서)

- **Python 대화형 인터프리터(Python shell)**을 이용하면 결과를 바로 확인할 수 있다.


#### 1. 자료형 
숫자형, 문자열 자료형, 리스트 자료형, 튜플 자료형, 딕셔너리 자료형, 집합 자료형

#### 2. 제어문
if문, while문, for문

#### 3. 프로그램 입출력
함수, *사용자 입출력*, 파일 읽고 쓰기

#### 4. 파이썬 날개 달기
클래스, 모듈, 패키지, 예외처리

#### 5. 정규표현식

#### 6. 파이게임
파이썬으로 게임을 만드는 프레임워크 **파이게임**을 이용한 간단한 게임 제작 


***

## 유용한 단축키

#### 실행 단축키
(윈도우) Ctrl + Shift + F10 
(윈도우) Shift + F10 

#### 주석처리 단축키 
- 파이참 주석처리 : 한 줄 주석은 '#', 여러 줄 주석은 ''' 또는 """ 
(윈도우) Ctrl + / (여러 문장 드래그 후 Ctrl + / 는 여러 문장 한번에 주석처리, 한번 더 누르면 주석 해제)

#### 문장 한줄 복사한 뒤, 바로 아랫줄로 붙여넣기
(윈도우) Ctrl + D

#### 디버깅
Break point
한줄씩 실행(주로 쓰는 단축키) : F8


***

## 출력
- print를 이용해서 출력을 할 수 있음
- 문자열을 붙일 수 있음 ex) print("Hello"+"World")
- ex) print("Hello World!")


### 이스케이프 코드
- 프로그래밍할 때 사용할 수 있도록 미리 정의해 둔 '문자 조합'
- 주로 출력물을 보기 좋게 정렬하는 용도로 사용
<img src="https://user-images.githubusercontent.com/66208800/147767193-5fa41388-fb84-43dd-90a8-7a90d26b5c84.png" width="300" height="350"/>

## 출력 (Formatting 이용)
- 문자열 안에 어떤 값을 삽입

### 포맷 코드
<img src="https://user-images.githubusercontent.com/66208800/147767771-b48cf8f7-0bd6-4bc7-8987-da57c1e35f9f.png" width="250" height="250"/>

- %을 이용한 포맷이 아닌 인덱싱으로도 포맷가능
이경우엔 {0}식으로 쓰고, 안에 숫자를 늘림

- Format을 이용한 출력예시
<img src="https://user-images.githubusercontent.com/66208800/147767917-d5a5ea6a-8184-4822-9874-2c22fa0dcef2.png" width="400" height="25"/>
<img src="https://user-images.githubusercontent.com/66208800/147767923-778b4e64-8648-4daa-b10d-1abde2b5ad19.png" width="400" height="25"/>


***

잘 부탁드립니다😀
