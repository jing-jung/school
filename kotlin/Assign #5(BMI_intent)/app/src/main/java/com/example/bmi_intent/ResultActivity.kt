package com.example.bmi_intent

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.example.bmi_intent.databinding.ActivityResultBinding

class ResultActivity : AppCompatActivity() {

    private lateinit var binding: ActivityResultBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityResultBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val bmi = intent.getDoubleExtra("bmi", 0.0)
        binding.txtBmi.text = "BMI: %.2f".format(bmi)

        val (resultText, adviceText, imageRes) = when {
            bmi < 18.5 -> Triple("저체중", "식사량을 늘리세요.", R.drawable.underweight)
            bmi < 24.99 -> Triple("정상", "축하합니다. 현재 상태를 유지하세요.", R.drawable.normal)
            bmi < 29.99 -> Triple("과체중", "운동과 식사량을 조절하세요.", R.drawable.overweight)
            else -> Triple("비만", "위험한 단계입니다. 다이어트와 운동이 필요합니다.", R.drawable.obese)
        }

        binding.txtResult.text = "결과: $resultText"
        binding.txtAdvice.text = "설명: $adviceText"
        binding.imgResult.setImageResource(imageRes)
    }
}
