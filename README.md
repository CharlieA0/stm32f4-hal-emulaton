# stm32f4-hal-emulation
Allocates stm32f413's registers and memory-mapped peripherals to ease native testing. 

This is an adaptation of the microcontroller's HAL and CMSIS libraries that allows them to compile and run natively. It points HAL references to registers to allocated emulations. This frees you from having to mock up unnecessary functionality when writing native tests. Just replace the stm32f413's library files with these emulated versions when compiling native tests.

Further, since most of the hal functions have been declared weak symbols if you build with gnu you can mock them as needed in tests without worrying about duplicate definitions.

We build our tests with [Unity](https://github.com/ThrowTheSwitch/Unity). Pull requests designed to make unit testing easier are generally welcome.
