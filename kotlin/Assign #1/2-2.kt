fun mix(c1: Color, c2: Color)=
when (setOf(c1, c2)) {
setOf(Color.RED, Color.YELLOW) -> Color.ORANGE
setOf(Color.YELLOW, Color.BLUE) -> Color.GREEN
setOf(Color.BLUE, Color.VIOLET) -> Color.INDIGO
else -> throw Exception("Dirty color")
}
fun main(){
println(mix(Color.BLUE, Color.YELLOW))
println(mix(Color.RED, Color.YELLOW))
println(mix(Color.YELLOW, Color.RED))
/*
@author : 오정은
@date :2025.09.17
*/
println("이름을 입력하세요. ")
val name=readLine()
println("$name 님 안녕하세요!")
}
