<?php

/**
 * @file
 * Turkey.
 */

/**
 * Returns an associative array of states/territories.
 */
function location_province_list_tr() {
  return array(
    'ADA' => "Adana",
    'ADI' => "Adiyaman",
    'AFY' => "Afyonkarahisar",
    'AGR' => "Agri",
    'AKS' => "Aksaray",
    'AMA' => "Amasya",
    'ANK' => "Ankara",
    'ANT' => "Antalya",
    'ARD' => "Ardahan",
    'ART' => "Artvin",
    'AYI' => "Aydin",
    'BAL' => "Balikesir",
    'BAR' => "Bartin",
    'BAT' => "Batman",
    'BAY' => "Bayburt",
    'BIL' => "Bilecik",
    'BIN' => "Bingol",
    'BIT' => "Bitlis",
    'BOL' => "Bolu",
    'BRD' => "Burdur",
    'BRS' => "Bursa",
    'CKL' => "Canakkale",
    'CKR' => "Cankiri",
    'COR' => "Corum",
    'DEN' => "Denizli",
    'DIY' => "Diyarbakir",
    'DUZ' => "Duzce",
    'EDI' => "Edirne",
    'ELA' => "Elazig",
    'EZC' => "Erzincan",
    'EZR' => "Erzurum",
    'ESK' => "Eskisehir",
    'GAZ' => "Gaziantep",
    'GIR' => "Giresun",
    'GMS' => "Gumushane",
    'HKR' => "Hakkari",
    'HTY' => "Hatay",
    'IGD' => "Igdir",
    'ISP' => "Isparta",
    'IST' => "Istanbul",
    'IZM' => "Izmir",
    'KAH' => "Kahramanmaras",
    'KRB' => "Karabuk",
    'KRM' => "Karaman",
    'KRS' => "Kars",
    'KAS' => "Kastamonu",
    'KAY' => "Kayseri",
    'KLS' => "Kilis",
    'KRK' => "Kirikkale",
    'KLR' => "Kirklareli",
    'KRS' => "Kirsehir",
    'KOC' => "Kocaeli",
    'KON' => "Konya",
    'KUT' => "Kutahya",
    'MAL' => "Malatya",
    'MAN' => "Manisa",
    'MAR' => "Mardin",
    'MER' => "Mersin",
    'MUG' => "Mugla",
    'MUS' => "Mus",
    'NEV' => "Nevsehir",
    'NIG' => "Nigde",
    'ORD' => "Ordu",
    'OSM' => "Osmaniye",
    'RIZ' => "Rize",
    'SAK' => "Sakarya",
    'SAM' => "Samsun",
    'SAN' => "Sanliurfa",
    'SII' => "Siirt",
    'SIN' => "Sinop",
    'SIR' => "Sirnak",
    'SIV' => "Sivas",
    'TEL' => "Tekirdag",
    'TOK' => "Tokat",
    'TRA' => "Trabzon",
    'TUN' => "Tunceli",
    'USK' => "Usak",
    'VAN' => "Van",
    'YAL' => "Yalova",
    'YOZ' => "Yozgat",
    'ZON' => "Zonguldak"
  );
}

/**
 * Returns minimum and maximum latitude and longitude needed to create a bounding box.
 */
function location_bounds_tr() {
  return array(
    'minlng' => 25.7317,
    'minlat' => 35.939633,
    'maxlng' => 44.7416,
    'maxlat' => 42.214367,
  );
}
