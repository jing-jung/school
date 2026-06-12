package com.example.my_timer
import android.os.Bundle
import android.os.CountDownTimer
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
class MainActivity : AppCompatActivity() {
private lateinit var editTime: EditText
private lateinit var textTimer: TextView
private lateinit var btnStart: Button
private lateinit var btnPause: Button
private lateinit var btnReset: Button
private var timer: CountDownTimer? = null
private var remainingMillis: Long = 0
override fun onCreate(savedInstanceState: Bundle?) {
super.onCreate(savedInstanceState)
setContentView(R.layout.activity_main)
editTime = findViewById(R.id.editTime)
textTimer = findViewById(R.id.textTimer)
btnStart = findViewById(R.id.buttonStart)
btnPause = findViewById(R.id.buttonPause)
btnReset = findViewById(R.id.buttonReset)
btnStart.isEnabled = true
btnPause.isEnabled = false
btnReset.isEnabled = false
btnStart.setOnClickListener {
val input = editTime.text.toString()
if (input.isNotEmpty()) {
remainingMillis = input.toLong() * 1000
timer = object : CountDownTimer(remainingMillis, 1000) {
override fun onTick(millisUntilFinished: Long) {
remainingMillis = millisUntilFinished

val seconds = (millisUntilFinished / 1000).toInt()

val min = seconds / 60
val sec = seconds % 60
textTimer.text = String.format("%02d:%02d", min, sec)
}
override fun onFinish() {
textTimer.text = "00:00"
btnStart.isEnabled = false
btnPause.isEnabled = false
btnReset.isEnabled = true
editTime.isEnabled = true
}
}.start()
btnStart.isEnabled = false
btnPause.isEnabled = true
btnReset.isEnabled = true
editTime.isEnabled = false
}
}
