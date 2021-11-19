/* LEARN HOW TO CODE ARDUINO by ThinkLab
  Arduino Basic > Coding_Sample

  Reference: https://www.arduino.cc/reference/en/

  I . GROUPING OPERATORS

  Brackets {} for functions
  Parenthesis () for values
  Single Quotation 'X' for single character data
  Double Quotation "string data" for multiple character or string data

  II. PUNCTUATION OPERATORS
  Semi-colon for line termination;
  Comma for separating value1, value2
  Period for separating.words in labels or commands

  III. ARITHMETHIC OPERATORS
  1. Addition a+b
  2. Subtraction c-d
  3. Multiplication e*f
  4. Division g/h
  5. Modulo(remainder) i%j
  6. PEMDAS?
  Equals = Assignment Operator

  IV. COMPARISON OPERATORS

  Equal to ==
  Less than <
  Less than or equal to <=
  Greater than >
  Greater than or equal to >=
  Not equal to !=

  V. BOOLEAN OPERATORS

  Not !
  And &&
  Or ||

  VI. Comments
  /*  Multiple
      line
      comments

  //Single line comments

** All commented statements are IGNORED by the Compiler
*/

// VARIABLES are used for storing a piece of data.
// It has a name, value, and type. It must not start with a numerical character.

#define value 255

int integerValue = -4000;           // can hold integer values from -32,768 to 32,767
//int 13LEDPin = 13;
long extendedInteger = 2000000000;  // can hold integer values from -2,147,483,648 to 2,147,483,647
float decimalValue = PI;            // can store decimal values from -3.40282235E+38 to as large as 3.4028235E+38
byte byteValue = B11111111;         // can store an 8-bit unsigned number from 0 to 255, can be used in an LED matrix
bool boolValue = false;
char charValue = 'x';
char stringValue[] = "I am IRON MAN! I love you 3000!";

float output = 0;

// Reference: https://www.arduino.cc/reference/en/

void setup() {
  Serial.begin(9600);                         // initialize Serial with baud rate of 9600

  //serialDisplay();

  //printVariables();

  //countNumber(10);

  //output = arithmetic(sqrt(64), 3, 1);
  //Serial.print("The return value is: ");
  //Serial.println(output);

  //compare(5999, 401);
}

void loop() {       // No activity for the loop function
}

void serialDisplay() {
  Serial.print('I');                          // print single character 'I' on the serial monitor
  Serial.print("\t AM READY! LET'S GO! \n");  // print the words on the serial monitor
  Serial.println(value, DEC);                 // print value in either, DECIMAL (DEC or none), BINARY (BIN), OCTAL (OCT), or HEXADECIMAL (HEX) formats
}

void printVariables () {
  Serial.println("PRINT VARIABLES");
  Serial.println(integerValue);
  Serial.println(extendedInteger);
  Serial.println(decimalValue);
  Serial.println(byteValue);
  Serial.println(boolValue);
  Serial.println(charValue);
  Serial.println(stringValue);
}

void countNumber (int num) {
  for (int i = 1; i <= num; i++) {    // count from 1 to the value of num every second
    Serial.println(i);
    delay (1000);
  }

  int i = 0;                          // while is preferred when the number of 
  while (i <= num) {                  // iterations are not yet defined
    Serial.print(i);
    Serial.print(" ");
    delay(500);
    i = i + 2;
  }

  Serial.print("\n");
  //i = 0;

  do {                                // do.. while will always run once since 
    Serial.println(i);                // the condition is tested at the end of the loop
    delay(500);
    i += 2;
  } while (i <= num);
}

float arithmetic (float num1, float num2, int ops) {
  float ans;

  switch (ops) {
    case 1:
      ans = num1 + num2;                     // add num1 and num2
      Serial.print("The sum of ");
      Serial.print(num1);
      Serial.print(" and ");
      Serial.print(num2);
      Serial.print(" is: ");
      Serial.println(ans);                   // print the value of ans on serial monitor
      return ans;
      break;

    case 2:
      ans = num1 - num2;                     // subtract num1 and num2
      Serial.print("The difference of ");
      Serial.print(num1);
      Serial.print(" from ");
      Serial.print(num2);
      Serial.print(" is: ");
      Serial.println(ans);                  // print the value of ans on serial monitor
      return ans;
      break;

    case 3:
      ans = num1 * num2;                    // multiply num1 and num2
      Serial.print("The product of ");
      Serial.print(num1);
      Serial.print(" and ");
      Serial.print(num2);
      Serial.print(" when multiplied is: ");
      Serial.println(ans);                  // print the value of ans on serial monitor
      return ans;
      break;

    case 4:
      ans = num1 / num2;                    // num1 divided by num2
      Serial.print("The quotient when ");
      Serial.print(num1);
      Serial.print(" is divided by ");
      Serial.print(num2);
      Serial.print(" is: ");
      Serial.println(ans);                  // print the value of ans on serial monitor
      return ans;
      break;

    case 5:
      ans = int (num1) % int (num2);        // divide num2 from num1 and get the remainder
      Serial.print("The remainder when ");
      Serial.print(num1);
      Serial.print(" is divided by ");
      Serial.print(num2);
      Serial.print(" is: ");
      Serial.println(ans);                  // print the value of ans on serial monitor
      return ans;
      break;

    case 6:
      ans = 4 * 12 + 10 - 4 / 2;
      Serial.print("The value of the variable ans is: ");
      Serial.println(ans);                  // print the value of ans on serial monitor
      return ans;
      break;

    default:
      Serial.println("No arithmetic operation detected.");
      return ans = 0;
      break;
  }
}

void compare (int num1, int num2) {
  if (num1 == num2) {
    Serial.print(num1);
    Serial.print(" is equal to ");
    Serial.println(num2);
  }

  else if ((num1 > num2) && ((num1 + num2) <= 1000)) {      // both conditions must 
    Serial.print(num1);                                     // be true before doing this command
    Serial.print(" is greater than ");
    Serial.print(num2);
    Serial.println(" and their sum is less than or equal to 1,000");
  }
 
  else if ((num1 < num2) || ((num1 + num2) > 10000)) {     // if any of conditions is true, enter this statement
    Serial.print(num1);                                    // num2 > num1 OR
    Serial.print(" is less than ");                        // num1 + num2 > 10,000
    Serial.print(num2);
    Serial.println(" or their sum is greater than or equal to 10,000");
  }

  else                                                      // do this if conditions above are not met
    Serial.println("I don't know the answer.");             // num1 > num2 BUT 1,000 < (num1 + num2) < 10,000

  if ((num1 + num2) > 10000) {                              // do this if the sum of 2 numbers is greater than 10,000
    Serial.print("The sum of ");
    Serial.print(num1);
    Serial.print(" and ");
    Serial.print(num2);
    Serial.println(" is more than 10,000");
  }
}
