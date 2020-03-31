#include "mainwin.h"
#include "store.h"
#include "entrydialog.h"
#include <iostream>
#include <gtkmm.h>
#include <sstream>

Mainwin::Mainwin() : store{ nullptr } {





	set_default_size(800, 200);
	set_title("ELSA");

    // Put a vertical box container as the Window contents
    Gtk::Box* vbox = Gtk::manage(new Gtk::VBox);
    add(*vbox);

    // /////// ////////////////////////////////////////////////////////////////
    // M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar* menubar = Gtk::manage(new Gtk::MenuBar);
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);
     //vbox->add(*menubar);

    //     F I L E
    // Create a File menu and add to the menu bar
    Gtk::MenuItem* menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu* filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    // V I E W
    Gtk::MenuItem* menuitem_view = Gtk::manage(new Gtk::MenuItem("_View", true));
    menubar->append(*menuitem_view);
    Gtk::Menu* viewmenu = Gtk::manage(new Gtk::Menu());
    menuitem_view->set_submenu(*viewmenu);

    // I N S E R T
    Gtk::MenuItem* menuitem_insert = Gtk::manage(new Gtk::MenuItem("_Insert", true));
    menubar->append(*menuitem_insert);
    Gtk::Menu* insertmenu = Gtk::manage(new Gtk::Menu());
    menuitem_view->set_submenu(*insertmenu);

    // H E L P
    Gtk::MenuItem* menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu* helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_view->set_submenu(*helpmenu);

    //         Q U I T
    // Append Quit to the File menu
    Gtk::MenuItem* menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect([this] {this->on_quit_click(); });
    filemenu->append(*menuitem_quit);


    //           A B O U T
    // Append About to the Help menu
    Gtk::MenuItem* menuitem_about = Gtk::manage(new Gtk::MenuItem("_About", true));
    menuitem_about->signal_activate().connect([this] {this->on_about_click(); });
    helpmenu->append(*menuitem_about);

    // C U S T O M E R
    Gtk::MenuItem* menuitem_customer = Gtk::manage(new Gtk::MenuItem("_Customer", true));
    menuitem_about->signal_activate().connect([this] {this->on_view_customer_click(); });
    helpmenu->append(*menuitem_customer);

    // P E R I P H E R A L
    Gtk::MenuItem* menuitem_peripheral = Gtk::manage(new Gtk::MenuItem("_Peripheral", true));
    menuitem_about->signal_activate().connect([this] {this->on_view_peripheral_click(); });
    helpmenu->append(*menuitem_peripheral);

    // C U S T O M E R
    Gtk::MenuItem* menuitem_desktop = Gtk::manage(new Gtk::MenuItem("_Desktop", true));
    menuitem_about->signal_activate().connect([this] {this->on_view_desktop_click(); });
    helpmenu->append(*menuitem_desktop);

    // O R D E R
    Gtk::MenuItem* menuitem_order = Gtk::manage(new Gtk::MenuItem("_Order", true));
    menuitem_about->signal_activate().connect([this] {this->on_view_order_clicK(); });
    helpmenu->append(*menuitem_order);


    // ///////////// //////////////////////////////////////////////////////////
    // T O O L B A R
    // Add a toolbar to the vertical box below the menu
    //Gtk::Toolbar* toolbar = Gtk::manage(new Gtk::Toolbar);
    //vbox->pack_start(*toolbar, Gtk::PACK_SHRINK, 0);
    // vbox->add(*toolbar);



}

Mainwin::~Mainwin() { }

// /////////////////
// C A L L B A C K S
// /////////////////

// COMBINED observer / callback

void Mainwin::on_quit_click(){
	close();
}
void Mainwin::on_view_peripheral_click()
{
}

void Mainwin::on_view_desktop_click()
{
}

void Mainwin::on_view_order_clicK()
{
}

void Mainwin::on_view_customer_click()
{
}

void Mainwin::on_insert_peripheral_click()
{
}

void Mainwin::on_insert_desktop_click()
{
}

void Mainwin::on_insert_order_click()
{
}


void Mainwin::on_about_click() {
    Gtk::AboutDialog dialog;
    dialog.set_transient_for(*this); // Avoid the discouraging warning
    dialog.set_program_name("Store");
    auto logo = Gdk::Pixbuf::create_from_file("macrohard.png");
    dialog.set_logo(logo);
    dialog.set_version("Version 1.2.1");
    dialog.set_copyright("2020");
    dialog.set_license_type(Gtk::License::LICENSE_GPL_3_0);
    std::vector< Glib::ustring > authors = { "Jason Shamayev" };
    dialog.set_authors(authors);
    std::vector< Glib::ustring > artists = {
        "Logo by M0tty, licensed under CC BY-SA 3.0 https://commons.wikimedia.org/wiki/File:Pyramidal_matches.svg",
        "Robot by FreePik.com, licensed for personal and commercial purposes with attribution https://www.freepik.com/free-vector/grey-robot-silhouettes_714902.htm" };
    dialog.set_artists(artists);
    dialog.run();
}

std::string Mainwin::get_string(std::string prompt)
{
    return std::string();
}

double Mainwin::get_double(std::string prompt)
{
    return 0.0;
}

int Mainwin::get_int(std::string prompt)
{
    return 0;
}

void Mainwin::set_data(std::string s)
{
}

void Mainwin::set_msg(std::string s)
{
}

// /////////////////
// U T I L I T I E S
// /////////////////



