/*
20161105 16:39
McKnight
循环一次，数字自加1
*/
long  A;//-2147483648~2147483647
void setup() {
  Serial.begin(9600);

}

void loop() {
  A = A + 1;
  delay(1);
  Serial.print("A is ");
  Serial.print(A);
  Serial.println(".");
}
