#pragma once
#include <vector>
#include <iostream>

class IMU {
    std::vector<float> read_sensor_data();

    struct acceleration_data {
        float x;
        float y;
        float z;

        bool operator==(acceleration_data const& other) const { return other.x == x && other.y == y && other.z == z; }

        // allow us to cout << get_acel_values() for debugging and testing
        friend std::ostream &operator<<(std::ostream &output, const acceleration_data& dat) {
            output << "{" << dat.x <<  ", " << dat.y << ", " << dat.z << "}";
            return output;
        }
    } acel_values;
public:
    using ac_dat = acceleration_data; // for tests, otherwise if we need to declare externally (probably not)

    IMU(acceleration_data start);

    IMU();

    [[nodiscard]] acceleration_data get_acel_values() const;

    [[nodiscard]] float get_x_acel_value() const;

    [[nodiscard]] float get_y_acel_value() const;

    [[nodiscard]] float get_z_acel_value() const;

    void set_acel_values(acceleration_data val);

    void set_x_acel_value(float val);

    void set_y_acel_value(float val);

    void set_z_acel_value(float val);
};