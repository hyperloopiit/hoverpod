#include "LandingGear.hpp"

enum class LandingGearStatus
{
    STATUS_OK,
    STATUS_ERROR
};

LandingGear::LandingGear() : is_engaged(false) {
    // read sensor don't set to false
}

void LandingGear::engage() {
    // engage landing gear
    // write to pins idk how its going to be connected to imu
    is_engaged = true;
}

void LandingGear::disengange() {
    // disengage landing gear
    // write to pins idk how its going to be connected to imu
    is_engaged = false;
}

bool LandingGear::get_engaged() const {
    return is_engaged;
}