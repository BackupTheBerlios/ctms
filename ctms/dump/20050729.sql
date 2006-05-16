

CREATE TABLE ctms_.ctms_customer (
  cust_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  cust_name VARCHAR(255) NULL,
  cust_firstname VARCHAR(255) NULL,
  cust_street VARCHAR(255) NULL,
  cust_zipcode VARCHAR(20) NULL,
  cust_city VARCHAR(255) NULL,
  cust_firmname VARCHAR(255) BINARY NULL,
  cust_firmname2 VARCHAR(255) NULL,
  cust_iban VARCHAR(34) NULL,
  cust_bic VARCHAR(11) NULL,
  cust_kredit DOUBLE NULL,
  cust_payproberty VARCHAR(255) NULL,
  cust_contact BLOB NULL,
  cust_telnumber VARCHAR(20) NULL,
  cust_faxnummer VARCHAR(20) NULL,
  cust_email VARCHAR(50) NULL,
  cust_homepage VARCHAR(255) NULL,
  PRIMARY KEY(cust_id)
);

CREATE TABLE ctms_.ctms_customer (
  cust_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  cust_name VARCHAR(255) NULL,
  cust_firstname VARCHAR(255) NULL,
  cust_street VARCHAR(255) NULL,
  cust_zipcode VARCHAR(20) NULL,
  cust_city VARCHAR(255) NULL,
  cust_firmname VARCHAR(255) BINARY NULL,
  cust_firmname2 VARCHAR(255) NULL,
  cust_iban VARCHAR(34) NULL,
  cust_bic VARCHAR(11) NULL,
  cust_kredit DOUBLE NULL,
  cust_payproberty VARCHAR(255) NULL,
  cust_contact BLOB NULL,
  cust_telnumber VARCHAR(20) NULL,
  cust_faxnummer VARCHAR(20) NULL,
  cust_email VARCHAR(50) NULL,
  cust_homepage VARCHAR(255) NULL,
  PRIMARY KEY(cust_id)
);

