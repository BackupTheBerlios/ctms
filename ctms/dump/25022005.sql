-- MySQL dump 9.11
--
-- Host: localhost    Database: CTMS_ENTW
-- ------------------------------------------------------
-- Server version	4.0.21-Max

--
-- Table structure for table `ctms_action`
--

CREATE TABLE ctms_action (
  actio_id int(20) unsigned NOT NULL auto_increment,
  actio_t_bez int(20) unsigned NOT NULL default '0',
  actio_function varchar(100) NOT NULL default '',
  PRIMARY KEY  (actio_id)
) TYPE=MyISAM COMMENT='Action what is made if the order is failed';

--
-- Dumping data for table `ctms_action`
--


--
-- Table structure for table `ctms_email`
--

CREATE TABLE ctms_email (
  email_order_id int(20) NOT NULL default '0',
  email_adresse varchar(100) NOT NULL default '',
  email_number int(2) unsigned NOT NULL default '0',
  PRIMARY KEY  (email_order_id,email_adresse,email_number)
) TYPE=MyISAM COMMENT='email adresses';

--
-- Dumping data for table `ctms_email`
--


--
-- Table structure for table `ctms_langtxt`
--

CREATE TABLE ctms_langtxt (
  lant_id int(20) unsigned NOT NULL default '0',
  lant_language varchar(30) NOT NULL default '',
  lant_ktext varchar(255) default '',
  lant_text longtext,
  PRIMARY KEY  (lant_id,lant_language)
) TYPE=MyISAM COMMENT='The text who is language-different';

--
-- Dumping data for table `ctms_langtxt`
--


--
-- Table structure for table `ctms_orderopt`
--

CREATE TABLE ctms_orderopt (
  oopt_id int(20) unsigned NOT NULL auto_increment,
  oopt_t_bez int(20) unsigned NOT NULL default '0',
  oopt_unit_id int(20) unsigned NOT NULL default '0',
  oopt_action_id int(20) unsigned NOT NULL default '0',
  oopt_lock int(1) unsigned NOT NULL default '0',
  PRIMARY KEY  (oopt_id),
  KEY FK1 (oopt_t_bez),
  KEY FK2 (oopt_unit_id),
  KEY FK3 (oopt_action_id)
) TYPE=MyISAM COMMENT='The Options for an Costumer Order';

--
-- Dumping data for table `ctms_orderopt`
--


--
-- Table structure for table `ctms_unit`
--

CREATE TABLE ctms_unit (
  unit_id int(20) unsigned NOT NULL auto_increment,
  unit_t_bez int(20) unsigned NOT NULL default '0',
  PRIMARY KEY  (unit_id)
) TYPE=MyISAM COMMENT='Units - Day, Hour, Month';

--
-- Dumping data for table `ctms_unit`
--


--
-- Table structure for table `ctms_user`
--

CREATE TABLE ctms_user (
  user_id varchar(100) NOT NULL default '',
  user_firstname varchar(100) NOT NULL default '',
  user_lastname varchar(100) NOT NULL default '',
  user_begindate varchar(100) NOT NULL default '',
  user_agreement varchar(100) NOT NULL default '',
  user_section varchar(100) NOT NULL default '',
  user_costcenter varchar(100) NOT NULL default '',
  user_noticeperiode varchar(100) NOT NULL default '',
  user_holidayentitlement varchar(100) NOT NULL default '',
  user_companycar varchar(100) NOT NULL default '',
  user_incotime varchar(100) NOT NULL default '',
  user_otime varchar(100) NOT NULL default '',
  user_weekendotime varchar(100) NOT NULL default '',
  user_convention varchar(100) NOT NULL default '',
  user_classification varchar(100) NOT NULL default ''
) TYPE=MyISAM COMMENT='Table for the users';

--
-- Dumping data for table `ctms_user`
--


