package com.example.bmi_intent

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.example.bmi_intent.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        binding.btnHeightPlus.setOnClickListener {
            val h = (binding.inputHeight.text.toString().toIntOrNull() ?: 0) + 1
            binding.inputHeight.setText(h.toString())
        }
        binding.btnHeightMinus.setOnClickListener {
            val h = (binding.inputHeight.text.toString().toIntOrNull() ?: 0) - 1
            if (h > 0) binding.inputHeight.setText(h.toString())
        }

        binding.btnWeightPlus.setOnClickListener {
            val w = (binding.inputWeight.text.toString().toIntOrNull() ?: 0) + 1
            binding.inputWeight.setText(w.toString())
        }
        binding.btnWeightMinus.setOnClickListener {
            val w = (binding.inputWeight.text.toString().toIntOrNull() ?: 0) - 1
            if (w > 0) binding.inputWeight.setText(w.toString())
        }

        binding.btnCalculate.setOnClickListener {
            val height = binding.inputHeight.text.toString().toDoubleOrNull()
            val weight = binding.inputWeight.text.toString().toDoubleOrNull()

            if (height != null && weight != null && height > 0) {
                val bmi = weight / ((height / 100) * (height / 100))
                val intent = Intent(this, ResultActivity::class.java)
                intent.putExtra("bmi", bmi)
                startActivity(intent)
            }
        }
    }
}