CREATE TABLE ctms_employee (
  empl_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  empl_person_id INTEGER UNSIGNED NOT NULL,
  empl_begindate DATE NOT NULL,
  empl_agreement VARCHAR(255) NULL,
  empl_section VARCHAR(255) NULL,
  empl_costcenter VARCHAR(255) NULL,
  empl_notice_periode INTEGER UNSIGNED NULL,
  empl_company_car VARCHAR(10) NULL,
  empl_included_overtime INTEGER UNSIGNED NULL,
  empl_overtime INTEGER NULL,
  empl_weekend_overtime INTEGER UNSIGNED NULL,
  empl_convention VARCHAR(255) NULL,
  empl_classification INTEGER UNSIGNED NULL,
  PRIMARY KEY(empl_id),
  INDEX ctms_employee_FKIndex1(ctms_person_person_id),
  INDEX ctms_employee_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_employee_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_grouprights (
  group_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  group_t_name VARCHAR(20) NULL,
  group_rightdef_id INTEGER UNSIGNED NOT NULL,
  group_persontyp VARCHAR(20) NULL,
  PRIMARY KEY(group_id)
);

CREATE TABLE ctms_grouprights (
  group_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  group_t_name VARCHAR(20) NULL,
  group_rightdef_id INTEGER UNSIGNED NOT NULL,
  group_persontyp VARCHAR(20) NULL,
  PRIMARY KEY(group_id)
);

CREATE TABLE ctms_.ctms_language (
  lang_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  PRIMARY KEY(lang_id)
);

CREATE TABLE ctms_login (
  login_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  login_person_id INTEGER UNSIGNED NOT NULL,
  login_password VARCHAR(255) NOT NULL,
  login_fail_login INTEGER UNSIGNED ZEROFILL NOT NULL DEFAULT 0,
  login_lock BOOL NOT NULL DEFAULT 0,
  PRIMARY KEY(login_id),
  INDEX ctms_login_FKIndex1(ctms_person_person_id),
  INDEX ctms_login_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_login_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_login (
  login_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  login_person_id INTEGER UNSIGNED NOT NULL,
  login_password VARCHAR(255) NOT NULL,
  login_fail_login INTEGER UNSIGNED ZEROFILL NOT NULL DEFAULT 0,
  login_lock BOOL NOT NULL DEFAULT 0,
  PRIMARY KEY(login_id),
  INDEX ctms_login_FKIndex1(ctms_person_person_id),
  INDEX ctms_login_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_login_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_login (
  login_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  login_person_id INTEGER UNSIGNED NOT NULL,
  login_password VARCHAR(255) NOT NULL,
  login_fail_login INTEGER UNSIGNED ZEROFILL NOT NULL DEFAULT 0,
  login_lock BOOL NOT NULL DEFAULT 0,
  PRIMARY KEY(login_id),
  INDEX ctms_login_FKIndex1(ctms_person_person_id),
  INDEX ctms_login_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_login_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_login (
  login_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  login_person_id INTEGER UNSIGNED NOT NULL,
  login_password VARCHAR(255) NOT NULL,
  login_fail_login INTEGER UNSIGNED ZEROFILL NOT NULL DEFAULT 0,
  login_lock BOOL NOT NULL DEFAULT 0,
  PRIMARY KEY(login_id),
  INDEX ctms_login_FKIndex1(ctms_person_person_id),
  INDEX ctms_login_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_login_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_login (
  login_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  login_person_id INTEGER UNSIGNED NOT NULL,
  login_password VARCHAR(255) NOT NULL,
  login_fail_login INTEGER UNSIGNED ZEROFILL NOT NULL DEFAULT 0,
  login_lock BOOL NOT NULL DEFAULT 0,
  PRIMARY KEY(login_id),
  INDEX ctms_login_FKIndex1(ctms_person_person_id),
  INDEX ctms_login_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_login_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_login (
  login_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  ctms_person_person_id INTEGER UNSIGNED NOT NULL,
  login_person_id INTEGER UNSIGNED NOT NULL,
  login_password VARCHAR(255) NOT NULL,
  login_fail_login INTEGER UNSIGNED ZEROFILL NOT NULL DEFAULT 0,
  login_lock BOOL NOT NULL DEFAULT 0,
  PRIMARY KEY(login_id),
  INDEX ctms_login_FKIndex1(ctms_person_person_id),
  INDEX ctms_login_FKIndex2(ctms_uright_uright_id),
  INDEX ctms_login_FKIndex3(ctms_grouprights_group_id)
);

CREATE TABLE ctms_person (
  person_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  person_firstname VARCHAR(255) NOT NULL,
  person_lastname VARCHAR(255) NOT NULL,
  person_email VARCHAR(255) NULL,
  person_street VARCHAR(255) NULL,
  person_country VARCHAR(255) NOT NULL,
  person_city VARCHAR(255) NOT NULL,
  person_zipcode VARCHAR(255) NULL,
  person_telnumber VARCHAR(255) NULL,
  PRIMARY KEY(person_id)
);

CREATE TABLE ctms_projtime (
  projt_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  projt_empl_id INTEGER UNSIGNED NOT NULL,
  projt_date INTEGER UNSIGNED NOT NULL,
  projt_hour INTEGER UNSIGNED NOT NULL,
  projt_user_cost INTEGER UNSIGNED NULL,
  projt_comment INTEGER UNSIGNED NULL,
  projt_orpt_id INTEGER UNSIGNED NOT NULL,
  PRIMARY KEY(projt_id),
  INDEX ctms_projtime_FK1(projt_empl_id)
);

CREATE TABLE ctms_rightdef (
  rightdef_id INTEGER UNSIGNED NOT NULL,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  rightdef_persontyp VARCHAR(20) NOT NULL,
  rightdef_usertyp VARCHAR(20) NOT NULL,
  rightdef_rightname VARCHAR(45) NOT NULL,
  rightdef_value INTEGER UNSIGNED NOT NULL,
  PRIMARY KEY(rightdef_id),
  INDEX ctms_rightdef_FKIndex1(ctms_uright_uright_id),
  INDEX ctms_rightdef_FKIndex2(ctms_grouprights_group_id)
);

CREATE TABLE ctms_rightdef (
  rightdef_id INTEGER UNSIGNED NOT NULL,
  ctms_grouprights_group_id INTEGER UNSIGNED NOT NULL,
  ctms_uright_uright_id INTEGER UNSIGNED NOT NULL,
  rightdef_persontyp VARCHAR(20) NOT NULL,
  rightdef_usertyp VARCHAR(20) NOT NULL,
  rightdef_rightname VARCHAR(45) NOT NULL,
  rightdef_value INTEGER UNSIGNED NOT NULL,
  PRIMARY KEY(rightdef_id),
  INDEX ctms_rightdef_FKIndex1(ctms_uright_uright_id),
  INDEX ctms_rightdef_FKIndex2(ctms_grouprights_group_id)
);

CREATE TABLE ctms_time (
  time_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_employee_empl_id INTEGER UNSIGNED NOT NULL,
  time_date DATE NOT NULL,
  time_start TIME NOT NULL,
  time_end TIME NULL,
  time_empl_id INTEGER UNSIGNED NOT NULL,
  time_orpt_id INTEGER UNSIGNED NULL,
  PRIMARY KEY(time_id),
  INDEX ctms_time_FKIndex1(ctms_employee_empl_id)
);

CREATE TABLE ctms_time (
  time_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_employee_empl_id INTEGER UNSIGNED NOT NULL,
  time_date DATE NOT NULL,
  time_start TIME NOT NULL,
  time_end TIME NULL,
  time_empl_id INTEGER UNSIGNED NOT NULL,
  time_orpt_id INTEGER UNSIGNED NULL,
  PRIMARY KEY(time_id),
  INDEX ctms_time_FKIndex1(ctms_employee_empl_id)
);

CREATE TABLE ctms_time (
  time_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  ctms_employee_empl_id INTEGER UNSIGNED NOT NULL,
  time_date DATE NOT NULL,
  time_start TIME NOT NULL,
  time_end TIME NULL,
  time_empl_id INTEGER UNSIGNED NOT NULL,
  time_orpt_id INTEGER UNSIGNED NULL,
  PRIMARY KEY(time_id),
  INDEX ctms_time_FKIndex1(ctms_employee_empl_id)
);

CREATE TABLE ctms_uright (
  uright_id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  uright_t_name VARCHAR(20) NOT NULL,
  uright_rightdef_id INTEGER UNSIGNED NOT NULL,
  uright_persontyp VARCHAR(20) NOT NULL,
  PRIMARY KEY(uright_id)
);


