#pragma once

// WiFi credentials
#define WIFI_SSID "ATTGpyJKmS"
#define WIFI_PASS "cw7nqpsr?sun"

// Home location
#define HOME_LAT 30.6905
#define HOME_LON -88.1632

// ADS-B settings — reduced for CYD (no PSRAM, 320KB DRAM)
#define ADSB_RADIUS_NM 75
#define ADSB_POLL_INTERVAL_MS 5000
#define MAX_AIRCRAFT 50
#define TRAIL_LENGTH 15

// ADS-B feed — adsb.fi open data (free, no key, max 250 nm, ~1 req/sec)
// Format args: lat, lon, radius_nm
#define ADSB_API_URL_FMT "https://opendata.adsb.fi/api/v2/lat/%.4f/lon/%.4f/dist/%d"
// Feeds behind Cloudflare (api.adsb.lol) reject the default "ESP32HTTPClient"
// agent with HTTP 403, so send an identifiable one on every request.
#define HTTP_USER_AGENT "adsb-cyd/1.0 (ESP32; +https://github.com/sgmess/adsb-cyd)"
// Extra wait after HTTP 429 (rate limited) before the next poll
#define ADSB_BACKOFF_MS 15000

// CYD display
#define LCD_H_RES 320
#define LCD_V_RES 240

// CYD touch calibration (landscape rotation 1)
#define TOUCH_X_MIN 2600
#define TOUCH_X_MAX 1100
#define TOUCH_Y_MIN 3950
#define TOUCH_Y_MAX 280
