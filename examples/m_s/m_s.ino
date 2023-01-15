/*
 * 
 * 해당 라이브러리는 아두이노의 delay를 어느정도 대체하여 딜레이 없이 주기적으로
 * 코드가 실행될수 있도록 도와주는 라이브러리 입니다.
 * 
 * 해당 라이브러리를 활용하면 각 센서나 부품을 딜레이 없이
 * 각각의 주기로 실행을 시켜 값을 불러 오거나 실행 시킬 수 있습니다.
 * 
 */
 
#include <m_s.h>

ms asia(1000, 1000); // ms ms(cycle, delay);
/*
 * 
   cycle <- 주기를 넣는 함수 입니다.
   주기가 1000일시에 1000 밀리초 마다 true 와 false를 내보냅니다.

   delay는 true일때 true를 얼마 동안 지속할지에 대해 내보니는 합수입니다.
   위 말은 해당 코드를 업로드 후 delay 값을 바꿔가며 시리얼 플로터(ctrl + shift + L)를
   통해 값을 확인 하면 보다 쉽게 이해할수 있습니다.

*/

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int af = asia.tick();
  Serial.println(af);
  digitalWrite(13, af);
}

/*
* 해당 라이브러리는 아두이노 우노, 메가, 나노 에서만 
* 동작을 확인 하였으며 이외의 오류는 
* hanuragoodmoning@gmail.com
* 위 메일로 오류코드와 보드 종류를 함께 작성하여 보내주시면
* 수정하도록 하겠습니다.    
* https://github.com/Narehase/m_s
*/
