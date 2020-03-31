#include "mainwin.h"
#include "store.h"
#include "entrydialog.h"
#include <iostream>
#include <gtkmm.h>
#include <sstream>

std::ostringstream oss;

Mainwin::Mainwin() : store{ nullptr } {





	set_default_size(600, 400);
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
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    // V I E W
    Gtk::MenuItem* menuitem_view = Gtk::manage(new Gtk::MenuItem("_View", true));
    menubar->append(*menuitem_view);
    Gtk::Menu *viewmenu = Gtk::manage(new Gtk::Menu());
    menuitem_view->set_submenu(*viewmenu);

    // I N S E R T
    Gtk::MenuItem* menuitem_insert = Gtk::manage(new Gtk::MenuItem("_Insert", true));
    menubar->append(*menuitem_insert);
    Gtk::Menu* insertmenu = Gtk::manage(new Gtk::Menu());
    menuitem_insert->set_submenu(*insertmenu);

    // H E L P
    Gtk::MenuItem* menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu* helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);

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
//  VIEW
    // C U S T O M E R
    Gtk::MenuItem* menuitem_customer = Gtk::manage(new Gtk::MenuItem("_Customer", true));
    menuitem_customer->signal_activate().connect([this] {this->on_view_customer_click(); });
    viewmenu->append(*menuitem_customer);

    // P E R I P H E R A L
    Gtk::MenuItem* menuitem_peripheral = Gtk::manage(new Gtk::MenuItem("_Peripheral", true));
    menuitem_peripheral->signal_activate().connect([this] {this->on_view_peripheral_click(); });
    viewmenu->append(*menuitem_peripheral);

    // D E S K T O P
    Gtk::MenuItem* menuitem_desktop = Gtk::manage(new Gtk::MenuItem("_Desktop", true));
    menuitem_desktop->signal_activate().connect([this] {this->on_view_desktop_click(); });
    viewmenu->append(*menuitem_desktop);

    // O R D E R
    Gtk::MenuItem* menuitem_order = Gtk::manage(new Gtk::MenuItem("_Order", true));
    menuitem_order->signal_activate().connect([this] {this->on_view_order_clicK(); });
    viewmenu->append(*menuitem_order);

// INSERT
    // C U S T O M E R
    Gtk::MenuItem* menuitem_customer2 = Gtk::manage(new Gtk::MenuItem("_Customer", true));
    menuitem_customer2->signal_activate().connect([this] {this->on_insert_customer_click(); });
    insertmenu->append(*menuitem_customer2);

    // P E R I P H E R A L
    Gtk::MenuItem* menuitem_peripheral2 = Gtk::manage(new Gtk::MenuItem("_Peripheral", true));
    menuitem_peripheral2->signal_activate().connect([this] {this->on_insert_peripheral_click(); });
    insertmenu->append(*menuitem_peripheral2);

    // D E S K T O P
    Gtk::MenuItem* menuitem_desktop2 = Gtk::manage(new Gtk::MenuItem("_Desktop", true));
    menuitem_desktop2->signal_activate().connect([this] {this->on_insert_desktop_click(); });
    insertmenu->append(*menuitem_desktop2);

    // O R D E R
    Gtk::MenuItem* menuitem_order2 = Gtk::manage(new Gtk::MenuItem("_Order", true));
    menuitem_order2->signal_activate().connect([this] {this->on_insert_order_click(); });
    insertmenu->append(*menuitem_order2);

    // ///////////// //////////////////////////////////////////////////////////
    // T O O L B A R
    // Add a toolbar to the vertical box below the menu
    Gtk::Toolbar* toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->pack_start(*toolbar, Gtk::PACK_SHRINK, 0);
    // vbox->add(*toolbar);

// STATUS BAR
msg = Gtk::manage(new Gtk::Label());
msg->set_hexpand(true);
vbox->pack_start(*msg, Gtk::PACK_SHRINK, 0);
vbox->show_all();


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
    for (int i = 0; i < store->num_options(); ++i)
       oss << i << ") " << store->option(i) << "\n" << oss.str();
	delete store;

}

void Mainwin::on_view_desktop_click()
{
    for (int i = 0; i < store->num_desktops(); ++i)
        std::cout << i << ") " << store->desktop(i) << "\n" << oss.str();
	delete store;
}

void Mainwin::on_view_order_clicK()
{
    for (int i = 0; i < store->num_orders(); ++i)
        std::cout << i << ") " << store->order(i) << "\n" << oss.str();
	delete store;
}

