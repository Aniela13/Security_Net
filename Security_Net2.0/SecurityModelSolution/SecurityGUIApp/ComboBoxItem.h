#pragma once
using namespace System;


public ref class ComboBoxItem
{
public:
	int Value;
	String^ Name;

	ComboBoxItem(int value, String^ name) {
		this->Value = value;
		this->Name = name;
	}

	String^ ToString() override {
		return this->Name;
		//return this->Value + " - " + this->Name;
	}
};

