package com.example.mrrun.ndkdemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private Java2JNI java2JNI = new Java2JNI();

    private TextView sample_text;

    private Button btn_message2jni;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        sample_text = findViewById(R.id.sample_text);
        btn_message2jni = findViewById(R.id.btn_message2jni);

        // Example of a call to a native method
        sample_text.setText(java2JNI.stringFromJNI());

        btn_message2jni.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                sample_text.setText(java2JNI.message2JNI());
            }
        });
    }
}
