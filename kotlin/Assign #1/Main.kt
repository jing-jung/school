class Rectangle( val height: Int, val width: Int) {
fun isSquare(): Boolean {
return height == width
}
}
//TIP 코드를 <b>실행</b>하려면 <shortcut actionId="Run"/>을(를) 누르거나
// 에디터 여백에 있는 <icon src="AllIcons.Actions.Execute"/> 아이콘을 클릭하세요.
fun main() {
//TIP 캐럿을 강조 표시된 텍스트에 놓고 <shortcut
actionId="ShowIntentionActions"/>을(를) 누르면
// IntelliJ IDEA이(가) 수정을 제안하는 것을 확인할 수 있습니다.
val rectangle = Rectangle(5, 5)
println(rectangle.isSquare())
/*
@author : 오정은
@date :2025.09.17
*/
println("이름을 입력하세요. ")
val name=readLine()
println("$name 님 안녕하세요!")
}
