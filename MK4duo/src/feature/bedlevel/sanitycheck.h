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
 * sanitycheck.h
 *
 * Test configuration values for errors at compile-time.
 */

/**
 * Babystepping
 */
#if ENABLED(BABYSTEPPING)
  #if DISABLED(ULTRA_LCD)
    #error "BABYSTEPPING requires an LCD controller."
  #endif
  #if IS_SCARA
    #error "BABYSTEPPING is not implemented for SCARA yet."
  #endif
  #if MECH(DELTA) && ENABLED(BABYSTEP_XY)
    #error "BABYSTEPPING only implemented for Z axis on deltabots."
  #endif
#endif

/**
 * Allow only one bed leveling option to be defined
 */
static_assert(1 >= 0
  #if ENABLED(AUTO_BED_LEVELING_LINEAR)
    + 1
  #endif
  #if ENABLED(AUTO_BED_LEVELING_3POINT)
    + 1
  #endif
  #if ENABLED(AUTO_BED_LEVELING_BILINEAR)
    + 1
  #endif
  #if ENABLED(AUTO_BED_LEVELING_UBL)
    + 1
  #endif
  #if ENABLED(MESH_BED_LEVELING)
    + 1
  #endif
  , "Select only one of: MESH_BED_LEVELING, AUTO_BED_LEVELING_LINEAR, AUTO_BED_LEVELING_3POINT, AUTO_BED_LEVELING_BILINEAR or AUTO_BED_LEVELING_UBL."
);

/**
 * Bed Leveling Requirements
 */

#if ENABLED(AUTO_BED_LEVELING_UBL)

  /**
   * Unified Bed Leveling
   */

  #if IS_SCARA
    #error "AUTO_BED_LEVELING_UBL does not yet support SCARA printers."
  #elif DISABLED(EEPROM_SETTINGS)
    #error "AUTO_BED_LEVELING_UBL requires EEPROM_SETTINGS. Please update your configuration."
  #elif !WITHIN(GRID_MAX_POINTS_X, 3, 15) || !WITHIN(GRID_MAX_POINTS_Y, 3, 15)
    #error "GRID_MAX_POINTS_[XY] must be a whole number between 3 and 15."
  #endif
#endif

/**
 * Mesh Bed Leveling
 */
#if ENABLED(MESH_BED_LEVELING)
  #if IS_DELTA
    #error "MESH_BED_LEVELING does not yet support DELTA printers."
  #elif IS_SCARA
    #error "Only AUTO_BED_LEVELING_BILINEAR currently supports SCARA bed leveling."
  #elif GRID_MAX_POINTS_X > 9 || GRID_MAX_POINTS_Y > 9
    #error "GRID_MAX_POINTS_X and GRID_MAX_POINTS_Y must be less than 10."
  #endif
#endif


/**
 * ENABLE_LEVELING_FADE_HEIGHT requirements
 */
#if ENABLED(ENABLE_LEVELING_FADE_HEIGHT) && !HAS_LEVELING
  #error "ENABLE_LEVELING_FADE_HEIGHT requires Bed Level"
#endif