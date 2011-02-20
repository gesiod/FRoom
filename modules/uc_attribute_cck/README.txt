$Id: README.txt,v 1.1 2010/10/11 15:21:53 trungonly Exp $ 

CCK Attribute README

  I got a lots of requests from community, my colleagues and myself, about an 
  auto-generated Attribute options for Übercart 2.x.

  See these threads: 
    http://drupal.org/node/443926
    http://drupal.org/node/298361
    http://drupal.org/node/333085

  While current Attribute mechanism is manually data input, my attempt is making
  a way to connect between CCK Options and Attribute Options.

  Übercart API allows us to do that smoothly.

=======
INSTALL
=======

- Place this module in sites/all/modules/ or sites/your-domain/modules/, or even 
  better sites/your-domain/modules/ubercart/contrib/ as suggested.

- Simply install this module as usual.

- This module is independent from the Übercart core Attribute module. You can use
  this CCK Attribute module with or without the Attribute module.

=============
CONFIGURATION
=============

- There is no general configuration needed at this time.

- To select one or more Content type(s) to use their CCK fields as CCK Attribute 
  Options, first we create a standard Übercart product. Then go to node Edit -> 
  CCK Attribute tab. Check any Content type(s) that holds your CCK fields.
  
- Optional: You can set display option for the Attributes (in Cart, Checkout pane
  or in Order summary) by setting Content type -> Fields -> Display fields -> Teaser.
  Eg. For Node Reference field type, available options are Title (link), Title (no
  link), Full node or Teaser.

======
ISSUES
======

- Since this is an early stage (but working) module, I have not tested all CCK field
  types. Just confirmed Node Reference, User Reference working well. Your testing
  alerts are welcome!
  
========
ROAD MAP
========

- Übercart 3.x road map is going to fit with Drupal 7, where CCK is comming to core
  D7 field. I hope Übercart 3.x will have a good integration with CCK. Is it a near
  future?
  
- I'm working on web dev daily, so I'm very open for any comment/suggestion.

======
THANKS
======

- Thanks to Drupal and Übercart team who made a great stuff.
- Thanks to ninjacoder (at gmail) who pushed me in making it works and assitted me
  in testing final result.

September 2010
Cheers & fun,
Trung

