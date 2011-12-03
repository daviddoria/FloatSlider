#include <iostream>

#include "FloatSlider.h"

FloatSlider::FloatSlider(QWidget *parent) : QWidget(parent)
{
  setupUi(this);
}

float FloatSlider::GetValue()
{
  return this->MinValue + (this->MaxValue - this->MinValue) * static_cast<float>(this->horizontalSlider->value()) / 100.0f;
}
