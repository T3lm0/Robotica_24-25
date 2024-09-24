#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButtonStop()) );
	connect(reset, SIGNAL(clicked()), this, SLOT(doButtonReset()) );
	//connect(&timer, SIGNAL(timeout()), this, SLOT(updateCounter()) );
	connect(slider, SIGNAL(valueChanged(int)), displaySlider, SLOT(display(int)) );
	connect(slider, &QSlider::valueChanged, [this](int value){timer.setPeriod(value);});
	timer.connect(std::bind(&ejemplo1::updateCounter, this));
	timer.start(500);
}

void ejemplo1::doButtonStop()
{
	if(timer.isActive()) {
		timer.stop();
		button->setText("START");
	}else {
		timer.start(timer.getPeriod());
		button->setText("STOP");
	}
}

void ejemplo1::updateCounter() {
	lcdNumber->display(lcdNumber->value() + 1);
}

void ejemplo1::doButtonReset() {
	lcdNumber->display(0);
	if(!timer.isActive()) {
		timer.start(timer.getPeriod());
		button->setText("STOP");
	}
}

void ejemplo1::updateSlider() {
	if(slider->value() > 0) {
		displaySlider->display(slider->value());
		timer.setPeriod(slider->value());
	}
	else {
		displaySlider->display(1);
		timer.setPeriod(1);
	}
}

