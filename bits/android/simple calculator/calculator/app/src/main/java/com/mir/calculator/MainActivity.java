package com.mir.calculator;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.graphics.Insets;
import androidx.core.view.ViewCompat;
import androidx.core.view.WindowInsetsCompat;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {

    EditText inputFirst, inputSecond;
    Button add, sub, multi, div;
    Button clear;
    TextView output;
    Integer intNumFirst, intNumSecond;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main), (v, insets) -> {
            Insets systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars());
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom);
            return insets;
        });


        inputFirst = findViewById(R.id.numFirst);
        inputSecond = findViewById(R.id.numSecond);

        add = findViewById(R.id.btnAdd);
        sub = findViewById(R.id.btnSub);
        multi = findViewById(R.id.btnMulti);
        div = findViewById(R.id.btnDiv);

        clear = findViewById(R.id.btnClear);

        output = findViewById(R.id.txtOutput);

        add.setOnClickListener(new View.OnClickListener() {
            @SuppressLint("SetTextI18n")
            @Override

            public void onClick(View v) {
                intNumFirst = getInput(inputFirst);
                intNumSecond = getInput(inputSecond);

                if(intNumFirst == null || intNumSecond == null)
                {
                    Toast.makeText(v.getContext(), "Enter number", Toast.LENGTH_LONG).show();
                }
                else {
                    output.setText(String.valueOf(intNumFirst + intNumSecond));
                }
            }

        });

        sub.setOnClickListener(new View.OnClickListener() {
            @SuppressLint("SetTextI18n")
            @Override

            public void onClick(View v) {
                intNumFirst = getInput(inputFirst);
                intNumSecond = getInput(inputSecond);

                if(intNumFirst == null || intNumSecond == null)
                {
                    Toast.makeText(v.getContext(), "Enter number", Toast.LENGTH_LONG).show();
                }
                else {
                    output.setText(String.valueOf(intNumFirst - intNumSecond));
                }
            }

        });

        multi.setOnClickListener(new View.OnClickListener() {
            @SuppressLint("SetTextI18n")
            @Override

            public void onClick(View v) {
                intNumFirst = getInput(inputFirst);
                intNumSecond = getInput(inputSecond);

                if(intNumFirst == null || intNumSecond == null)
                {
                    Toast.makeText(v.getContext(), "Enter number", Toast.LENGTH_LONG).show();
                }
                else {
                    output.setText(String.valueOf(intNumFirst * intNumSecond));
                }
            }

        });

        div.setOnClickListener(new View.OnClickListener() {
            @SuppressLint("SetTextI18n")
            @Override

            public void onClick(View v) {
                intNumFirst = getInput(inputFirst);
                intNumSecond = getInput(inputSecond);

                if(intNumFirst == null || intNumSecond == null)
                {
                    Toast.makeText(v.getContext(), "Enter number", Toast.LENGTH_LONG).show();
                }
                else {
                    output.setText (String.valueOf( (float) intNumFirst / (float) intNumSecond));
                }
            }

        });

        clear.setOnClickListener(new View.OnClickListener() {
            @SuppressLint("SetTextI18n")
            @Override

            public void onClick(View v) {
                inputFirst.setText("");
                inputSecond.setText("");
                output.setText("");

                Toast.makeText(v.getContext(), "Clear", Toast.LENGTH_LONG).show();
            }

        });

    }

    public Integer getInput (EditText editText) {

        if (editText.getText().toString().isEmpty()) {
            return null;
        } else {
            return Integer.parseInt(editText.getText().toString());
        }

    }

    @Override
    public void onClick(View v) {

    }
}