#include <math.h>

int main() {
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    // 1. แสดงค่าตัวแปรทั้งหมด
    printf("a = %d, b = %d, c = %.2f, d = %.2f\n", a, b, c, d);

    // 2. a + d
    printf("a + d = %.2f\n", a + d);

    // 3. a - b
    printf("a - b = %d\n", a - b);

    // 4. c * d
    printf("c * d = %.2f\n", c * d);

    // 5. a * c
    printf("a * c = %.2f\n", a * c);

    // 6. c / d
    printf("c / d = %.2f\n", c / d);

    // 7. b / c
    printf("b / c = %.2f\n", b / c);

    // 8. a % b
    printf("a %% b = %d\n", a % b);

    // 9. c % a -> ผิดพลาด! ต้องอธิบาย
    printf("c %% a = %.2f\n", c % a); // ❌ error

    // 10. c % d -> ผิดพลาด! ต้องอธิบาย
    printf("c %% d = %.2f\n", c % d); // ❌ error

    return 0;
}
// ฟังก์ชัน % (modulo) ใช้ได้เฉพาะกับ จำนวนเต็มเท่านั้น
// c และ d เป็น float หรือ double ซึ่งไม่สามารถใช้ % ได้ คอมไพเลอร์จะให้ error ทันทีว่าไม่สามารถใช้ % กับตัวแปรประเภท float ได้
// c % a และ c % d จะ error เพราะ % ใช้กับ int เท่านั้น
// ถ้าต้องการหาเศษของ float ต้องใช้ fmod จาก math.h แทน