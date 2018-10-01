/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * mcode
 *
 * Copyright (C) 2017 Alberto Cotronei @MagoKimbra
 */

#if ENABLED(CHOP_CALIBRATION)

  #define CODE_M930
  #define CODE_M931
  #define CODE_M932
  #define CODE_M933
  #define CODE_M934
  #define CODE_M935
  #define CODE_M936
  #define CODE_M937
  #define CODE_M938
  #define CODE_M939

  /**
   * M930: TMC set blank_time.
   */
  inline void gcode_M930(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_blank_time(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_blank_time(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M931: TMC set off_time.
   */
  inline void gcode_M931(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_off_time(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_off_time(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M932: TMC set hysteresis_start.
   */
  inline void gcode_M932(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_hysteresis_start(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_hysteresis_start(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M933: TMC set hysteresis_end/sine_offset (chm = 0/1).
   */
  inline void gcode_M933(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_hysteresis_end(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_hysteresis_end(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_hysteresis_end(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_hysteresis_end(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_hysteresis_end(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_hysteresis_end(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_hysteresis_end(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M934: TMC set fast_decay_time (chm = 1).
   */
  inline void gcode_M934(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperX, (uint8_t)parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperX2, (uint8_t)parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperY, (uint8_t)parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperY2, (uint8_t)parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperZ, (uint8_t)parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperZ2, (uint8_t)parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_fast_decay_time(tmc.stepperE0, (uint8_t)parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_fast_decay_time(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M935: TMC set disable_I_comparator (chm = 1).
   */
  inline void gcode_M935(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_disable_I_comparator(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_disable_I_comparator(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M936: TMC set stealth_gradient.
   */
  inline void gcode_M936(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_stealth_gradient(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_stealth_gradient(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M937: TMC set stealth_amplitude.
   */
  inline void gcode_M937(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_stealth_amplitude(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_stealth_amplitude(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M938: TMC set stealth_freq.
   */
  inline void gcode_M938(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_stealth_freq(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_stealth_freq(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

  /**
   * M939: TMC switch stealth_autoscale.
   */
  inline void gcode_M939(void) {
    if (parser.seenval('X')) {
      #if X_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperX, parser.value_int());
      #endif
      #if X2_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperX2, parser.value_int());
      #endif
    }
    if (parser.seenval('Y')) {
      #if Y_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperY, parser.value_int());
      #endif
      #if Y2_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperY2, parser.value_int());
      #endif
    }
    if (parser.seenval('Z')) {
      #if Z_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperZ, parser.value_int());
      #endif
      #if Z2_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperZ2, parser.value_int());
      #endif
    }
    if (parser.seenval('E')) {
      #if E0_IS_TRINAMIC
        tmc.set_stealth_autoscale(tmc.stepperE0, parser.value_int());
      #endif
    }
    if (parser.seen('X')) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperX, TMC_X);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperX2, TMC_X);
      #endif
    }
    if (parser.seen('Y')) {
      #if Y_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperY, TMC_Y);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperY2, TMC_Y2);
      #endif
    }
    if (parser.seen('Z')) {
      #if Z_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperZ, TMC_Z);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperZ2, TMC_Z2);
      #endif
    }
    if (parser.seen('E')) {
      #if E0_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperE0, TMC_E0);
      #endif
    }
    if (!parser.seen_axis()) {
      #if X_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperX, TMC_X);
      #endif
      #if Y_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperY, TMC_Y);
      #endif
      #if Z_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperZ, TMC_Z);
      #endif
      #if X2_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperX2, TMC_X2);
      #endif
      #if Y2_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperY2, TMC_Y2);
      #endif
      #if Z2_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperZ2, TMC_Z2);
      #endif
      #if E0_IS_TRINAMIC
        tmc.get_stealth_autoscale(tmc.stepperE0, TMC_E0);
      #endif
    }
  }

#endif // CHOP_CALIBRATION