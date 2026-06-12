enum class Color(
val r: Int,
val g: Int,
val b: Int
) {
RED(255, 0, 0),
ORANGE(255, 165, 0),
YELLOW(255, 255, 0),
GREEN(0, 255, 0),
BLUE(0, 0, 255),
INDIGO(75, 0, 130),
VIOLET(238, 130, 238);
val rgb = (r * 256 + g) *256+b
fun printColor()=println("$this is $rgb")
}
fun main() {
println(Color.BLUE.rgb)
Color.GREEN.printColor()
/*
@author : 오정은
@date :2025.09.17
*/
println("이름을 입력하세요. ")
val name=readLine()
println("$name 님 안녕하세요!")
}
