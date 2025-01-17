/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (c) 2019 Alberto Cotronei @MagoKimbra
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
 * Copyright (c) 2019 Alberto Cotronei @MagoKimbra
 */

#define CODE_M851

inline void gcode_M851(void) {

  #if DISABLED(DISABLE_M503)
    // No arguments? Show M851 report.
    if (!parser.seen("XYZFSR")) {
      probe.print_M851();
      return;
    }
  #endif

  probe.data.offset[X_AXIS] = parser.linearval('X', probe.data.offset[X_AXIS]);
  probe.data.offset[Y_AXIS] = parser.linearval('Y', probe.data.offset[Y_AXIS]);

  if (parser.seen('Z')) {
    const float value = parser.value_linear_units();
    if (WITHIN(value, Z_PROBE_OFFSET_RANGE_MIN, Z_PROBE_OFFSET_RANGE_MAX)) {
      probe.data.offset[Z_AXIS] = value;
    }
    else {
      SERIAL_LM(ER, "?Z out of range (" STRINGIFY(Z_PROBE_OFFSET_RANGE_MIN) " to " STRINGIFY(Z_PROBE_OFFSET_RANGE_MAX));
      return;
    }
  }

  probe.data.speed_fast   = parser.ushortval('F', probe.data.speed_fast);
  probe.data.speed_slow   = parser.ushortval('S', probe.data.speed_slow);
  probe.data.repetitions  = parser.byteval('R', probe.data.repetitions);

  NOLESS(probe.data.speed_fast, 120);
  NOLESS(probe.data.speed_slow, 60);
  NOLESS(probe.data.repetitions, 1);

}