void Mainwin::on_view_customer_click()
{
	
    for (int i = 0; i < store->num_customers(); ++i)
        oss << i << ") " << store->customer(i) << "\n" << oss.str();
	delete store;
    
}

void Mainwin::on_insert_peripheral_click()
{
    std::cout << "Name of new peripheral? ";
    std::string s;
    std::getline(std::cin, s);
    std::cout << "Cost? ";
    double cost;
    if (std::cin >> cost) {
        Options option{ s, cost };
        store->add_option(option);
    }
    else {
        std::cin.clear();
        std::cerr << "#### INVALID PRICE ####\n\n";
        std::cin.ignore(32767, '\n');
        } 
}

void Mainwin::on_insert_desktop_click()
{
    int desktop = store->new_desktop();
    while (true) {
        std::cout << store->desktop(desktop) << "\n\n";
        for (int i = 0; i < store->num_options(); ++i)
            std::cout << i << ") " << store->option(i) << '\n';
        std::cout << "\nAdd which peripheral (-1 when done)? ";
        int option;
        std::cin >> option; std::cin.ignore(32767, '\n');
        if (option == -1) break;
        try {
            store->add_option(option, desktop);
        }
        catch (std::exception & e) {
            std::cerr << "#### INVALID OPTION ####\n\n";
        } 
}
}

void Mainwin::on_insert_order_click()
{
    int customer = -1;
    int order = -1;
    int desktop = -1;
    try {
        for (int i = 0; i < store->num_customers(); ++i)
            std::cout << i << ") " << store->customer(i) << '\n';
        std::cout << "Customer? ";
        std::cin >> customer; std::cin.ignore(32767, '\n');
        std::cout << store->customer(customer) << '\n';

        order = store->new_order(customer);
        std::cout << "Order " << order
            << " created for Customer " << customer << std::endl;
        desktop = 0;
    }
    catch (std::exception & e) {
        std::cerr << "#### UNABLE TO CREATE ORDER FOR CUSTOMER "
            << customer << " ####\n\n";
    }

    while (desktop >= 0) {
        for (int i = 0; i < store->num_desktops(); ++i)
            std::cout << i << ") " << store->desktop(i) << '\n';
        std::cout << "Desktop (-1 when done)? ";
        std::cin >> desktop; std::cin.ignore(32767, '\n');
        if (desktop == -1) break;
        try {
            store->add_desktop(desktop, order);
        }
        catch (std::exception & e) {
            std::cerr << "#### UNABLE TO ADD DESKTOP " << desktop
                << " TO ORDER " << order << std::endl;
            desktop = 0;
        }
    }

    if (order >= 0)
        std::cout << "\n++++ Order " << order << " Placed ++++\n"
        << store->order(order); 
}

void Mainwin::on_insert_customer_click()
{ 
    std::cout << "Customer name? ";
    std::string name;
    std::getline(std::cin, name);
    if (name.size()) {
        std::cout << "Customer phone (xxx-xxx-xxxx)? ";
        std::string phone;
        std::getline(std::cin, phone);
        std::cout << "Customer email (xxx@domain.com)? ";
        std::string email;
        std::getline(std::cin, email);
        Customer customer{ name, phone, email };
        store->add_customer(customer);
    } 
}


void Mainwin::on_about_click() {
    Gtk::AboutDialog dialog;
    dialog.set_transient_for(*this); // Avoid the discouraging warning
    dialog.set_program_name("ELSA");
    auto logo = Gdk::Pixbuf::create_from_file("macrohard.png");
    dialog.set_logo(logo);
    dialog.set_version("Version 1.2.1");
    dialog.set_copyright("2020");
    dialog.set_license_type(Gtk::License::LICENSE_GPL_3_0);
    std::vector< Glib::ustring > authors = { "Jason Shamayev" };
    dialog.set_authors(authors);
    std::vector< Glib::ustring > artists = {
        "Logo by Jason Shamayev, licensed under Macrohard",
        "Robot by FreePik.com, licensed for personal and commercial purposes with attribution https://www.freepik.com/free-vector/grey-robot-silhouettes_714902.htm" };
    dialog.set_artists(artists);
    dialog.run(); 
}

// /////////////////
// U T I L I T I E S
// /////////////////


std::string Mainwin::get_string(std::string prompt)
{
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
    data->set_markup(s);
    s = "<span size='24000' weight='bold'>";
}

void Mainwin::set_msg(std::string s)
{
    // Display the collected status on the status bar
    msg->set_markup(s);

}



