# 미팅 내용

***


## 1. 연구 진행 방향 - 시뮬레이터

   <img src="https://user-images.githubusercontent.com/66208800/161445074-2447f080-682d-4408-a8f5-57d3d93e72c7.png" height="150px" width="200px">


   + 초기 **Soc**, **Pe**(output power of battery) 알 때 **V**, **I**, **R**, **$Soc_{t+1}$** 추정 가능하다.
   + Deep Reinforcement Learning-Based Energy Storage Arbitrage with Accurate Lithium-Ion Battery Degradation Model에 나온 파라미터 바탕으로 충/방전 효율 및 soc 추정


## 2.  SOC 시뮬레이터
   1. Discharge 될 때 soc & 온도 변화 추정 
   2. 초기 Soc = 1로 놓고 시뮬레이터 돌림
      + $R_{tot}$ :0.189 (sum of $𝑅_𝑠, 𝑅_{𝑡𝑠}, 𝑅_{𝑡𝑙}$)
      + $V_{oc}$ :4.187 (open circuit voltage)
      + **$I_{dis}$ :0.190** 
      + $eta_{dis}$ :0.991 (discharging efficiencies of battery)
      + $Soc_{t+1}$ : 0.99973


## 3. 온도 시뮬레이터
    
   1) 배터리 총 용량, 패러데이 상수와 같은 파라미터 조절하며 시뮬레이터 돌려봄
   2) reward plots - Korea
   3) 논문에서의 온도 그래프

   <img src="https://user-images.githubusercontent.com/66208800/161445610-6f45de5b-4729-4202-9618-e6d659c62e21.png" height="300px" width="400px">
   
     
   + 'A Multi-Agent Reinforcement Learning Framework for Lithium-ion Battery Scheduling Problems'
   

   <img src="https://user-images.githubusercontent.com/66208800/161445613-7dcdec0f-82a5-4ffd-8dd9-630e54b20727.png" height="300px" width="400px">
 
           
   + 'Simplified Heat Generation Model for Lithium ion battery used in Electric Vehicle'    
   + The peak cell temperature for the central cell at the end of the 3A discharge is 29.8°C based on an initial ambient temperature of 25°C. 
    
  


   ### 4) 시뮬레이터 작동 결과

   <img src="https://user-images.githubusercontent.com/66208800/161445731-6fb59808-fff5-46b4-be79-1adb71e6248c.png" height="300px" width="400px">
   

   <img src="https://user-images.githubusercontent.com/66208800/161445613-7dcdec0f-82a5-4ffd-8dd9-630e54b20727.png" height="300px" width="400px">
  

   <img src="https://user-images.githubusercontent.com/66208800/161445766-5b105dd2-dda7-41de-a150-e6b18b1ea241.png" height="300px" width="400px">
   
  
  + I_dis 조절했을 때
   
   ## 4. Consideration 
   1. 위의 기존 논문 그래프들과 같이 온도가 Temp_amb (실온) 까지 급격하게 증가하는 형태를 보여야 함
   2. I, V, R 이 맞게 추정된 것인지 모르겠음 (논문에서는 i_dis 1~5A인데 시뮬레이터 상에서는 소수점으로 나옴) -> soc 추정 파라미터 조절 필요



