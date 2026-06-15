package com.example.cal_data

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.example.cal_data.databinding.ActivityMainBinding
import java.util.*
import android.app.*
import android.widget.Toast
import java.text.SimpleDateFormat
import java.util.Calendar

class MainActivity : AppCompatActivity() {
    private var selectedDate: Calendar? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        val binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.btn1.setOnClickListener {
            val calendar = Calendar.getInstance()
            val datePickerDialog = DatePickerDialog(
                this,
                { _, year, month, day ->
                    selectedDate = Calendar.getInstance()
                    selectedDate?.set(year, month, day)
                    binding.btn1.text = "${year}-${month + 1}-${day}"
                },
                calendar.get(Calendar.YEAR),
                calendar.get(Calendar.MONTH),
                calendar.get(Calendar.DAY_OF_MONTH)
            )
            datePickerDialog.show()
        }
        binding.btn2.setOnClickListener {
            if (selectedDate == null) {
                Toast.makeText(this, "날짜를 먼저 선택해주세요", Toast.LENGTH_SHORT).show()
                return@setOnClickListener
            }

            val daysInput = binding.date.text.toString()
            if (daysInput.isEmpty()) {
                Toast.makeText(this, "경과 일수를 입력해주세요", Toast.LENGTH_SHORT).show()
                return@setOnClickListener
            }

            val days = daysInput.toIntOrNull() ?: return@setOnClickListener

            val resultCalendar = selectedDate!!.clone() as Calendar
            resultCalendar.add(Calendar.DAY_OF_MONTH, days)

            val dateFormat = SimpleDateFormat("yyyy-MM-dd", Locale.getDefault())
            val selectedDateStr = dateFormat.format(selectedDate!!.time)
            val resultDateStr = dateFormat.format(resultCalendar.time)

            binding.resultText.text =
                "$selectedDateStr 로 부터 $days 일 경과한 날짜는\n $resultDateStr 입니다."
        }
    }
}