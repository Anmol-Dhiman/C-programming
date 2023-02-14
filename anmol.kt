package com.example.aankh.ui.fragments.application

import android.app.DatePickerDialog
import android.app.TimePickerDialog
import android.content.SharedPreferences
import android.os.Bundle
import android.text.format.DateFormat
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.fragment.app.activityViewModels
import androidx.lifecycle.Observer
import com.example.aankh.R
import com.example.aankh.dataModels.ReportComplaintDataModel
import com.example.aankh.databinding.FragmentFirBinding
import com.example.aankh.viewModels.uiViewModels.ReportComplaintViewModel
import java.util.*

class FirFragment : Fragment() {


    private var _binding: FragmentFirBinding? = null
    private val binding get() = _binding!!
    private val viewModel: ReportComplaintViewModel by activityViewModels()
    private lateinit var preferences: SharedPreferences
    private lateinit var id: String


    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {


        binding.time.setOnClickListener { openTimePicker(binding.root) }
        binding.date.setOnClickListener { openDatePicker(binding.root) }

        binding.submitButtonFragment.visibility = View.VISIBLE
        binding.progressBarFirFragment.visibility = View.GONE

        _binding = FragmentFirBinding.inflate(inflater, container, false)

        try {
            preferences =
                activity?.getSharedPreferences("PREFERENCE", AppCompatActivity.MODE_PRIVATE)!!
            id = preferences?.getString("id", "").toString()
        } catch (e: Exception) {

        }



        viewModel.getReportStatus().observe(viewLifecycleOwner, Observer {
            Toast.makeText(requireContext(), "Report has been submitted!!", Toast.LENGTH_LONG)
                .show()
            binding.submitButtonFragment.visibility = View.VISIBLE
            binding.progressBarFirFragment.visibility = View.GONE


        })

        binding.submitButtonFragment.setOnClickListener {
            val date = binding.date.text.trim().toString()
            val time = binding.time.text.trim().toString()
            val officerName = binding.officerName.text.trim().toString()
            val complaintantName = binding.complainantResidence.text.trim().toString()
            val description = binding.complainDescription.text.trim().toString()


            binding.submitButtonFragment.visibility = View.INVISIBLE
            binding.progressBarFirFragment.visibility = View.VISIBLE
            if (date.isEmpty() || time.isEmpty() || officerName.isEmpty() || complaintantName.isEmpty() || description.isEmpty()) {
                Toast.makeText(requireContext(), "Each filed is mandatory", Toast.LENGTH_SHORT)
                    .show()

                binding.submitButtonFragment.visibility = View.VISIBLE
                binding.progressBarFirFragment.visibility = View.GONE
            } else {
                viewModel.reportComplaint(
                    id,
                    ReportComplaintDataModel(date, time, officerName, complaintantName, description)
                )
                binding.submitButtonFragment.visibility = View.INVISIBLE
                binding.progressBarFirFragment.visibility = View.VISIBLE
            }

        }


        return binding.root
    }

    private fun openTimePicker(view: View) {
        var showTime = view.findViewById<TextView>(R.id.time)
        val calendar = Calendar.getInstance()
        var hour = calendar.get(Calendar.HOUR_OF_DAY)
        var minute = calendar.get(Calendar.MINUTE)

        val timePickerDialog = TimePickerDialog(
            requireContext(),
            TimePickerDialog.OnTimeSetListener { view, hourOfDay, minute1 ->
                hour = hourOfDay;
                minute = minute1;
                var date = "$hour:$minute";
                showTime.setText(date)
            },
            hour,
            minute,
            DateFormat.is24HourFormat(requireContext())
        )

        timePickerDialog.show()
    }

    private fun openDatePicker(view: View) {
        val calendar = Calendar.getInstance()
        var year = calendar.get(Calendar.YEAR)
        var month = calendar.get(Calendar.MONTH)
        var day = calendar.get(Calendar.DAY_OF_MONTH)
        var showDate = view.findViewById<TextView>(R.id.date)
        val datePickerDialog = DatePickerDialog(
            requireContext(),
            DatePickerDialog.OnDateSetListener { _, selectedYear, selectedMonth, selectedDay ->
                year = selectedYear
                month = selectedMonth
                day = selectedDay

                var date = "$day/$month/$year";
                showDate.setText(date)
//                Toast.makeText(activity, "Date: " + selectedDay + ":" + selectedMonth + ":" + selectedYear, Toast.LENGTH_SHORT).show()
            },
            year,
            month,
            day
        )
        datePickerDialog.show()
    }

}