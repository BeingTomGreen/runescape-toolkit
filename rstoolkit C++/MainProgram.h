#pragma once
#include <iostream>
#include <list>
#include <string>
#include <cctype>
namespace rstoolkitC {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Net;
	using namespace System::Net::NetworkInformation;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace System::Threading;
	using namespace System::Threading::Tasks;
	using namespace System::Text::RegularExpressions;
	using namespace System::Collections;
	using namespace System::Diagnostics;
	using namespace System::Net::Http;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  strengthpic;
	protected: 
	private: System::Windows::Forms::Label^  dungeoneeringlbl;
	private: System::Windows::Forms::PictureBox^  dungeoneeringpic;
	private: System::Windows::Forms::Label^  constructionlbl;
	private: System::Windows::Forms::PictureBox^  constructionpic;
	private: System::Windows::Forms::Label^  runecraftinglbl;
	private: System::Windows::Forms::PictureBox^  runecraftingpic;
	private: System::Windows::Forms::Panel^  summoningpnl;
	private: System::Windows::Forms::Label^  summoninglbl;
	private: System::Windows::Forms::PictureBox^  summoningpic;
	private: System::Windows::Forms::PictureBox^  magicpic;
	private: System::Windows::Forms::Panel^  firemakingpnl;
	private: System::Windows::Forms::Label^  firemakinglbl;
	private: System::Windows::Forms::PictureBox^  firemakingpic;
	private: System::Windows::Forms::Label^  prayerlbl;
	private: System::Windows::Forms::PictureBox^  prayerpic;
	private: System::Windows::Forms::Panel^  farmingpnl;
	private: System::Windows::Forms::Label^  farminglbl;
	private: System::Windows::Forms::PictureBox^  farmingpic;
	private: System::Windows::Forms::Label^  defencelbl;
	private: System::Windows::Forms::PictureBox^  defencepic;
	private: System::Windows::Forms::Panel^  woodcuttingpnl;
	private: System::Windows::Forms::Label^  woodcuttinglbl;
	private: System::Windows::Forms::PictureBox^  woodcuttingpic;
	private: System::Windows::Forms::Label^  strengthlbl;
	private: System::Windows::Forms::Label^  magiclbl;
	private: System::Windows::Forms::Label^  herblorelbl;
	private: System::Windows::Forms::Label^  hunterlbl;
	private: System::Windows::Forms::Panel^  herblorepnl;
	private: System::Windows::Forms::PictureBox^  herblorepic;
	private: System::Windows::Forms::Panel^  agilitypnl;
	private: System::Windows::Forms::Label^  agilitylbl;
	private: System::Windows::Forms::PictureBox^  agilitypic;
	private: System::Windows::Forms::Panel^  thievingpnl;
	private: System::Windows::Forms::Label^  thievinglbl;
	private: System::Windows::Forms::PictureBox^  thievingpic;
	private: System::Windows::Forms::Panel^  hppnl;
	private: System::Windows::Forms::Label^  hplbl;
	private: System::Windows::Forms::PictureBox^  hppic;
	private: System::Windows::Forms::Panel^  miningpnl;
	private: System::Windows::Forms::Label^  mininglbl;
	private: System::Windows::Forms::PictureBox^  miningpic;
	private: System::Windows::Forms::Panel^  craftingpnl;
	private: System::Windows::Forms::Label^  craftinglbl;
	private: System::Windows::Forms::PictureBox^  craftingpic;
	private: System::Windows::Forms::Panel^  smithingpnl;
	private: System::Windows::Forms::Label^  smithinglbl;
	private: System::Windows::Forms::PictureBox^  smithingpic;
	private: System::Windows::Forms::Timer^  timezonetimer;
	private: System::Windows::Forms::Label^  fletchinglbl;
	private: System::Windows::Forms::Panel^  fishingpnl;
	private: System::Windows::Forms::Label^  fishinglbl;
	private: System::Windows::Forms::PictureBox^  fishingpic;
	private: System::Windows::Forms::PictureBox^  fletchingpic;
	private: System::Windows::Forms::Label^  slayerlbl;
	private: System::Windows::Forms::PictureBox^  hunterpic;
	private: System::Windows::Forms::PictureBox^  slayerpic;
	private: System::Windows::Forms::Panel^  cookingpnl;
	private: System::Windows::Forms::Label^  cookinglbl;
	private: System::Windows::Forms::PictureBox^  cookingpic;
	private: System::Windows::Forms::Label^  attacklbl;
	private: System::Windows::Forms::ComboBox^  timezonecombo;
	private: System::Windows::Forms::Button^  geshowbtn;
	private: System::Windows::Forms::Button^  itemsearchbtn;
	private: System::Windows::Forms::TextBox^  itemtxt;
	private: System::Windows::Forms::PictureBox^  smallimage;


	private: System::Windows::Forms::Button^  calcsbtn;
	private: System::Windows::Forms::TabPage^  settingtab;
	private: System::Windows::Forms::ComboBox^  defaulttimezone;
	private: System::Windows::Forms::Label^  defaulttimezonelbl;
	private: System::Windows::Forms::CheckBox^  startupsrch;
	private: System::Windows::Forms::Button^  checkforupdatesbtn;
	private: System::Windows::Forms::Button^  versionbtn;
	private: System::Windows::Forms::Button^  changelogbtn;
	private: System::Windows::Forms::TextBox^  saversnametxt;
	private: System::Windows::Forms::Label^  rsnamelbl;
	private: System::Windows::Forms::Button^  savesettingsbtn;
	private: System::Windows::Forms::CheckBox^  truelevelscb;
	private: System::Windows::Forms::WebBrowser^  userbrowser1;
	private: System::Windows::Forms::Timer^  userstimer;
	private: System::Windows::Forms::PictureBox^  largeimage;
	private: System::Windows::Forms::Label^  rangelbl;
	private: System::Windows::Forms::PictureBox^  rangepic;
	private: System::Windows::Forms::Label^  totallbl;
	private: System::Windows::Forms::PictureBox^  totalpic;
	private: System::Windows::Forms::Button^  comparebtn;
	private: System::Windows::Forms::Button^  lookupbtn;
	private: System::Windows::Forms::Label^  unamelbl;
	private: System::Windows::Forms::TextBox^  usertxt;
	private: System::Windows::Forms::TabPage^  grandexchangetab;
	private: System::Windows::Forms::ListView^  grandexchangelst;
	private: System::Windows::Forms::ColumnHeader^  namecol;
	private: System::Windows::Forms::ColumnHeader^  memberscol;
	private: System::Windows::Forms::ColumnHeader^  pricecol;
	private: System::Windows::Forms::ColumnHeader^  changecol;
	private: System::Windows::Forms::Panel^  searchpnl;
	private: System::Windows::Forms::PictureBox^  attackpic;
	private: System::Windows::Forms::TextBox^  timezonetxt;
	private: System::Windows::Forms::TabPage^  calcstab;
	private: System::Windows::Forms::Panel^  fletchingpnl;
	private: System::Windows::Forms::Panel^  runecraftingpnl;
	private: System::Windows::Forms::Panel^  magicpnl;
	private: System::Windows::Forms::PictureBox^  barbarianassulthealpic;
	private: System::Windows::Forms::Panel^  fistofguthixpnl;
	private: System::Windows::Forms::Label^  fistofguthixlbl;
	private: System::Windows::Forms::PictureBox^  fistofguthixpic;
	private: System::Windows::Forms::Panel^  constructionpnl;
	private: System::Windows::Forms::Panel^  barbarianassultcollectpnl;
	private: System::Windows::Forms::Label^  barbarianassultcollectlbl;
	private: System::Windows::Forms::PictureBox^  barbarianassultcollectpic;
	private: System::Windows::Forms::Panel^  dungeoneeringpnl;
	private: System::Windows::Forms::Panel^  barbarianassultdefendpnl;
	private: System::Windows::Forms::Label^  barbarianassultdefendlbl;
	private: System::Windows::Forms::PictureBox^  barbarianassultdefendpic;
	private: System::Windows::Forms::Panel^  hunterpnl;
	private: System::Windows::Forms::Label^  barbarianassultheallbl;
	private: System::Windows::Forms::Panel^  slayerpnl;
	private: System::Windows::Forms::Panel^  barbarianassultattackpnl;
	private: System::Windows::Forms::Label^  barbarianassultattacklbl;
	private: System::Windows::Forms::PictureBox^  barbarianassultattackpic;
	private: System::Windows::Forms::Panel^  mobilisingarmiespnl;
	private: System::Windows::Forms::Label^  mobilisingarmieslbl;
	private: System::Windows::Forms::PictureBox^  mobilisingarmiespic;
	private: System::Windows::Forms::Panel^  cruciblepnl;
	private: System::Windows::Forms::Label^  cruciblelbl;
	private: System::Windows::Forms::PictureBox^  cruciblepic;
	private: System::Windows::Forms::Panel^  prayerpnl;
	private: System::Windows::Forms::TabControl^  rstoolkittabs;
	private: System::Windows::Forms::TabPage^  hiscoretab;
	private: System::Windows::Forms::CheckBox^  oldschoolcb;
	private: System::Windows::Forms::GroupBox^  activitiesbox;
	private: System::Windows::Forms::Label^  aranklbl;
	private: System::Windows::Forms::Label^  scorelbl;
	private: System::Windows::Forms::Label^  activitylbl;
	private: System::Windows::Forms::Label^  aranklbla;
	private: System::Windows::Forms::Label^  scorelbla;
	private: System::Windows::Forms::Label^  activitylbla;
	private: System::Windows::Forms::Panel^  dominiontowerpnl;
	private: System::Windows::Forms::Label^  dominiontowerlbl;
	private: System::Windows::Forms::PictureBox^  dominiontowerpic;
	private: System::Windows::Forms::Panel^  conquestpnl;
	private: System::Windows::Forms::Label^  conquestlbl;
	private: System::Windows::Forms::PictureBox^  conquestpic;
	private: System::Windows::Forms::Panel^  castlewarspnl;
	private: System::Windows::Forms::Label^  castlewarslbl;
	private: System::Windows::Forms::PictureBox^  castlewarspic;
	private: System::Windows::Forms::Panel^  barbarianassulthealpnl;
	private: System::Windows::Forms::Panel^  bountyhunterroguepnl;
	private: System::Windows::Forms::Label^  bountyhunterroguelbl;
	private: System::Windows::Forms::PictureBox^  bountyhunterroguepic;
	private: System::Windows::Forms::Panel^  bountyhunterpnl;
	private: System::Windows::Forms::Label^  bountyhunterlbl;
	private: System::Windows::Forms::PictureBox^  bountyhunterpic;
	private: System::Windows::Forms::Panel^  dueltournamentpnl;
	private: System::Windows::Forms::Label^  dueltournamentlbl;
	private: System::Windows::Forms::PictureBox^  dueltournamentpic;
	private: System::Windows::Forms::GroupBox^  statsbox;
	private: System::Windows::Forms::Panel^  defencepnl;
	private: System::Windows::Forms::Panel^  strengthpnl;
	private: System::Windows::Forms::Panel^  attackpnl;
	private: System::Windows::Forms::PictureBox^  avatarfull;
	private: System::Windows::Forms::Label^  nllbl;
	private: System::Windows::Forms::Label^  ranklbl;
	private: System::Windows::Forms::Label^  xplbl;
	private: System::Windows::Forms::Label^  skilllbl;
	private: System::Windows::Forms::Label^  nlllbla;
	private: System::Windows::Forms::Label^  ranklbla;
	private: System::Windows::Forms::Label^  xplbla;
	private: System::Windows::Forms::Label^  skilllbla;
	private: System::Windows::Forms::PictureBox^  avatarface;
	private: System::Windows::Forms::Label^  newclbl;
	private: System::Windows::Forms::Label^  newc;
	private: System::Windows::Forms::Label^  f2pclbl;
	private: System::Windows::Forms::Label^  f2pc;
	private: System::Windows::Forms::Label^  p2pclbl;
	private: System::Windows::Forms::Label^  p2pc;
	private: System::Windows::Forms::Panel^  rangepnl;
	private: System::Windows::Forms::Panel^  totalpnl;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->strengthpic = (gcnew System::Windows::Forms::PictureBox());
			this->dungeoneeringlbl = (gcnew System::Windows::Forms::Label());
			this->dungeoneeringpic = (gcnew System::Windows::Forms::PictureBox());
			this->constructionlbl = (gcnew System::Windows::Forms::Label());
			this->constructionpic = (gcnew System::Windows::Forms::PictureBox());
			this->runecraftinglbl = (gcnew System::Windows::Forms::Label());
			this->runecraftingpic = (gcnew System::Windows::Forms::PictureBox());
			this->summoningpnl = (gcnew System::Windows::Forms::Panel());
			this->summoninglbl = (gcnew System::Windows::Forms::Label());
			this->summoningpic = (gcnew System::Windows::Forms::PictureBox());
			this->magicpic = (gcnew System::Windows::Forms::PictureBox());
			this->firemakingpnl = (gcnew System::Windows::Forms::Panel());
			this->firemakinglbl = (gcnew System::Windows::Forms::Label());
			this->firemakingpic = (gcnew System::Windows::Forms::PictureBox());
			this->prayerlbl = (gcnew System::Windows::Forms::Label());
			this->prayerpic = (gcnew System::Windows::Forms::PictureBox());
			this->farmingpnl = (gcnew System::Windows::Forms::Panel());
			this->farminglbl = (gcnew System::Windows::Forms::Label());
			this->farmingpic = (gcnew System::Windows::Forms::PictureBox());
			this->defencelbl = (gcnew System::Windows::Forms::Label());
			this->defencepic = (gcnew System::Windows::Forms::PictureBox());
			this->woodcuttingpnl = (gcnew System::Windows::Forms::Panel());
			this->woodcuttinglbl = (gcnew System::Windows::Forms::Label());
			this->woodcuttingpic = (gcnew System::Windows::Forms::PictureBox());
			this->strengthlbl = (gcnew System::Windows::Forms::Label());
			this->magiclbl = (gcnew System::Windows::Forms::Label());
			this->herblorelbl = (gcnew System::Windows::Forms::Label());
			this->hunterlbl = (gcnew System::Windows::Forms::Label());
			this->herblorepnl = (gcnew System::Windows::Forms::Panel());
			this->herblorepic = (gcnew System::Windows::Forms::PictureBox());
			this->agilitypnl = (gcnew System::Windows::Forms::Panel());
			this->agilitylbl = (gcnew System::Windows::Forms::Label());
			this->agilitypic = (gcnew System::Windows::Forms::PictureBox());
			this->thievingpnl = (gcnew System::Windows::Forms::Panel());
			this->thievinglbl = (gcnew System::Windows::Forms::Label());
			this->thievingpic = (gcnew System::Windows::Forms::PictureBox());
			this->hppnl = (gcnew System::Windows::Forms::Panel());
			this->hplbl = (gcnew System::Windows::Forms::Label());
			this->hppic = (gcnew System::Windows::Forms::PictureBox());
			this->miningpnl = (gcnew System::Windows::Forms::Panel());
			this->mininglbl = (gcnew System::Windows::Forms::Label());
			this->miningpic = (gcnew System::Windows::Forms::PictureBox());
			this->craftingpnl = (gcnew System::Windows::Forms::Panel());
			this->craftinglbl = (gcnew System::Windows::Forms::Label());
			this->craftingpic = (gcnew System::Windows::Forms::PictureBox());
			this->smithingpnl = (gcnew System::Windows::Forms::Panel());
			this->smithinglbl = (gcnew System::Windows::Forms::Label());
			this->smithingpic = (gcnew System::Windows::Forms::PictureBox());
			this->timezonetimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->fletchinglbl = (gcnew System::Windows::Forms::Label());
			this->fishingpnl = (gcnew System::Windows::Forms::Panel());
			this->fishinglbl = (gcnew System::Windows::Forms::Label());
			this->fishingpic = (gcnew System::Windows::Forms::PictureBox());
			this->fletchingpic = (gcnew System::Windows::Forms::PictureBox());
			this->slayerlbl = (gcnew System::Windows::Forms::Label());
			this->hunterpic = (gcnew System::Windows::Forms::PictureBox());
			this->slayerpic = (gcnew System::Windows::Forms::PictureBox());
			this->cookingpnl = (gcnew System::Windows::Forms::Panel());
			this->cookinglbl = (gcnew System::Windows::Forms::Label());
			this->cookingpic = (gcnew System::Windows::Forms::PictureBox());
			this->attacklbl = (gcnew System::Windows::Forms::Label());
			this->timezonecombo = (gcnew System::Windows::Forms::ComboBox());
			this->geshowbtn = (gcnew System::Windows::Forms::Button());
			this->itemsearchbtn = (gcnew System::Windows::Forms::Button());
			this->itemtxt = (gcnew System::Windows::Forms::TextBox());
			this->smallimage = (gcnew System::Windows::Forms::PictureBox());
			this->calcsbtn = (gcnew System::Windows::Forms::Button());
			this->settingtab = (gcnew System::Windows::Forms::TabPage());
			this->defaulttimezone = (gcnew System::Windows::Forms::ComboBox());
			this->defaulttimezonelbl = (gcnew System::Windows::Forms::Label());
			this->startupsrch = (gcnew System::Windows::Forms::CheckBox());
			this->checkforupdatesbtn = (gcnew System::Windows::Forms::Button());
			this->versionbtn = (gcnew System::Windows::Forms::Button());
			this->changelogbtn = (gcnew System::Windows::Forms::Button());
			this->saversnametxt = (gcnew System::Windows::Forms::TextBox());
			this->rsnamelbl = (gcnew System::Windows::Forms::Label());
			this->savesettingsbtn = (gcnew System::Windows::Forms::Button());
			this->truelevelscb = (gcnew System::Windows::Forms::CheckBox());
			this->userbrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->userstimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->largeimage = (gcnew System::Windows::Forms::PictureBox());
			this->rangelbl = (gcnew System::Windows::Forms::Label());
			this->rangepic = (gcnew System::Windows::Forms::PictureBox());
			this->totallbl = (gcnew System::Windows::Forms::Label());
			this->totalpic = (gcnew System::Windows::Forms::PictureBox());
			this->comparebtn = (gcnew System::Windows::Forms::Button());
			this->lookupbtn = (gcnew System::Windows::Forms::Button());
			this->unamelbl = (gcnew System::Windows::Forms::Label());
			this->usertxt = (gcnew System::Windows::Forms::TextBox());
			this->grandexchangetab = (gcnew System::Windows::Forms::TabPage());
			this->grandexchangelst = (gcnew System::Windows::Forms::ListView());
			this->namecol = (gcnew System::Windows::Forms::ColumnHeader());
			this->memberscol = (gcnew System::Windows::Forms::ColumnHeader());
			this->pricecol = (gcnew System::Windows::Forms::ColumnHeader());
			this->changecol = (gcnew System::Windows::Forms::ColumnHeader());
			this->searchpnl = (gcnew System::Windows::Forms::Panel());
			this->attackpic = (gcnew System::Windows::Forms::PictureBox());
			this->timezonetxt = (gcnew System::Windows::Forms::TextBox());
			this->calcstab = (gcnew System::Windows::Forms::TabPage());
			this->fletchingpnl = (gcnew System::Windows::Forms::Panel());
			this->runecraftingpnl = (gcnew System::Windows::Forms::Panel());
			this->magicpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassulthealpic = (gcnew System::Windows::Forms::PictureBox());
			this->fistofguthixpnl = (gcnew System::Windows::Forms::Panel());
			this->fistofguthixlbl = (gcnew System::Windows::Forms::Label());
			this->fistofguthixpic = (gcnew System::Windows::Forms::PictureBox());
			this->constructionpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultcollectpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultcollectlbl = (gcnew System::Windows::Forms::Label());
			this->barbarianassultcollectpic = (gcnew System::Windows::Forms::PictureBox());
			this->dungeoneeringpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultdefendpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultdefendlbl = (gcnew System::Windows::Forms::Label());
			this->barbarianassultdefendpic = (gcnew System::Windows::Forms::PictureBox());
			this->hunterpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultheallbl = (gcnew System::Windows::Forms::Label());
			this->slayerpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultattackpnl = (gcnew System::Windows::Forms::Panel());
			this->barbarianassultattacklbl = (gcnew System::Windows::Forms::Label());
			this->barbarianassultattackpic = (gcnew System::Windows::Forms::PictureBox());
			this->mobilisingarmiespnl = (gcnew System::Windows::Forms::Panel());
			this->mobilisingarmieslbl = (gcnew System::Windows::Forms::Label());
			this->mobilisingarmiespic = (gcnew System::Windows::Forms::PictureBox());
			this->cruciblepnl = (gcnew System::Windows::Forms::Panel());
			this->cruciblelbl = (gcnew System::Windows::Forms::Label());
			this->cruciblepic = (gcnew System::Windows::Forms::PictureBox());
			this->prayerpnl = (gcnew System::Windows::Forms::Panel());
			this->rstoolkittabs = (gcnew System::Windows::Forms::TabControl());
			this->hiscoretab = (gcnew System::Windows::Forms::TabPage());
			this->oldschoolcb = (gcnew System::Windows::Forms::CheckBox());
			this->activitiesbox = (gcnew System::Windows::Forms::GroupBox());
			this->aranklbl = (gcnew System::Windows::Forms::Label());
			this->scorelbl = (gcnew System::Windows::Forms::Label());
			this->activitylbl = (gcnew System::Windows::Forms::Label());
			this->aranklbla = (gcnew System::Windows::Forms::Label());
			this->scorelbla = (gcnew System::Windows::Forms::Label());
			this->activitylbla = (gcnew System::Windows::Forms::Label());
			this->dominiontowerpnl = (gcnew System::Windows::Forms::Panel());
			this->dominiontowerlbl = (gcnew System::Windows::Forms::Label());
			this->dominiontowerpic = (gcnew System::Windows::Forms::PictureBox());
			this->conquestpnl = (gcnew System::Windows::Forms::Panel());
			this->conquestlbl = (gcnew System::Windows::Forms::Label());
			this->conquestpic = (gcnew System::Windows::Forms::PictureBox());
			this->castlewarspnl = (gcnew System::Windows::Forms::Panel());
			this->castlewarslbl = (gcnew System::Windows::Forms::Label());
			this->castlewarspic = (gcnew System::Windows::Forms::PictureBox());
			this->barbarianassulthealpnl = (gcnew System::Windows::Forms::Panel());
			this->bountyhunterroguepnl = (gcnew System::Windows::Forms::Panel());
			this->bountyhunterroguelbl = (gcnew System::Windows::Forms::Label());
			this->bountyhunterroguepic = (gcnew System::Windows::Forms::PictureBox());
			this->bountyhunterpnl = (gcnew System::Windows::Forms::Panel());
			this->bountyhunterlbl = (gcnew System::Windows::Forms::Label());
			this->bountyhunterpic = (gcnew System::Windows::Forms::PictureBox());
			this->dueltournamentpnl = (gcnew System::Windows::Forms::Panel());
			this->dueltournamentlbl = (gcnew System::Windows::Forms::Label());
			this->dueltournamentpic = (gcnew System::Windows::Forms::PictureBox());
			this->statsbox = (gcnew System::Windows::Forms::GroupBox());
			this->defencepnl = (gcnew System::Windows::Forms::Panel());
			this->strengthpnl = (gcnew System::Windows::Forms::Panel());
			this->attackpnl = (gcnew System::Windows::Forms::Panel());
			this->avatarfull = (gcnew System::Windows::Forms::PictureBox());
			this->nllbl = (gcnew System::Windows::Forms::Label());
			this->ranklbl = (gcnew System::Windows::Forms::Label());
			this->xplbl = (gcnew System::Windows::Forms::Label());
			this->skilllbl = (gcnew System::Windows::Forms::Label());
			this->nlllbla = (gcnew System::Windows::Forms::Label());
			this->ranklbla = (gcnew System::Windows::Forms::Label());
			this->xplbla = (gcnew System::Windows::Forms::Label());
			this->skilllbla = (gcnew System::Windows::Forms::Label());
			this->avatarface = (gcnew System::Windows::Forms::PictureBox());
			this->newclbl = (gcnew System::Windows::Forms::Label());
			this->newc = (gcnew System::Windows::Forms::Label());
			this->f2pclbl = (gcnew System::Windows::Forms::Label());
			this->f2pc = (gcnew System::Windows::Forms::Label());
			this->p2pclbl = (gcnew System::Windows::Forms::Label());
			this->p2pc = (gcnew System::Windows::Forms::Label());
			this->rangepnl = (gcnew System::Windows::Forms::Panel());
			this->totalpnl = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->strengthpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dungeoneeringpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->constructionpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->runecraftingpic))->BeginInit();
			this->summoningpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->summoningpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->magicpic))->BeginInit();
			this->firemakingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->firemakingpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->prayerpic))->BeginInit();
			this->farmingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->farmingpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->defencepic))->BeginInit();
			this->woodcuttingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->woodcuttingpic))->BeginInit();
			this->herblorepnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->herblorepic))->BeginInit();
			this->agilitypnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->agilitypic))->BeginInit();
			this->thievingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->thievingpic))->BeginInit();
			this->hppnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->hppic))->BeginInit();
			this->miningpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->miningpic))->BeginInit();
			this->craftingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->craftingpic))->BeginInit();
			this->smithingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->smithingpic))->BeginInit();
			this->fishingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fishingpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fletchingpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->hunterpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->slayerpic))->BeginInit();
			this->cookingpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cookingpic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->smallimage))->BeginInit();
			this->settingtab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->largeimage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->rangepic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->totalpic))->BeginInit();
			this->grandexchangetab->SuspendLayout();
			this->searchpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->attackpic))->BeginInit();
			this->calcstab->SuspendLayout();
			this->fletchingpnl->SuspendLayout();
			this->runecraftingpnl->SuspendLayout();
			this->magicpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassulthealpic))->BeginInit();
			this->fistofguthixpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fistofguthixpic))->BeginInit();
			this->constructionpnl->SuspendLayout();
			this->barbarianassultcollectpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassultcollectpic))->BeginInit();
			this->dungeoneeringpnl->SuspendLayout();
			this->barbarianassultdefendpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassultdefendpic))->BeginInit();
			this->hunterpnl->SuspendLayout();
			this->slayerpnl->SuspendLayout();
			this->barbarianassultattackpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassultattackpic))->BeginInit();
			this->mobilisingarmiespnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mobilisingarmiespic))->BeginInit();
			this->cruciblepnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cruciblepic))->BeginInit();
			this->prayerpnl->SuspendLayout();
			this->rstoolkittabs->SuspendLayout();
			this->hiscoretab->SuspendLayout();
			this->activitiesbox->SuspendLayout();
			this->dominiontowerpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dominiontowerpic))->BeginInit();
			this->conquestpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->conquestpic))->BeginInit();
			this->castlewarspnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->castlewarspic))->BeginInit();
			this->barbarianassulthealpnl->SuspendLayout();
			this->bountyhunterroguepnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bountyhunterroguepic))->BeginInit();
			this->bountyhunterpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bountyhunterpic))->BeginInit();
			this->dueltournamentpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dueltournamentpic))->BeginInit();
			this->statsbox->SuspendLayout();
			this->defencepnl->SuspendLayout();
			this->strengthpnl->SuspendLayout();
			this->attackpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->avatarfull))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->avatarface))->BeginInit();
			this->rangepnl->SuspendLayout();
			this->totalpnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// strengthpic
			// 
			this->strengthpic->Location = System::Drawing::Point(4, 3);
			this->strengthpic->Name = L"strengthpic";
			this->strengthpic->Size = System::Drawing::Size(20, 20);
			this->strengthpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->strengthpic->TabIndex = 2;
			this->strengthpic->TabStop = false;
			// 
			// dungeoneeringlbl
			// 
			this->dungeoneeringlbl->AutoSize = true;
			this->dungeoneeringlbl->Location = System::Drawing::Point(33, 6);
			this->dungeoneeringlbl->Name = L"dungeoneeringlbl";
			this->dungeoneeringlbl->Size = System::Drawing::Size(27, 13);
			this->dungeoneeringlbl->TabIndex = 8;
			this->dungeoneeringlbl->Text = L"N/A";
			// 
			// dungeoneeringpic
			// 
			this->dungeoneeringpic->Location = System::Drawing::Point(4, 3);
			this->dungeoneeringpic->Name = L"dungeoneeringpic";
			this->dungeoneeringpic->Size = System::Drawing::Size(20, 20);
			this->dungeoneeringpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dungeoneeringpic->TabIndex = 15;
			this->dungeoneeringpic->TabStop = false;
			// 
			// constructionlbl
			// 
			this->constructionlbl->AutoSize = true;
			this->constructionlbl->Location = System::Drawing::Point(33, 6);
			this->constructionlbl->Name = L"constructionlbl";
			this->constructionlbl->Size = System::Drawing::Size(27, 13);
			this->constructionlbl->TabIndex = 8;
			this->constructionlbl->Text = L"N/A";
			// 
			// constructionpic
			// 
			this->constructionpic->Location = System::Drawing::Point(4, 3);
			this->constructionpic->Name = L"constructionpic";
			this->constructionpic->Size = System::Drawing::Size(20, 20);
			this->constructionpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->constructionpic->TabIndex = 6;
			this->constructionpic->TabStop = false;
			// 
			// runecraftinglbl
			// 
			this->runecraftinglbl->AutoSize = true;
			this->runecraftinglbl->Location = System::Drawing::Point(33, 6);
			this->runecraftinglbl->Name = L"runecraftinglbl";
			this->runecraftinglbl->Size = System::Drawing::Size(27, 13);
			this->runecraftinglbl->TabIndex = 8;
			this->runecraftinglbl->Text = L"N/A";
			// 
			// runecraftingpic
			// 
			this->runecraftingpic->Location = System::Drawing::Point(4, 3);
			this->runecraftingpic->Name = L"runecraftingpic";
			this->runecraftingpic->Size = System::Drawing::Size(20, 20);
			this->runecraftingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->runecraftingpic->TabIndex = 5;
			this->runecraftingpic->TabStop = false;
			// 
			// summoningpnl
			// 
			this->summoningpnl->Controls->Add(this->summoninglbl);
			this->summoningpnl->Controls->Add(this->summoningpic);
			this->summoningpnl->Location = System::Drawing::Point(150, 227);
			this->summoningpnl->Name = L"summoningpnl";
			this->summoningpnl->Size = System::Drawing::Size(70, 25);
			this->summoningpnl->TabIndex = 1;
			// 
			// summoninglbl
			// 
			this->summoninglbl->AutoSize = true;
			this->summoninglbl->Location = System::Drawing::Point(33, 6);
			this->summoninglbl->Name = L"summoninglbl";
			this->summoninglbl->Size = System::Drawing::Size(27, 13);
			this->summoninglbl->TabIndex = 24;
			this->summoninglbl->Text = L"N/A";
			// 
			// summoningpic
			// 
			this->summoningpic->Location = System::Drawing::Point(4, 3);
			this->summoningpic->Name = L"summoningpic";
			this->summoningpic->Size = System::Drawing::Size(20, 20);
			this->summoningpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->summoningpic->TabIndex = 23;
			this->summoningpic->TabStop = false;
			// 
			// magicpic
			// 
			this->magicpic->Location = System::Drawing::Point(4, 3);
			this->magicpic->Name = L"magicpic";
			this->magicpic->Size = System::Drawing::Size(20, 20);
			this->magicpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->magicpic->TabIndex = 4;
			this->magicpic->TabStop = false;
			// 
			// firemakingpnl
			// 
			this->firemakingpnl->Controls->Add(this->firemakinglbl);
			this->firemakingpnl->Controls->Add(this->firemakingpic);
			this->firemakingpnl->Location = System::Drawing::Point(150, 149);
			this->firemakingpnl->Name = L"firemakingpnl";
			this->firemakingpnl->Size = System::Drawing::Size(70, 25);
			this->firemakingpnl->TabIndex = 1;
			// 
			// firemakinglbl
			// 
			this->firemakinglbl->AutoSize = true;
			this->firemakinglbl->Location = System::Drawing::Point(33, 6);
			this->firemakinglbl->Name = L"firemakinglbl";
			this->firemakinglbl->Size = System::Drawing::Size(27, 13);
			this->firemakinglbl->TabIndex = 8;
			this->firemakinglbl->Text = L"N/A";
			// 
			// firemakingpic
			// 
			this->firemakingpic->Location = System::Drawing::Point(4, 3);
			this->firemakingpic->Name = L"firemakingpic";
			this->firemakingpic->Size = System::Drawing::Size(20, 20);
			this->firemakingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->firemakingpic->TabIndex = 20;
			this->firemakingpic->TabStop = false;
			// 
			// prayerlbl
			// 
			this->prayerlbl->AutoSize = true;
			this->prayerlbl->Location = System::Drawing::Point(33, 6);
			this->prayerlbl->Name = L"prayerlbl";
			this->prayerlbl->Size = System::Drawing::Size(27, 13);
			this->prayerlbl->TabIndex = 8;
			this->prayerlbl->Text = L"N/A";
			// 
			// prayerpic
			// 
			this->prayerpic->Location = System::Drawing::Point(4, 3);
			this->prayerpic->Name = L"prayerpic";
			this->prayerpic->Size = System::Drawing::Size(20, 20);
			this->prayerpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->prayerpic->TabIndex = 3;
			this->prayerpic->TabStop = false;
			// 
			// farmingpnl
			// 
			this->farmingpnl->Controls->Add(this->farminglbl);
			this->farmingpnl->Controls->Add(this->farmingpic);
			this->farmingpnl->Location = System::Drawing::Point(150, 201);
			this->farmingpnl->Name = L"farmingpnl";
			this->farmingpnl->Size = System::Drawing::Size(70, 25);
			this->farmingpnl->TabIndex = 1;
			// 
			// farminglbl
			// 
			this->farminglbl->AutoSize = true;
			this->farminglbl->Location = System::Drawing::Point(33, 6);
			this->farminglbl->Name = L"farminglbl";
			this->farminglbl->Size = System::Drawing::Size(27, 13);
			this->farminglbl->TabIndex = 23;
			this->farminglbl->Text = L"N/A";
			// 
			// farmingpic
			// 
			this->farmingpic->Location = System::Drawing::Point(4, 3);
			this->farmingpic->Name = L"farmingpic";
			this->farmingpic->Size = System::Drawing::Size(20, 20);
			this->farmingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->farmingpic->TabIndex = 22;
			this->farmingpic->TabStop = false;
			// 
			// defencelbl
			// 
			this->defencelbl->AutoSize = true;
			this->defencelbl->Location = System::Drawing::Point(33, 6);
			this->defencelbl->Name = L"defencelbl";
			this->defencelbl->Size = System::Drawing::Size(27, 13);
			this->defencelbl->TabIndex = 8;
			this->defencelbl->Text = L"N/A";
			// 
			// defencepic
			// 
			this->defencepic->Location = System::Drawing::Point(4, 3);
			this->defencepic->Name = L"defencepic";
			this->defencepic->Size = System::Drawing::Size(20, 20);
			this->defencepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->defencepic->TabIndex = 1;
			this->defencepic->TabStop = false;
			// 
			// woodcuttingpnl
			// 
			this->woodcuttingpnl->Controls->Add(this->woodcuttinglbl);
			this->woodcuttingpnl->Controls->Add(this->woodcuttingpic);
			this->woodcuttingpnl->Location = System::Drawing::Point(150, 175);
			this->woodcuttingpnl->Name = L"woodcuttingpnl";
			this->woodcuttingpnl->Size = System::Drawing::Size(70, 25);
			this->woodcuttingpnl->TabIndex = 1;
			// 
			// woodcuttinglbl
			// 
			this->woodcuttinglbl->AutoSize = true;
			this->woodcuttinglbl->Location = System::Drawing::Point(33, 6);
			this->woodcuttinglbl->Name = L"woodcuttinglbl";
			this->woodcuttinglbl->Size = System::Drawing::Size(27, 13);
			this->woodcuttinglbl->TabIndex = 22;
			this->woodcuttinglbl->Text = L"N/A";
			// 
			// woodcuttingpic
			// 
			this->woodcuttingpic->Location = System::Drawing::Point(4, 3);
			this->woodcuttingpic->Name = L"woodcuttingpic";
			this->woodcuttingpic->Size = System::Drawing::Size(20, 20);
			this->woodcuttingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->woodcuttingpic->TabIndex = 21;
			this->woodcuttingpic->TabStop = false;
			// 
			// strengthlbl
			// 
			this->strengthlbl->AutoSize = true;
			this->strengthlbl->Location = System::Drawing::Point(33, 6);
			this->strengthlbl->Name = L"strengthlbl";
			this->strengthlbl->Size = System::Drawing::Size(27, 13);
			this->strengthlbl->TabIndex = 3;
			this->strengthlbl->Text = L"N/A";
			// 
			// magiclbl
			// 
			this->magiclbl->AutoSize = true;
			this->magiclbl->Location = System::Drawing::Point(33, 6);
			this->magiclbl->Name = L"magiclbl";
			this->magiclbl->Size = System::Drawing::Size(27, 13);
			this->magiclbl->TabIndex = 8;
			this->magiclbl->Text = L"N/A";
			// 
			// herblorelbl
			// 
			this->herblorelbl->AutoSize = true;
			this->herblorelbl->Location = System::Drawing::Point(33, 6);
			this->herblorelbl->Name = L"herblorelbl";
			this->herblorelbl->Size = System::Drawing::Size(27, 13);
			this->herblorelbl->TabIndex = 8;
			this->herblorelbl->Text = L"N/A";
			// 
			// hunterlbl
			// 
			this->hunterlbl->AutoSize = true;
			this->hunterlbl->Location = System::Drawing::Point(33, 6);
			this->hunterlbl->Name = L"hunterlbl";
			this->hunterlbl->Size = System::Drawing::Size(27, 13);
			this->hunterlbl->TabIndex = 8;
			this->hunterlbl->Text = L"N/A";
			// 
			// herblorepnl
			// 
			this->herblorepnl->Controls->Add(this->herblorelbl);
			this->herblorepnl->Controls->Add(this->herblorepic);
			this->herblorepnl->Location = System::Drawing::Point(78, 97);
			this->herblorepnl->Name = L"herblorepnl";
			this->herblorepnl->Size = System::Drawing::Size(70, 25);
			this->herblorepnl->TabIndex = 1;
			// 
			// herblorepic
			// 
			this->herblorepic->Location = System::Drawing::Point(4, 3);
			this->herblorepic->Name = L"herblorepic";
			this->herblorepic->Size = System::Drawing::Size(20, 20);
			this->herblorepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->herblorepic->TabIndex = 9;
			this->herblorepic->TabStop = false;
			// 
			// agilitypnl
			// 
			this->agilitypnl->Controls->Add(this->agilitylbl);
			this->agilitypnl->Controls->Add(this->agilitypic);
			this->agilitypnl->Location = System::Drawing::Point(78, 71);
			this->agilitypnl->Name = L"agilitypnl";
			this->agilitypnl->Size = System::Drawing::Size(70, 25);
			this->agilitypnl->TabIndex = 1;
			// 
			// agilitylbl
			// 
			this->agilitylbl->AutoSize = true;
			this->agilitylbl->Location = System::Drawing::Point(33, 6);
			this->agilitylbl->Name = L"agilitylbl";
			this->agilitylbl->Size = System::Drawing::Size(27, 13);
			this->agilitylbl->TabIndex = 8;
			this->agilitylbl->Text = L"N/A";
			// 
			// agilitypic
			// 
			this->agilitypic->Location = System::Drawing::Point(4, 3);
			this->agilitypic->Name = L"agilitypic";
			this->agilitypic->Size = System::Drawing::Size(20, 20);
			this->agilitypic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->agilitypic->TabIndex = 8;
			this->agilitypic->TabStop = false;
			// 
			// thievingpnl
			// 
			this->thievingpnl->Controls->Add(this->thievinglbl);
			this->thievingpnl->Controls->Add(this->thievingpic);
			this->thievingpnl->Location = System::Drawing::Point(78, 123);
			this->thievingpnl->Name = L"thievingpnl";
			this->thievingpnl->Size = System::Drawing::Size(70, 25);
			this->thievingpnl->TabIndex = 1;
			// 
			// thievinglbl
			// 
			this->thievinglbl->AutoSize = true;
			this->thievinglbl->Location = System::Drawing::Point(33, 6);
			this->thievinglbl->Name = L"thievinglbl";
			this->thievinglbl->Size = System::Drawing::Size(27, 13);
			this->thievinglbl->TabIndex = 8;
			this->thievinglbl->Text = L"N/A";
			// 
			// thievingpic
			// 
			this->thievingpic->Location = System::Drawing::Point(4, 3);
			this->thievingpic->Name = L"thievingpic";
			this->thievingpic->Size = System::Drawing::Size(20, 20);
			this->thievingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->thievingpic->TabIndex = 10;
			this->thievingpic->TabStop = false;
			// 
			// hppnl
			// 
			this->hppnl->Controls->Add(this->hplbl);
			this->hppnl->Controls->Add(this->hppic);
			this->hppnl->Location = System::Drawing::Point(78, 45);
			this->hppnl->Name = L"hppnl";
			this->hppnl->Size = System::Drawing::Size(70, 25);
			this->hppnl->TabIndex = 5;
			// 
			// hplbl
			// 
			this->hplbl->AutoSize = true;
			this->hplbl->Location = System::Drawing::Point(33, 6);
			this->hplbl->Name = L"hplbl";
			this->hplbl->Size = System::Drawing::Size(27, 13);
			this->hplbl->TabIndex = 8;
			this->hplbl->Text = L"N/A";
			// 
			// hppic
			// 
			this->hppic->Location = System::Drawing::Point(4, 3);
			this->hppic->Name = L"hppic";
			this->hppic->Size = System::Drawing::Size(20, 20);
			this->hppic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hppic->TabIndex = 7;
			this->hppic->TabStop = false;
			// 
			// miningpnl
			// 
			this->miningpnl->Controls->Add(this->mininglbl);
			this->miningpnl->Controls->Add(this->miningpic);
			this->miningpnl->Location = System::Drawing::Point(150, 45);
			this->miningpnl->Name = L"miningpnl";
			this->miningpnl->Size = System::Drawing::Size(70, 25);
			this->miningpnl->TabIndex = 1;
			// 
			// mininglbl
			// 
			this->mininglbl->AutoSize = true;
			this->mininglbl->Location = System::Drawing::Point(33, 6);
			this->mininglbl->Name = L"mininglbl";
			this->mininglbl->Size = System::Drawing::Size(27, 13);
			this->mininglbl->TabIndex = 17;
			this->mininglbl->Text = L"N/A";
			// 
			// miningpic
			// 
			this->miningpic->Location = System::Drawing::Point(4, 3);
			this->miningpic->Name = L"miningpic";
			this->miningpic->Size = System::Drawing::Size(20, 20);
			this->miningpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->miningpic->TabIndex = 16;
			this->miningpic->TabStop = false;
			// 
			// craftingpnl
			// 
			this->craftingpnl->Controls->Add(this->craftinglbl);
			this->craftingpnl->Controls->Add(this->craftingpic);
			this->craftingpnl->Location = System::Drawing::Point(78, 149);
			this->craftingpnl->Name = L"craftingpnl";
			this->craftingpnl->Size = System::Drawing::Size(70, 25);
			this->craftingpnl->TabIndex = 1;
			// 
			// craftinglbl
			// 
			this->craftinglbl->AutoSize = true;
			this->craftinglbl->Location = System::Drawing::Point(33, 6);
			this->craftinglbl->Name = L"craftinglbl";
			this->craftinglbl->Size = System::Drawing::Size(27, 13);
			this->craftinglbl->TabIndex = 8;
			this->craftinglbl->Text = L"N/A";
			// 
			// craftingpic
			// 
			this->craftingpic->Location = System::Drawing::Point(4, 3);
			this->craftingpic->Name = L"craftingpic";
			this->craftingpic->Size = System::Drawing::Size(20, 20);
			this->craftingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->craftingpic->TabIndex = 11;
			this->craftingpic->TabStop = false;
			// 
			// smithingpnl
			// 
			this->smithingpnl->Controls->Add(this->smithinglbl);
			this->smithingpnl->Controls->Add(this->smithingpic);
			this->smithingpnl->Location = System::Drawing::Point(150, 71);
			this->smithingpnl->Name = L"smithingpnl";
			this->smithingpnl->Size = System::Drawing::Size(70, 25);
			this->smithingpnl->TabIndex = 1;
			// 
			// smithinglbl
			// 
			this->smithinglbl->AutoSize = true;
			this->smithinglbl->Location = System::Drawing::Point(33, 6);
			this->smithinglbl->Name = L"smithinglbl";
			this->smithinglbl->Size = System::Drawing::Size(27, 13);
			this->smithinglbl->TabIndex = 8;
			this->smithinglbl->Text = L"N/A";
			// 
			// smithingpic
			// 
			this->smithingpic->Location = System::Drawing::Point(4, 3);
			this->smithingpic->Name = L"smithingpic";
			this->smithingpic->Size = System::Drawing::Size(20, 20);
			this->smithingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->smithingpic->TabIndex = 17;
			this->smithingpic->TabStop = false;
			// 
			// timezonetimer
			// 
			this->timezonetimer->Enabled = true;
			this->timezonetimer->Interval = 10;
			this->timezonetimer->Tick += gcnew System::EventHandler(this, &Form1::timezonetimer_Tick);
			// 
			// fletchinglbl
			// 
			this->fletchinglbl->AutoSize = true;
			this->fletchinglbl->Location = System::Drawing::Point(33, 6);
			this->fletchinglbl->Name = L"fletchinglbl";
			this->fletchinglbl->Size = System::Drawing::Size(27, 13);
			this->fletchinglbl->TabIndex = 13;
			this->fletchinglbl->Text = L"N/A";
			// 
			// fishingpnl
			// 
			this->fishingpnl->Controls->Add(this->fishinglbl);
			this->fishingpnl->Controls->Add(this->fishingpic);
			this->fishingpnl->Location = System::Drawing::Point(150, 97);
			this->fishingpnl->Name = L"fishingpnl";
			this->fishingpnl->Size = System::Drawing::Size(70, 25);
			this->fishingpnl->TabIndex = 1;
			// 
			// fishinglbl
			// 
			this->fishinglbl->AutoSize = true;
			this->fishinglbl->Location = System::Drawing::Point(33, 6);
			this->fishinglbl->Name = L"fishinglbl";
			this->fishinglbl->Size = System::Drawing::Size(27, 13);
			this->fishinglbl->TabIndex = 8;
			this->fishinglbl->Text = L"N/A";
			// 
			// fishingpic
			// 
			this->fishingpic->Location = System::Drawing::Point(4, 3);
			this->fishingpic->Name = L"fishingpic";
			this->fishingpic->Size = System::Drawing::Size(20, 20);
			this->fishingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->fishingpic->TabIndex = 18;
			this->fishingpic->TabStop = false;
			// 
			// fletchingpic
			// 
			this->fletchingpic->Location = System::Drawing::Point(4, 3);
			this->fletchingpic->Name = L"fletchingpic";
			this->fletchingpic->Size = System::Drawing::Size(20, 20);
			this->fletchingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->fletchingpic->TabIndex = 12;
			this->fletchingpic->TabStop = false;
			// 
			// slayerlbl
			// 
			this->slayerlbl->AutoSize = true;
			this->slayerlbl->Location = System::Drawing::Point(33, 6);
			this->slayerlbl->Name = L"slayerlbl";
			this->slayerlbl->Size = System::Drawing::Size(27, 13);
			this->slayerlbl->TabIndex = 8;
			this->slayerlbl->Text = L"N/A";
			// 
			// hunterpic
			// 
			this->hunterpic->Location = System::Drawing::Point(4, 3);
			this->hunterpic->Name = L"hunterpic";
			this->hunterpic->Size = System::Drawing::Size(20, 20);
			this->hunterpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->hunterpic->TabIndex = 14;
			this->hunterpic->TabStop = false;
			// 
			// slayerpic
			// 
			this->slayerpic->Location = System::Drawing::Point(4, 3);
			this->slayerpic->Name = L"slayerpic";
			this->slayerpic->Size = System::Drawing::Size(20, 20);
			this->slayerpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->slayerpic->TabIndex = 13;
			this->slayerpic->TabStop = false;
			// 
			// cookingpnl
			// 
			this->cookingpnl->Controls->Add(this->cookinglbl);
			this->cookingpnl->Controls->Add(this->cookingpic);
			this->cookingpnl->Location = System::Drawing::Point(150, 123);
			this->cookingpnl->Name = L"cookingpnl";
			this->cookingpnl->Size = System::Drawing::Size(70, 25);
			this->cookingpnl->TabIndex = 1;
			// 
			// cookinglbl
			// 
			this->cookinglbl->AutoSize = true;
			this->cookinglbl->Location = System::Drawing::Point(33, 6);
			this->cookinglbl->Name = L"cookinglbl";
			this->cookinglbl->Size = System::Drawing::Size(27, 13);
			this->cookinglbl->TabIndex = 8;
			this->cookinglbl->Text = L"N/A";
			// 
			// cookingpic
			// 
			this->cookingpic->Location = System::Drawing::Point(4, 3);
			this->cookingpic->Name = L"cookingpic";
			this->cookingpic->Size = System::Drawing::Size(20, 20);
			this->cookingpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->cookingpic->TabIndex = 19;
			this->cookingpic->TabStop = false;
			// 
			// attacklbl
			// 
			this->attacklbl->AutoSize = true;
			this->attacklbl->Location = System::Drawing::Point(33, 6);
			this->attacklbl->Name = L"attacklbl";
			this->attacklbl->Size = System::Drawing::Size(27, 13);
			this->attacklbl->TabIndex = 2;
			this->attacklbl->Text = L"N/A";
			// 
			// timezonecombo
			// 
			this->timezonecombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->timezonecombo->FormattingEnabled = true;
			this->timezonecombo->Items->AddRange(gcnew cli::array< System::Object^  >(73) {L"-12:00 Dateline Standard Time", L"-11:00 Samoa Standard Time", 
				L"-10:00 Hawaiian Standard Time", L"-10:00 Alaskan Standard Time", L"-08:00 Pacific Standard Time", L"-07:00 Mexican Standard Time", 
				L"-07:00 Mountain Standard Time", L"-06:00 Central Standard Time", L"-06:00 Mexico Standard Time", L"-06:00 Canada Central Standard Time", 
				L"-06:00 Central America Standard Time", L"-05:00 Eastern Standard Time", L"-05:00 SA Pacific Standard Time", L"-04:00 Atlantic Standard Time", 
				L"-04:00 SA Western Standard Time", L"-04:00 Pacific SA Standard Time", L"-03:00 Newfoundland Standard Time", L"-03:00 SA Eastern Standard Time", 
				L"-03:00 East South America Standard Time", L"-03:00 Greenland Standard Time", L"-02:00 Mid-Atlantic Standard Time", L"-01:00 Azores Standard Time", 
				L"-01:00 Cape Verde Standard Time", L"00:00 Universal Coordinated Time", L"00:00 Greenwich Mean Time", L"+01:00 Romance Standard Time", 
				L"+01:00 West Central Africa Standard Time", L"+01:00 Central European Standard Time", L"+01:00 Central Europe Standard Time", 
				L"+01:00 West Europe Standard Time", L"+02:00 Egypt Standard Time", L"+02:00 South Africa Standard Time", L"+02:00 Israel Standard Time", 
				L"+02:00 East Europe Standard Time", L"+02:00 FLE Standard Time", L"+02:00 GTB Standard Time", L"+03:00 Arab Standard Time", 
				L"+03:00 East Africa Standard Time", L"+03:00 Arabic Standard Time", L"+03:00 Russian Standard Time", L"+03:30 Iran Standard Time", 
				L"+04:00 Arabian Standard Time", L"+04:00 Caucasus Standard Time", L"+04:00 Afghanistan Standard Time", L"+05:00 West Asia Standard Time", 
				L"+05:00 Ekaterinburg Standard Time", L"+05:30 India Standard Time", L"+05:45 Nepal Standard Time", L"+06:00 Central Asia Standard Time", 
				L"+06:00 Sri Lanka Standard Time", L"+06:00 North Central Asia Standard Time", L"+06:30 Myanmar Standard Time", L"+07:00 SE Asia Standard Time", 
				L"+07:00 North Asia Standard Time", L"+08:00 China Standard Time", L"+08:00 West Australia Standard Time", L"+08:00 Singapore Standard Time", 
				L"+08:00 Taipei Standard Time", L"+08:00 North Asia East Standard Time", L"+09:00 Tokyo Standard Time", L"+09:00 Korea Standard Time", 
				L"+09:00 Yakutsk Standard Time", L"+09:30 AUS Central Standard Time", L"+09:30 Central Australia Standard Time", L"+10:00 AUS Eastern Standard Time", 
				L"+10:00 East Australia Standard Time", L"+10:00 West Pacific Standard Time", L"+10:00 Tasmania Standard Time", L"+10:00 Vladivostok Standard Time", 
				L"+11:00 Central Pacific Standard Time", L"+12:00 Fiji Standard Time", L"+12:00 New Zealand Standard Time", L"+13:00 Tonga Standard Time"});
			this->timezonecombo->Location = System::Drawing::Point(70, 26);
			this->timezonecombo->Name = L"timezonecombo";
			this->timezonecombo->Size = System::Drawing::Size(282, 21);
			this->timezonecombo->TabIndex = 91;
			// 
			// geshowbtn
			// 
			this->geshowbtn->Location = System::Drawing::Point(226, 76);
			this->geshowbtn->Name = L"geshowbtn";
			this->geshowbtn->Size = System::Drawing::Size(80, 23);
			this->geshowbtn->TabIndex = 4;
			this->geshowbtn->Text = L"View on G.E.";
			this->geshowbtn->UseVisualStyleBackColor = true;
			this->geshowbtn->Visible = false;
			// 
			// itemsearchbtn
			// 
			this->itemsearchbtn->Location = System::Drawing::Point(181, 35);
			this->itemsearchbtn->Name = L"itemsearchbtn";
			this->itemsearchbtn->Size = System::Drawing::Size(75, 23);
			this->itemsearchbtn->TabIndex = 3;
			this->itemsearchbtn->Text = L"Search";
			this->itemsearchbtn->UseVisualStyleBackColor = true;
			// 
			// itemtxt
			// 
			this->itemtxt->Location = System::Drawing::Point(3, 37);
			this->itemtxt->Name = L"itemtxt";
			this->itemtxt->Size = System::Drawing::Size(172, 20);
			this->itemtxt->TabIndex = 2;
			// 
			// smallimage
			// 
			this->smallimage->Location = System::Drawing::Point(274, 3);
			this->smallimage->Name = L"smallimage";
			this->smallimage->Size = System::Drawing::Size(32, 32);
			this->smallimage->TabIndex = 1;
			this->smallimage->TabStop = false;
			// 
			// calcsbtn
			// 
			this->calcsbtn->Location = System::Drawing::Point(3, 475);
			this->calcsbtn->Name = L"calcsbtn";
			this->calcsbtn->Size = System::Drawing::Size(75, 23);
			this->calcsbtn->TabIndex = 0;
			this->calcsbtn->Text = L"Calculators";
			this->calcsbtn->UseVisualStyleBackColor = true;
			// 
			// settingtab
			// 
			this->settingtab->Controls->Add(this->defaulttimezone);
			this->settingtab->Controls->Add(this->defaulttimezonelbl);
			this->settingtab->Controls->Add(this->startupsrch);
			this->settingtab->Controls->Add(this->checkforupdatesbtn);
			this->settingtab->Controls->Add(this->versionbtn);
			this->settingtab->Controls->Add(this->changelogbtn);
			this->settingtab->Controls->Add(this->saversnametxt);
			this->settingtab->Controls->Add(this->rsnamelbl);
			this->settingtab->Controls->Add(this->savesettingsbtn);
			this->settingtab->Controls->Add(this->truelevelscb);
			this->settingtab->Location = System::Drawing::Point(4, 22);
			this->settingtab->Name = L"settingtab";
			this->settingtab->Padding = System::Windows::Forms::Padding(3);
			this->settingtab->Size = System::Drawing::Size(421, 504);
			this->settingtab->TabIndex = 2;
			this->settingtab->Text = L"Settings";
			this->settingtab->UseVisualStyleBackColor = true;
			// 
			// defaulttimezone
			// 
			this->defaulttimezone->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->defaulttimezone->FormattingEnabled = true;
			this->defaulttimezone->Items->AddRange(gcnew cli::array< System::Object^  >(73) {L"-12:00 Dateline Standard Time", L"-11:00 Samoa Standard Time", 
				L"-10:00 Hawaiian Standard Time", L"-10:00 Alaskan Standard Time", L"-08:00 Pacific Standard Time", L"-07:00 Mexican Standard Time", 
				L"-07:00 Mountain Standard Time", L"-06:00 Central Standard Time", L"-06:00 Mexico Standard Time", L"-06:00 Canada Central Standard Time", 
				L"-06:00 Central America Standard Time", L"-05:00 Eastern Standard Time", L"-05:00 SA Pacific Standard Time", L"-04:00 Atlantic Standard Time", 
				L"-04:00 SA Western Standard Time", L"-04:00 Pacific SA Standard Time", L"-03:00 Newfoundland Standard Time", L"-03:00 SA Eastern Standard Time", 
				L"-03:00 East South America Standard Time", L"-03:00 Greenland Standard Time", L"-02:00 Mid-Atlantic Standard Time", L"-01:00 Azores Standard Time", 
				L"-01:00 Cape Verde Standard Time", L"00:00 Universal Coordinated Time", L"00:00 Greenwich Mean Time", L"+01:00 Romance Standard Time", 
				L"+01:00 West Central Africa Standard Time", L"+01:00 Central European Standard Time", L"+01:00 Central Europe Standard Time", 
				L"+01:00 West Europe Standard Time", L"+02:00 Egypt Standard Time", L"+02:00 South Africa Standard Time", L"+02:00 Israel Standard Time", 
				L"+02:00 East Europe Standard Time", L"+02:00 FLE Standard Time", L"+02:00 GTB Standard Time", L"+03:00 Arab Standard Time", 
				L"+03:00 East Africa Standard Time", L"+03:00 Arabic Standard Time", L"+03:00 Russian Standard Time", L"+03:30 Iran Standard Time", 
				L"+04:00 Arabian Standard Time", L"+04:00 Caucasus Standard Time", L"+04:00 Afghanistan Standard Time", L"+05:00 West Asia Standard Time", 
				L"+05:00 Ekaterinburg Standard Time", L"+05:30 India Standard Time", L"+05:45 Nepal Standard Time", L"+06:00 Central Asia Standard Time", 
				L"+06:00 Sri Lanka Standard Time", L"+06:00 North Central Asia Standard Time", L"+06:30 Myanmar Standard Time", L"+07:00 SE Asia Standard Time", 
				L"+07:00 North Asia Standard Time", L"+08:00 China Standard Time", L"+08:00 West Australia Standard Time", L"+08:00 Singapore Standard Time", 
				L"+08:00 Taipei Standard Time", L"+08:00 North Asia East Standard Time", L"+09:00 Tokyo Standard Time", L"+09:00 Korea Standard Time", 
				L"+09:00 Yakutsk Standard Time", L"+09:30 AUS Central Standard Time", L"+09:30 Central Australia Standard Time", L"+10:00 AUS Eastern Standard Time", 
				L"+10:00 East Australia Standard Time", L"+10:00 West Pacific Standard Time", L"+10:00 Tasmania Standard Time", L"+10:00 Vladivostok Standard Time", 
				L"+11:00 Central Pacific Standard Time", L"+12:00 Fiji Standard Time", L"+12:00 New Zealand Standard Time", L"+13:00 Tonga Standard Time"});
			this->defaulttimezone->Location = System::Drawing::Point(110, 83);
			this->defaulttimezone->Name = L"defaulttimezone";
			this->defaulttimezone->Size = System::Drawing::Size(246, 21);
			this->defaulttimezone->TabIndex = 9;
			// 
			// defaulttimezonelbl
			// 
			this->defaulttimezonelbl->AutoSize = true;
			this->defaulttimezonelbl->Location = System::Drawing::Point(8, 86);
			this->defaulttimezonelbl->Name = L"defaulttimezonelbl";
			this->defaulttimezonelbl->Size = System::Drawing::Size(95, 13);
			this->defaulttimezonelbl->TabIndex = 8;
			this->defaulttimezonelbl->Text = L"Default Time Zone";
			// 
			// startupsrch
			// 
			this->startupsrch->AutoSize = true;
			this->startupsrch->Location = System::Drawing::Point(8, 57);
			this->startupsrch->Name = L"startupsrch";
			this->startupsrch->Size = System::Drawing::Size(143, 17);
			this->startupsrch->TabIndex = 7;
			this->startupsrch->Text = L"Search Name on Startup";
			this->startupsrch->UseVisualStyleBackColor = true;
			// 
			// checkforupdatesbtn
			// 
			this->checkforupdatesbtn->Location = System::Drawing::Point(0, 481);
			this->checkforupdatesbtn->Name = L"checkforupdatesbtn";
			this->checkforupdatesbtn->Size = System::Drawing::Size(110, 23);
			this->checkforupdatesbtn->TabIndex = 6;
			this->checkforupdatesbtn->Text = L"Check For Updates";
			this->checkforupdatesbtn->UseVisualStyleBackColor = true;
			// 
			// versionbtn
			// 
			this->versionbtn->Location = System::Drawing::Point(197, 481);
			this->versionbtn->Name = L"versionbtn";
			this->versionbtn->Size = System::Drawing::Size(75, 23);
			this->versionbtn->TabIndex = 5;
			this->versionbtn->Text = L"Version";
			this->versionbtn->UseVisualStyleBackColor = true;
			// 
			// changelogbtn
			// 
			this->changelogbtn->Location = System::Drawing::Point(116, 481);
			this->changelogbtn->Name = L"changelogbtn";
			this->changelogbtn->Size = System::Drawing::Size(75, 23);
			this->changelogbtn->TabIndex = 4;
			this->changelogbtn->Text = L"Changelog";
			this->changelogbtn->UseVisualStyleBackColor = true;
			// 
			// saversnametxt
			// 
			this->saversnametxt->Location = System::Drawing::Point(110, 6);
			this->saversnametxt->Name = L"saversnametxt";
			this->saversnametxt->Size = System::Drawing::Size(100, 20);
			this->saversnametxt->TabIndex = 3;
			// 
			// rsnamelbl
			// 
			this->rsnamelbl->AutoSize = true;
			this->rsnamelbl->Location = System::Drawing::Point(8, 9);
			this->rsnamelbl->Name = L"rsnamelbl";
			this->rsnamelbl->Size = System::Drawing::Size(96, 13);
			this->rsnamelbl->TabIndex = 2;
			this->rsnamelbl->Text = L"Runescape Name:";
			// 
			// savesettingsbtn
			// 
			this->savesettingsbtn->Location = System::Drawing::Point(346, 481);
			this->savesettingsbtn->Name = L"savesettingsbtn";
			this->savesettingsbtn->Size = System::Drawing::Size(75, 23);
			this->savesettingsbtn->TabIndex = 1;
			this->savesettingsbtn->Text = L"Save\r\n";
			this->savesettingsbtn->UseVisualStyleBackColor = true;
			// 
			// truelevelscb
			// 
			this->truelevelscb->AutoSize = true;
			this->truelevelscb->Location = System::Drawing::Point(8, 34);
			this->truelevelscb->Name = L"truelevelscb";
			this->truelevelscb->Size = System::Drawing::Size(96, 17);
			this->truelevelscb->TabIndex = 0;
			this->truelevelscb->Text = L"Use true levels";
			this->truelevelscb->UseVisualStyleBackColor = true;
			// 
			// userbrowser1
			// 
			this->userbrowser1->Location = System::Drawing::Point(270, 351);
			this->userbrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->userbrowser1->Name = L"userbrowser1";
			this->userbrowser1->ScriptErrorsSuppressed = true;
			this->userbrowser1->Size = System::Drawing::Size(250, 250);
			this->userbrowser1->TabIndex = 88;
			this->userbrowser1->Url = (gcnew System::Uri(L"https://dl.dropbox.com/u/24313649/Google Drive/Zomfshark/totals/onlinetotal.html", 
				System::UriKind::Absolute));
			this->userbrowser1->Visible = false;
			// 
			// userstimer
			// 
			this->userstimer->Enabled = true;
			// 
			// largeimage
			// 
			this->largeimage->Location = System::Drawing::Point(312, 3);
			this->largeimage->Name = L"largeimage";
			this->largeimage->Size = System::Drawing::Size(96, 96);
			this->largeimage->TabIndex = 0;
			this->largeimage->TabStop = false;
			// 
			// rangelbl
			// 
			this->rangelbl->AutoSize = true;
			this->rangelbl->Location = System::Drawing::Point(33, 6);
			this->rangelbl->Name = L"rangelbl";
			this->rangelbl->Size = System::Drawing::Size(27, 13);
			this->rangelbl->TabIndex = 8;
			this->rangelbl->Text = L"N/A";
			// 
			// rangepic
			// 
			this->rangepic->Location = System::Drawing::Point(4, 3);
			this->rangepic->Name = L"rangepic";
			this->rangepic->Size = System::Drawing::Size(20, 20);
			this->rangepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->rangepic->TabIndex = 2;
			this->rangepic->TabStop = false;
			// 
			// totallbl
			// 
			this->totallbl->AutoSize = true;
			this->totallbl->Location = System::Drawing::Point(33, 6);
			this->totallbl->Name = L"totallbl";
			this->totallbl->Size = System::Drawing::Size(27, 13);
			this->totallbl->TabIndex = 1;
			this->totallbl->Text = L"N/A";
			// 
			// totalpic
			// 
			this->totalpic->Location = System::Drawing::Point(4, 3);
			this->totalpic->Name = L"totalpic";
			this->totalpic->Size = System::Drawing::Size(20, 20);
			this->totalpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->totalpic->TabIndex = 0;
			this->totalpic->TabStop = false;
			// 
			// comparebtn
			// 
			this->comparebtn->Location = System::Drawing::Point(343, 1);
			this->comparebtn->Name = L"comparebtn";
			this->comparebtn->Size = System::Drawing::Size(75, 23);
			this->comparebtn->TabIndex = 3;
			this->comparebtn->Text = L"Compare";
			this->comparebtn->UseVisualStyleBackColor = true;
			// 
			// lookupbtn
			// 
			this->lookupbtn->Location = System::Drawing::Point(198, 1);
			this->lookupbtn->Name = L"lookupbtn";
			this->lookupbtn->Size = System::Drawing::Size(75, 23);
			this->lookupbtn->TabIndex = 2;
			this->lookupbtn->Text = L"Lookup";
			this->lookupbtn->UseVisualStyleBackColor = true;
			// 
			// unamelbl
			// 
			this->unamelbl->AutoSize = true;
			this->unamelbl->Location = System::Drawing::Point(3, 6);
			this->unamelbl->Name = L"unamelbl";
			this->unamelbl->Size = System::Drawing::Size(58, 13);
			this->unamelbl->TabIndex = 1;
			this->unamelbl->Text = L"Username:";
			// 
			// usertxt
			// 
			this->usertxt->Location = System::Drawing::Point(67, 3);
			this->usertxt->MaxLength = 12;
			this->usertxt->Name = L"usertxt";
			this->usertxt->Size = System::Drawing::Size(125, 20);
			this->usertxt->TabIndex = 0;
			// 
			// grandexchangetab
			// 
			this->grandexchangetab->Controls->Add(this->grandexchangelst);
			this->grandexchangetab->Controls->Add(this->searchpnl);
			this->grandexchangetab->Location = System::Drawing::Point(4, 22);
			this->grandexchangetab->Name = L"grandexchangetab";
			this->grandexchangetab->Padding = System::Windows::Forms::Padding(3);
			this->grandexchangetab->Size = System::Drawing::Size(421, 504);
			this->grandexchangetab->TabIndex = 3;
			this->grandexchangetab->Text = L"Grand Exchange";
			this->grandexchangetab->UseVisualStyleBackColor = true;
			// 
			// grandexchangelst
			// 
			this->grandexchangelst->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->namecol, this->memberscol, 
				this->pricecol, this->changecol});
			this->grandexchangelst->Dock = System::Windows::Forms::DockStyle::Fill;
			this->grandexchangelst->FullRowSelect = true;
			this->grandexchangelst->GridLines = true;
			this->grandexchangelst->Location = System::Drawing::Point(3, 107);
			this->grandexchangelst->MultiSelect = false;
			this->grandexchangelst->Name = L"grandexchangelst";
			this->grandexchangelst->Size = System::Drawing::Size(415, 394);
			this->grandexchangelst->TabIndex = 1;
			this->grandexchangelst->UseCompatibleStateImageBehavior = false;
			this->grandexchangelst->View = System::Windows::Forms::View::Details;
			// 
			// namecol
			// 
			this->namecol->Text = L"Name";
			this->namecol->Width = 141;
			// 
			// memberscol
			// 
			this->memberscol->Text = L"Members";
			this->memberscol->Width = 80;
			// 
			// pricecol
			// 
			this->pricecol->Text = L"Price";
			this->pricecol->Width = 84;
			// 
			// changecol
			// 
			this->changecol->Text = L"Change";
			this->changecol->Width = 80;
			// 
			// searchpnl
			// 
			this->searchpnl->Controls->Add(this->geshowbtn);
			this->searchpnl->Controls->Add(this->itemsearchbtn);
			this->searchpnl->Controls->Add(this->itemtxt);
			this->searchpnl->Controls->Add(this->smallimage);
			this->searchpnl->Controls->Add(this->largeimage);
			this->searchpnl->Dock = System::Windows::Forms::DockStyle::Top;
			this->searchpnl->Location = System::Drawing::Point(3, 3);
			this->searchpnl->Name = L"searchpnl";
			this->searchpnl->Size = System::Drawing::Size(415, 104);
			this->searchpnl->TabIndex = 0;
			// 
			// attackpic
			// 
			this->attackpic->Location = System::Drawing::Point(4, 3);
			this->attackpic->Name = L"attackpic";
			this->attackpic->Size = System::Drawing::Size(20, 20);
			this->attackpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->attackpic->TabIndex = 1;
			this->attackpic->TabStop = false;
			// 
			// timezonetxt
			// 
			this->timezonetxt->Location = System::Drawing::Point(130, 53);
			this->timezonetxt->Name = L"timezonetxt";
			this->timezonetxt->ReadOnly = true;
			this->timezonetxt->Size = System::Drawing::Size(165, 20);
			this->timezonetxt->TabIndex = 92;
			this->timezonetxt->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// calcstab
			// 
			this->calcstab->Controls->Add(this->timezonetxt);
			this->calcstab->Controls->Add(this->timezonecombo);
			this->calcstab->Controls->Add(this->userbrowser1);
			this->calcstab->Controls->Add(this->calcsbtn);
			this->calcstab->Location = System::Drawing::Point(4, 22);
			this->calcstab->Name = L"calcstab";
			this->calcstab->Padding = System::Windows::Forms::Padding(3);
			this->calcstab->Size = System::Drawing::Size(421, 504);
			this->calcstab->TabIndex = 1;
			this->calcstab->Text = L"Calcs";
			this->calcstab->UseVisualStyleBackColor = true;
			// 
			// fletchingpnl
			// 
			this->fletchingpnl->Controls->Add(this->fletchinglbl);
			this->fletchingpnl->Controls->Add(this->fletchingpic);
			this->fletchingpnl->Location = System::Drawing::Point(78, 175);
			this->fletchingpnl->Name = L"fletchingpnl";
			this->fletchingpnl->Size = System::Drawing::Size(70, 25);
			this->fletchingpnl->TabIndex = 1;
			// 
			// runecraftingpnl
			// 
			this->runecraftingpnl->Controls->Add(this->runecraftinglbl);
			this->runecraftingpnl->Controls->Add(this->runecraftingpic);
			this->runecraftingpnl->Location = System::Drawing::Point(6, 201);
			this->runecraftingpnl->Name = L"runecraftingpnl";
			this->runecraftingpnl->Size = System::Drawing::Size(70, 25);
			this->runecraftingpnl->TabIndex = 1;
			// 
			// magicpnl
			// 
			this->magicpnl->Controls->Add(this->magiclbl);
			this->magicpnl->Controls->Add(this->magicpic);
			this->magicpnl->Location = System::Drawing::Point(6, 175);
			this->magicpnl->Name = L"magicpnl";
			this->magicpnl->Size = System::Drawing::Size(70, 25);
			this->magicpnl->TabIndex = 1;
			// 
			// barbarianassulthealpic
			// 
			this->barbarianassulthealpic->Location = System::Drawing::Point(4, 3);
			this->barbarianassulthealpic->Name = L"barbarianassulthealpic";
			this->barbarianassulthealpic->Size = System::Drawing::Size(20, 20);
			this->barbarianassulthealpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->barbarianassulthealpic->TabIndex = 1;
			this->barbarianassulthealpic->TabStop = false;
			// 
			// fistofguthixpnl
			// 
			this->fistofguthixpnl->Controls->Add(this->fistofguthixlbl);
			this->fistofguthixpnl->Controls->Add(this->fistofguthixpic);
			this->fistofguthixpnl->Location = System::Drawing::Point(6, 97);
			this->fistofguthixpnl->Name = L"fistofguthixpnl";
			this->fistofguthixpnl->Size = System::Drawing::Size(89, 25);
			this->fistofguthixpnl->TabIndex = 4;
			// 
			// fistofguthixlbl
			// 
			this->fistofguthixlbl->AutoSize = true;
			this->fistofguthixlbl->Location = System::Drawing::Point(33, 6);
			this->fistofguthixlbl->Name = L"fistofguthixlbl";
			this->fistofguthixlbl->Size = System::Drawing::Size(27, 13);
			this->fistofguthixlbl->TabIndex = 2;
			this->fistofguthixlbl->Text = L"N/A";
			// 
			// fistofguthixpic
			// 
			this->fistofguthixpic->Location = System::Drawing::Point(4, 3);
			this->fistofguthixpic->Name = L"fistofguthixpic";
			this->fistofguthixpic->Size = System::Drawing::Size(20, 20);
			this->fistofguthixpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->fistofguthixpic->TabIndex = 1;
			this->fistofguthixpic->TabStop = false;
			// 
			// constructionpnl
			// 
			this->constructionpnl->Controls->Add(this->constructionlbl);
			this->constructionpnl->Controls->Add(this->constructionpic);
			this->constructionpnl->Location = System::Drawing::Point(6, 227);
			this->constructionpnl->Name = L"constructionpnl";
			this->constructionpnl->Size = System::Drawing::Size(70, 25);
			this->constructionpnl->TabIndex = 4;
			// 
			// barbarianassultcollectpnl
			// 
			this->barbarianassultcollectpnl->Controls->Add(this->barbarianassultcollectlbl);
			this->barbarianassultcollectpnl->Controls->Add(this->barbarianassultcollectpic);
			this->barbarianassultcollectpnl->Location = System::Drawing::Point(97, 97);
			this->barbarianassultcollectpnl->Name = L"barbarianassultcollectpnl";
			this->barbarianassultcollectpnl->Size = System::Drawing::Size(89, 25);
			this->barbarianassultcollectpnl->TabIndex = 3;
			// 
			// barbarianassultcollectlbl
			// 
			this->barbarianassultcollectlbl->AutoSize = true;
			this->barbarianassultcollectlbl->Location = System::Drawing::Point(33, 6);
			this->barbarianassultcollectlbl->Name = L"barbarianassultcollectlbl";
			this->barbarianassultcollectlbl->Size = System::Drawing::Size(27, 13);
			this->barbarianassultcollectlbl->TabIndex = 2;
			this->barbarianassultcollectlbl->Text = L"N/A";
			// 
			// barbarianassultcollectpic
			// 
			this->barbarianassultcollectpic->Location = System::Drawing::Point(4, 3);
			this->barbarianassultcollectpic->Name = L"barbarianassultcollectpic";
			this->barbarianassultcollectpic->Size = System::Drawing::Size(20, 20);
			this->barbarianassultcollectpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->barbarianassultcollectpic->TabIndex = 1;
			this->barbarianassultcollectpic->TabStop = false;
			// 
			// dungeoneeringpnl
			// 
			this->dungeoneeringpnl->Controls->Add(this->dungeoneeringlbl);
			this->dungeoneeringpnl->Controls->Add(this->dungeoneeringpic);
			this->dungeoneeringpnl->Location = System::Drawing::Point(78, 253);
			this->dungeoneeringpnl->Name = L"dungeoneeringpnl";
			this->dungeoneeringpnl->Size = System::Drawing::Size(70, 25);
			this->dungeoneeringpnl->TabIndex = 6;
			// 
			// barbarianassultdefendpnl
			// 
			this->barbarianassultdefendpnl->Controls->Add(this->barbarianassultdefendlbl);
			this->barbarianassultdefendpnl->Controls->Add(this->barbarianassultdefendpic);
			this->barbarianassultdefendpnl->Location = System::Drawing::Point(97, 71);
			this->barbarianassultdefendpnl->Name = L"barbarianassultdefendpnl";
			this->barbarianassultdefendpnl->Size = System::Drawing::Size(89, 25);
			this->barbarianassultdefendpnl->TabIndex = 3;
			// 
			// barbarianassultdefendlbl
			// 
			this->barbarianassultdefendlbl->AutoSize = true;
			this->barbarianassultdefendlbl->Location = System::Drawing::Point(33, 6);
			this->barbarianassultdefendlbl->Name = L"barbarianassultdefendlbl";
			this->barbarianassultdefendlbl->Size = System::Drawing::Size(27, 13);
			this->barbarianassultdefendlbl->TabIndex = 2;
			this->barbarianassultdefendlbl->Text = L"N/A";
			// 
			// barbarianassultdefendpic
			// 
			this->barbarianassultdefendpic->Location = System::Drawing::Point(4, 3);
			this->barbarianassultdefendpic->Name = L"barbarianassultdefendpic";
			this->barbarianassultdefendpic->Size = System::Drawing::Size(20, 20);
			this->barbarianassultdefendpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->barbarianassultdefendpic->TabIndex = 1;
			this->barbarianassultdefendpic->TabStop = false;
			// 
			// hunterpnl
			// 
			this->hunterpnl->Controls->Add(this->hunterlbl);
			this->hunterpnl->Controls->Add(this->hunterpic);
			this->hunterpnl->Location = System::Drawing::Point(78, 227);
			this->hunterpnl->Name = L"hunterpnl";
			this->hunterpnl->Size = System::Drawing::Size(70, 25);
			this->hunterpnl->TabIndex = 1;
			// 
			// barbarianassultheallbl
			// 
			this->barbarianassultheallbl->AutoSize = true;
			this->barbarianassultheallbl->Location = System::Drawing::Point(33, 6);
			this->barbarianassultheallbl->Name = L"barbarianassultheallbl";
			this->barbarianassultheallbl->Size = System::Drawing::Size(27, 13);
			this->barbarianassultheallbl->TabIndex = 2;
			this->barbarianassultheallbl->Text = L"N/A";
			// 
			// slayerpnl
			// 
			this->slayerpnl->Controls->Add(this->slayerlbl);
			this->slayerpnl->Controls->Add(this->slayerpic);
			this->slayerpnl->Location = System::Drawing::Point(78, 201);
			this->slayerpnl->Name = L"slayerpnl";
			this->slayerpnl->Size = System::Drawing::Size(70, 25);
			this->slayerpnl->TabIndex = 1;
			// 
			// barbarianassultattackpnl
			// 
			this->barbarianassultattackpnl->Controls->Add(this->barbarianassultattacklbl);
			this->barbarianassultattackpnl->Controls->Add(this->barbarianassultattackpic);
			this->barbarianassultattackpnl->Location = System::Drawing::Point(97, 45);
			this->barbarianassultattackpnl->Name = L"barbarianassultattackpnl";
			this->barbarianassultattackpnl->Size = System::Drawing::Size(89, 25);
			this->barbarianassultattackpnl->TabIndex = 3;
			// 
			// barbarianassultattacklbl
			// 
			this->barbarianassultattacklbl->AutoSize = true;
			this->barbarianassultattacklbl->Location = System::Drawing::Point(33, 6);
			this->barbarianassultattacklbl->Name = L"barbarianassultattacklbl";
			this->barbarianassultattacklbl->Size = System::Drawing::Size(27, 13);
			this->barbarianassultattacklbl->TabIndex = 2;
			this->barbarianassultattacklbl->Text = L"N/A";
			// 
			// barbarianassultattackpic
			// 
			this->barbarianassultattackpic->Location = System::Drawing::Point(4, 3);
			this->barbarianassultattackpic->Name = L"barbarianassultattackpic";
			this->barbarianassultattackpic->Size = System::Drawing::Size(20, 20);
			this->barbarianassultattackpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->barbarianassultattackpic->TabIndex = 1;
			this->barbarianassultattackpic->TabStop = false;
			// 
			// mobilisingarmiespnl
			// 
			this->mobilisingarmiespnl->Controls->Add(this->mobilisingarmieslbl);
			this->mobilisingarmiespnl->Controls->Add(this->mobilisingarmiespic);
			this->mobilisingarmiespnl->Location = System::Drawing::Point(97, 19);
			this->mobilisingarmiespnl->Name = L"mobilisingarmiespnl";
			this->mobilisingarmiespnl->Size = System::Drawing::Size(89, 25);
			this->mobilisingarmiespnl->TabIndex = 6;
			// 
			// mobilisingarmieslbl
			// 
			this->mobilisingarmieslbl->AutoSize = true;
			this->mobilisingarmieslbl->Location = System::Drawing::Point(33, 6);
			this->mobilisingarmieslbl->Name = L"mobilisingarmieslbl";
			this->mobilisingarmieslbl->Size = System::Drawing::Size(27, 13);
			this->mobilisingarmieslbl->TabIndex = 2;
			this->mobilisingarmieslbl->Text = L"N/A";
			// 
			// mobilisingarmiespic
			// 
			this->mobilisingarmiespic->Location = System::Drawing::Point(4, 3);
			this->mobilisingarmiespic->Name = L"mobilisingarmiespic";
			this->mobilisingarmiespic->Size = System::Drawing::Size(20, 20);
			this->mobilisingarmiespic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mobilisingarmiespic->TabIndex = 1;
			this->mobilisingarmiespic->TabStop = false;
			// 
			// cruciblepnl
			// 
			this->cruciblepnl->Controls->Add(this->cruciblelbl);
			this->cruciblepnl->Controls->Add(this->cruciblepic);
			this->cruciblepnl->Location = System::Drawing::Point(6, 123);
			this->cruciblepnl->Name = L"cruciblepnl";
			this->cruciblepnl->Size = System::Drawing::Size(89, 25);
			this->cruciblepnl->TabIndex = 5;
			// 
			// cruciblelbl
			// 
			this->cruciblelbl->AutoSize = true;
			this->cruciblelbl->Location = System::Drawing::Point(33, 6);
			this->cruciblelbl->Name = L"cruciblelbl";
			this->cruciblelbl->Size = System::Drawing::Size(27, 13);
			this->cruciblelbl->TabIndex = 2;
			this->cruciblelbl->Text = L"N/A";
			// 
			// cruciblepic
			// 
			this->cruciblepic->Location = System::Drawing::Point(4, 3);
			this->cruciblepic->Name = L"cruciblepic";
			this->cruciblepic->Size = System::Drawing::Size(20, 20);
			this->cruciblepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->cruciblepic->TabIndex = 1;
			this->cruciblepic->TabStop = false;
			// 
			// prayerpnl
			// 
			this->prayerpnl->Controls->Add(this->prayerlbl);
			this->prayerpnl->Controls->Add(this->prayerpic);
			this->prayerpnl->Location = System::Drawing::Point(6, 149);
			this->prayerpnl->Name = L"prayerpnl";
			this->prayerpnl->Size = System::Drawing::Size(70, 25);
			this->prayerpnl->TabIndex = 1;
			// 
			// rstoolkittabs
			// 
			this->rstoolkittabs->Controls->Add(this->hiscoretab);
			this->rstoolkittabs->Controls->Add(this->grandexchangetab);
			this->rstoolkittabs->Controls->Add(this->calcstab);
			this->rstoolkittabs->Controls->Add(this->settingtab);
			this->rstoolkittabs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->rstoolkittabs->Location = System::Drawing::Point(0, 0);
			this->rstoolkittabs->Name = L"rstoolkittabs";
			this->rstoolkittabs->SelectedIndex = 0;
			this->rstoolkittabs->Size = System::Drawing::Size(429, 530);
			this->rstoolkittabs->TabIndex = 1;
			// 
			// hiscoretab
			// 
			this->hiscoretab->Controls->Add(this->oldschoolcb);
			this->hiscoretab->Controls->Add(this->activitiesbox);
			this->hiscoretab->Controls->Add(this->statsbox);
			this->hiscoretab->Controls->Add(this->comparebtn);
			this->hiscoretab->Controls->Add(this->lookupbtn);
			this->hiscoretab->Controls->Add(this->unamelbl);
			this->hiscoretab->Controls->Add(this->usertxt);
			this->hiscoretab->Location = System::Drawing::Point(4, 22);
			this->hiscoretab->Name = L"hiscoretab";
			this->hiscoretab->Padding = System::Windows::Forms::Padding(3);
			this->hiscoretab->Size = System::Drawing::Size(421, 504);
			this->hiscoretab->TabIndex = 0;
			this->hiscoretab->Text = L"Hiscores";
			this->hiscoretab->UseVisualStyleBackColor = true;
			// 
			// oldschoolcb
			// 
			this->oldschoolcb->AutoSize = true;
			this->oldschoolcb->Location = System::Drawing::Point(6, 29);
			this->oldschoolcb->Name = L"oldschoolcb";
			this->oldschoolcb->Size = System::Drawing::Size(71, 17);
			this->oldschoolcb->TabIndex = 6;
			this->oldschoolcb->Text = L"oldschool";
			this->oldschoolcb->UseVisualStyleBackColor = true;
			// 
			// activitiesbox
			// 
			this->activitiesbox->Controls->Add(this->aranklbl);
			this->activitiesbox->Controls->Add(this->scorelbl);
			this->activitiesbox->Controls->Add(this->activitylbl);
			this->activitiesbox->Controls->Add(this->aranklbla);
			this->activitiesbox->Controls->Add(this->scorelbla);
			this->activitiesbox->Controls->Add(this->activitylbla);
			this->activitiesbox->Controls->Add(this->dominiontowerpnl);
			this->activitiesbox->Controls->Add(this->conquestpnl);
			this->activitiesbox->Controls->Add(this->castlewarspnl);
			this->activitiesbox->Controls->Add(this->barbarianassulthealpnl);
			this->activitiesbox->Controls->Add(this->barbarianassultcollectpnl);
			this->activitiesbox->Controls->Add(this->barbarianassultdefendpnl);
			this->activitiesbox->Controls->Add(this->barbarianassultattackpnl);
			this->activitiesbox->Controls->Add(this->mobilisingarmiespnl);
			this->activitiesbox->Controls->Add(this->cruciblepnl);
			this->activitiesbox->Controls->Add(this->fistofguthixpnl);
			this->activitiesbox->Controls->Add(this->bountyhunterroguepnl);
			this->activitiesbox->Controls->Add(this->bountyhunterpnl);
			this->activitiesbox->Controls->Add(this->dueltournamentpnl);
			this->activitiesbox->Location = System::Drawing::Point(6, 346);
			this->activitiesbox->Name = L"activitiesbox";
			this->activitiesbox->Size = System::Drawing::Size(412, 152);
			this->activitiesbox->TabIndex = 5;
			this->activitiesbox->TabStop = false;
			this->activitiesbox->Text = L"Activities";
			// 
			// aranklbl
			// 
			this->aranklbl->AutoSize = true;
			this->aranklbl->Location = System::Drawing::Point(306, 74);
			this->aranklbl->Name = L"aranklbl";
			this->aranklbl->Size = System::Drawing::Size(27, 13);
			this->aranklbl->TabIndex = 28;
			this->aranklbl->Text = L"N/A";
			// 
			// scorelbl
			// 
			this->scorelbl->AutoSize = true;
			this->scorelbl->Location = System::Drawing::Point(306, 48);
			this->scorelbl->Name = L"scorelbl";
			this->scorelbl->Size = System::Drawing::Size(27, 13);
			this->scorelbl->TabIndex = 27;
			this->scorelbl->Text = L"N/A";
			// 
			// activitylbl
			// 
			this->activitylbl->AutoSize = true;
			this->activitylbl->Location = System::Drawing::Point(306, 22);
			this->activitylbl->Name = L"activitylbl";
			this->activitylbl->Size = System::Drawing::Size(27, 13);
			this->activitylbl->TabIndex = 26;
			this->activitylbl->Text = L"N/A";
			// 
			// aranklbla
			// 
			this->aranklbla->AutoSize = true;
			this->aranklbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->aranklbla->Location = System::Drawing::Point(269, 74);
			this->aranklbla->Name = L"aranklbla";
			this->aranklbla->Size = System::Drawing::Size(41, 13);
			this->aranklbla->TabIndex = 25;
			this->aranklbla->Text = L"Rank:";
			// 
			// scorelbla
			// 
			this->scorelbla->AutoSize = true;
			this->scorelbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->scorelbla->Location = System::Drawing::Point(266, 48);
			this->scorelbla->Name = L"scorelbla";
			this->scorelbla->Size = System::Drawing::Size(44, 13);
			this->scorelbla->TabIndex = 24;
			this->scorelbla->Text = L"Score:";
			// 
			// activitylbla
			// 
			this->activitylbla->AutoSize = true;
			this->activitylbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->activitylbla->Location = System::Drawing::Point(257, 22);
			this->activitylbla->Name = L"activitylbla";
			this->activitylbla->Size = System::Drawing::Size(53, 13);
			this->activitylbla->TabIndex = 23;
			this->activitylbla->Text = L"Activity:";
			// 
			// dominiontowerpnl
			// 
			this->dominiontowerpnl->Controls->Add(this->dominiontowerlbl);
			this->dominiontowerpnl->Controls->Add(this->dominiontowerpic);
			this->dominiontowerpnl->Location = System::Drawing::Point(188, 97);
			this->dominiontowerpnl->Name = L"dominiontowerpnl";
			this->dominiontowerpnl->Size = System::Drawing::Size(161, 25);
			this->dominiontowerpnl->TabIndex = 3;
			// 
			// dominiontowerlbl
			// 
			this->dominiontowerlbl->AutoSize = true;
			this->dominiontowerlbl->Location = System::Drawing::Point(33, 6);
			this->dominiontowerlbl->Name = L"dominiontowerlbl";
			this->dominiontowerlbl->Size = System::Drawing::Size(27, 13);
			this->dominiontowerlbl->TabIndex = 2;
			this->dominiontowerlbl->Text = L"N/A";
			// 
			// dominiontowerpic
			// 
			this->dominiontowerpic->Location = System::Drawing::Point(4, 3);
			this->dominiontowerpic->Name = L"dominiontowerpic";
			this->dominiontowerpic->Size = System::Drawing::Size(20, 20);
			this->dominiontowerpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dominiontowerpic->TabIndex = 1;
			this->dominiontowerpic->TabStop = false;
			// 
			// conquestpnl
			// 
			this->conquestpnl->Controls->Add(this->conquestlbl);
			this->conquestpnl->Controls->Add(this->conquestpic);
			this->conquestpnl->Location = System::Drawing::Point(188, 71);
			this->conquestpnl->Name = L"conquestpnl";
			this->conquestpnl->Size = System::Drawing::Size(89, 25);
			this->conquestpnl->TabIndex = 3;
			// 
			// conquestlbl
			// 
			this->conquestlbl->AutoSize = true;
			this->conquestlbl->Location = System::Drawing::Point(33, 6);
			this->conquestlbl->Name = L"conquestlbl";
			this->conquestlbl->Size = System::Drawing::Size(27, 13);
			this->conquestlbl->TabIndex = 2;
			this->conquestlbl->Text = L"N/A";
			// 
			// conquestpic
			// 
			this->conquestpic->Location = System::Drawing::Point(4, 3);
			this->conquestpic->Name = L"conquestpic";
			this->conquestpic->Size = System::Drawing::Size(20, 20);
			this->conquestpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->conquestpic->TabIndex = 1;
			this->conquestpic->TabStop = false;
			// 
			// castlewarspnl
			// 
			this->castlewarspnl->Controls->Add(this->castlewarslbl);
			this->castlewarspnl->Controls->Add(this->castlewarspic);
			this->castlewarspnl->Location = System::Drawing::Point(188, 45);
			this->castlewarspnl->Name = L"castlewarspnl";
			this->castlewarspnl->Size = System::Drawing::Size(89, 25);
			this->castlewarspnl->TabIndex = 3;
			// 
			// castlewarslbl
			// 
			this->castlewarslbl->AutoSize = true;
			this->castlewarslbl->Location = System::Drawing::Point(33, 6);
			this->castlewarslbl->Name = L"castlewarslbl";
			this->castlewarslbl->Size = System::Drawing::Size(27, 13);
			this->castlewarslbl->TabIndex = 2;
			this->castlewarslbl->Text = L"N/A";
			// 
			// castlewarspic
			// 
			this->castlewarspic->Location = System::Drawing::Point(4, 3);
			this->castlewarspic->Name = L"castlewarspic";
			this->castlewarspic->Size = System::Drawing::Size(20, 20);
			this->castlewarspic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->castlewarspic->TabIndex = 1;
			this->castlewarspic->TabStop = false;
			// 
			// barbarianassulthealpnl
			// 
			this->barbarianassulthealpnl->Controls->Add(this->barbarianassultheallbl);
			this->barbarianassulthealpnl->Controls->Add(this->barbarianassulthealpic);
			this->barbarianassulthealpnl->Location = System::Drawing::Point(188, 19);
			this->barbarianassulthealpnl->Name = L"barbarianassulthealpnl";
			this->barbarianassulthealpnl->Size = System::Drawing::Size(89, 25);
			this->barbarianassulthealpnl->TabIndex = 3;
			// 
			// bountyhunterroguepnl
			// 
			this->bountyhunterroguepnl->Controls->Add(this->bountyhunterroguelbl);
			this->bountyhunterroguepnl->Controls->Add(this->bountyhunterroguepic);
			this->bountyhunterroguepnl->Location = System::Drawing::Point(6, 71);
			this->bountyhunterroguepnl->Name = L"bountyhunterroguepnl";
			this->bountyhunterroguepnl->Size = System::Drawing::Size(89, 25);
			this->bountyhunterroguepnl->TabIndex = 3;
			// 
			// bountyhunterroguelbl
			// 
			this->bountyhunterroguelbl->AutoSize = true;
			this->bountyhunterroguelbl->Location = System::Drawing::Point(33, 6);
			this->bountyhunterroguelbl->Name = L"bountyhunterroguelbl";
			this->bountyhunterroguelbl->Size = System::Drawing::Size(27, 13);
			this->bountyhunterroguelbl->TabIndex = 2;
			this->bountyhunterroguelbl->Text = L"N/A";
			// 
			// bountyhunterroguepic
			// 
			this->bountyhunterroguepic->Location = System::Drawing::Point(4, 3);
			this->bountyhunterroguepic->Name = L"bountyhunterroguepic";
			this->bountyhunterroguepic->Size = System::Drawing::Size(20, 20);
			this->bountyhunterroguepic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bountyhunterroguepic->TabIndex = 1;
			this->bountyhunterroguepic->TabStop = false;
			// 
			// bountyhunterpnl
			// 
			this->bountyhunterpnl->Controls->Add(this->bountyhunterlbl);
			this->bountyhunterpnl->Controls->Add(this->bountyhunterpic);
			this->bountyhunterpnl->Location = System::Drawing::Point(6, 45);
			this->bountyhunterpnl->Name = L"bountyhunterpnl";
			this->bountyhunterpnl->Size = System::Drawing::Size(89, 25);
			this->bountyhunterpnl->TabIndex = 3;
			// 
			// bountyhunterlbl
			// 
			this->bountyhunterlbl->AutoSize = true;
			this->bountyhunterlbl->Location = System::Drawing::Point(33, 6);
			this->bountyhunterlbl->Name = L"bountyhunterlbl";
			this->bountyhunterlbl->Size = System::Drawing::Size(27, 13);
			this->bountyhunterlbl->TabIndex = 2;
			this->bountyhunterlbl->Text = L"N/A";
			// 
			// bountyhunterpic
			// 
			this->bountyhunterpic->Location = System::Drawing::Point(4, 3);
			this->bountyhunterpic->Name = L"bountyhunterpic";
			this->bountyhunterpic->Size = System::Drawing::Size(20, 20);
			this->bountyhunterpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bountyhunterpic->TabIndex = 1;
			this->bountyhunterpic->TabStop = false;
			// 
			// dueltournamentpnl
			// 
			this->dueltournamentpnl->Controls->Add(this->dueltournamentlbl);
			this->dueltournamentpnl->Controls->Add(this->dueltournamentpic);
			this->dueltournamentpnl->Location = System::Drawing::Point(6, 19);
			this->dueltournamentpnl->Name = L"dueltournamentpnl";
			this->dueltournamentpnl->Size = System::Drawing::Size(89, 25);
			this->dueltournamentpnl->TabIndex = 2;
			// 
			// dueltournamentlbl
			// 
			this->dueltournamentlbl->AutoSize = true;
			this->dueltournamentlbl->Location = System::Drawing::Point(33, 6);
			this->dueltournamentlbl->Name = L"dueltournamentlbl";
			this->dueltournamentlbl->Size = System::Drawing::Size(27, 13);
			this->dueltournamentlbl->TabIndex = 2;
			this->dueltournamentlbl->Text = L"N/A";
			// 
			// dueltournamentpic
			// 
			this->dueltournamentpic->Location = System::Drawing::Point(4, 3);
			this->dueltournamentpic->Name = L"dueltournamentpic";
			this->dueltournamentpic->Size = System::Drawing::Size(20, 20);
			this->dueltournamentpic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dueltournamentpic->TabIndex = 1;
			this->dueltournamentpic->TabStop = false;
			// 
			// statsbox
			// 
			this->statsbox->Controls->Add(this->summoningpnl);
			this->statsbox->Controls->Add(this->farmingpnl);
			this->statsbox->Controls->Add(this->woodcuttingpnl);
			this->statsbox->Controls->Add(this->firemakingpnl);
			this->statsbox->Controls->Add(this->cookingpnl);
			this->statsbox->Controls->Add(this->fishingpnl);
			this->statsbox->Controls->Add(this->smithingpnl);
			this->statsbox->Controls->Add(this->miningpnl);
			this->statsbox->Controls->Add(this->hppnl);
			this->statsbox->Controls->Add(this->agilitypnl);
			this->statsbox->Controls->Add(this->herblorepnl);
			this->statsbox->Controls->Add(this->thievingpnl);
			this->statsbox->Controls->Add(this->craftingpnl);
			this->statsbox->Controls->Add(this->fletchingpnl);
			this->statsbox->Controls->Add(this->slayerpnl);
			this->statsbox->Controls->Add(this->hunterpnl);
			this->statsbox->Controls->Add(this->dungeoneeringpnl);
			this->statsbox->Controls->Add(this->constructionpnl);
			this->statsbox->Controls->Add(this->runecraftingpnl);
			this->statsbox->Controls->Add(this->magicpnl);
			this->statsbox->Controls->Add(this->prayerpnl);
			this->statsbox->Controls->Add(this->defencepnl);
			this->statsbox->Controls->Add(this->strengthpnl);
			this->statsbox->Controls->Add(this->attackpnl);
			this->statsbox->Controls->Add(this->avatarfull);
			this->statsbox->Controls->Add(this->nllbl);
			this->statsbox->Controls->Add(this->ranklbl);
			this->statsbox->Controls->Add(this->xplbl);
			this->statsbox->Controls->Add(this->skilllbl);
			this->statsbox->Controls->Add(this->nlllbla);
			this->statsbox->Controls->Add(this->ranklbla);
			this->statsbox->Controls->Add(this->xplbla);
			this->statsbox->Controls->Add(this->skilllbla);
			this->statsbox->Controls->Add(this->avatarface);
			this->statsbox->Controls->Add(this->newclbl);
			this->statsbox->Controls->Add(this->newc);
			this->statsbox->Controls->Add(this->f2pclbl);
			this->statsbox->Controls->Add(this->f2pc);
			this->statsbox->Controls->Add(this->p2pclbl);
			this->statsbox->Controls->Add(this->p2pc);
			this->statsbox->Controls->Add(this->rangepnl);
			this->statsbox->Controls->Add(this->totalpnl);
			this->statsbox->Location = System::Drawing::Point(6, 47);
			this->statsbox->Name = L"statsbox";
			this->statsbox->Size = System::Drawing::Size(412, 298);
			this->statsbox->TabIndex = 4;
			this->statsbox->TabStop = false;
			this->statsbox->Text = L"Stats";
			// 
			// defencepnl
			// 
			this->defencepnl->Controls->Add(this->defencelbl);
			this->defencepnl->Controls->Add(this->defencepic);
			this->defencepnl->Location = System::Drawing::Point(6, 97);
			this->defencepnl->Name = L"defencepnl";
			this->defencepnl->Size = System::Drawing::Size(70, 25);
			this->defencepnl->TabIndex = 1;
			// 
			// strengthpnl
			// 
			this->strengthpnl->Controls->Add(this->strengthlbl);
			this->strengthpnl->Controls->Add(this->strengthpic);
			this->strengthpnl->Location = System::Drawing::Point(6, 71);
			this->strengthpnl->Name = L"strengthpnl";
			this->strengthpnl->Size = System::Drawing::Size(70, 25);
			this->strengthpnl->TabIndex = 2;
			// 
			// attackpnl
			// 
			this->attackpnl->Controls->Add(this->attacklbl);
			this->attackpnl->Controls->Add(this->attackpic);
			this->attackpnl->Location = System::Drawing::Point(6, 45);
			this->attackpnl->Name = L"attackpnl";
			this->attackpnl->Size = System::Drawing::Size(70, 25);
			this->attackpnl->TabIndex = 1;
			// 
			// avatarfull
			// 
			this->avatarfull->Location = System::Drawing::Point(330, 19);
			this->avatarfull->Name = L"avatarfull";
			this->avatarfull->Size = System::Drawing::Size(60, 100);
			this->avatarfull->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->avatarfull->TabIndex = 23;
			this->avatarfull->TabStop = false;
			// 
			// nllbl
			// 
			this->nllbl->AutoSize = true;
			this->nllbl->Location = System::Drawing::Point(306, 201);
			this->nllbl->Name = L"nllbl";
			this->nllbl->Size = System::Drawing::Size(27, 13);
			this->nllbl->TabIndex = 22;
			this->nllbl->Text = L"N/A";
			// 
			// ranklbl
			// 
			this->ranklbl->AutoSize = true;
			this->ranklbl->Location = System::Drawing::Point(306, 175);
			this->ranklbl->Name = L"ranklbl";
			this->ranklbl->Size = System::Drawing::Size(27, 13);
			this->ranklbl->TabIndex = 21;
			this->ranklbl->Text = L"N/A";
			// 
			// xplbl
			// 
			this->xplbl->AutoSize = true;
			this->xplbl->Location = System::Drawing::Point(306, 149);
			this->xplbl->Name = L"xplbl";
			this->xplbl->Size = System::Drawing::Size(27, 13);
			this->xplbl->TabIndex = 20;
			this->xplbl->Text = L"N/A";
			// 
			// skilllbl
			// 
			this->skilllbl->AutoSize = true;
			this->skilllbl->Location = System::Drawing::Point(306, 122);
			this->skilllbl->Name = L"skilllbl";
			this->skilllbl->Size = System::Drawing::Size(27, 13);
			this->skilllbl->TabIndex = 19;
			this->skilllbl->Text = L"N/A";
			// 
			// nlllbla
			// 
			this->nlllbla->AutoSize = true;
			this->nlllbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nlllbla->Location = System::Drawing::Point(238, 201);
			this->nlllbla->Name = L"nlllbla";
			this->nlllbla->Size = System::Drawing::Size(72, 13);
			this->nlllbla->TabIndex = 18;
			this->nlllbla->Text = L"Next Level:";
			// 
			// ranklbla
			// 
			this->ranklbla->AutoSize = true;
			this->ranklbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ranklbla->Location = System::Drawing::Point(269, 175);
			this->ranklbla->Name = L"ranklbla";
			this->ranklbla->Size = System::Drawing::Size(41, 13);
			this->ranklbla->TabIndex = 17;
			this->ranklbla->Text = L"Rank:";
			// 
			// xplbla
			// 
			this->xplbla->AutoSize = true;
			this->xplbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->xplbla->Location = System::Drawing::Point(283, 149);
			this->xplbla->Name = L"xplbla";
			this->xplbla->Size = System::Drawing::Size(27, 13);
			this->xplbla->TabIndex = 16;
			this->xplbla->Text = L"XP:";
			// 
			// skilllbla
			// 
			this->skilllbla->AutoSize = true;
			this->skilllbla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->skilllbla->Location = System::Drawing::Point(275, 122);
			this->skilllbla->Name = L"skilllbla";
			this->skilllbla->Size = System::Drawing::Size(35, 13);
			this->skilllbla->TabIndex = 15;
			this->skilllbla->Text = L"Skill:";
			// 
			// avatarface
			// 
			this->avatarface->Location = System::Drawing::Point(224, 19);
			this->avatarface->Name = L"avatarface";
			this->avatarface->Size = System::Drawing::Size(100, 100);
			this->avatarface->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->avatarface->TabIndex = 14;
			this->avatarface->TabStop = false;
			// 
			// newclbl
			// 
			this->newclbl->AutoSize = true;
			this->newclbl->Location = System::Drawing::Point(317, 279);
			this->newclbl->Name = L"newclbl";
			this->newclbl->Size = System::Drawing::Size(27, 13);
			this->newclbl->TabIndex = 13;
			this->newclbl->Text = L"N/A";
			// 
			// newc
			// 
			this->newc->AutoSize = true;
			this->newc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->newc->Location = System::Drawing::Point(240, 279);
			this->newc->Name = L"newc";
			this->newc->Size = System::Drawing::Size(82, 13);
			this->newc->TabIndex = 12;
			this->newc->Text = L"New Combat:";
			// 
			// f2pclbl
			// 
			this->f2pclbl->AutoSize = true;
			this->f2pclbl->Location = System::Drawing::Point(198, 279);
			this->f2pclbl->Name = L"f2pclbl";
			this->f2pclbl->Size = System::Drawing::Size(27, 13);
			this->f2pclbl->TabIndex = 11;
			this->f2pclbl->Text = L"N/A";
			// 
			// f2pc
			// 
			this->f2pc->AutoSize = true;
			this->f2pc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f2pc->Location = System::Drawing::Point(124, 279);
			this->f2pc->Name = L"f2pc";
			this->f2pc->Size = System::Drawing::Size(79, 13);
			this->f2pc->TabIndex = 10;
			this->f2pc->Text = L"F2P Combat:";
			// 
			// p2pclbl
			// 
			this->p2pclbl->AutoSize = true;
			this->p2pclbl->Location = System::Drawing::Point(81, 279);
			this->p2pclbl->Name = L"p2pclbl";
			this->p2pclbl->Size = System::Drawing::Size(27, 13);
			this->p2pclbl->TabIndex = 9;
			this->p2pclbl->Text = L"N/A";
			// 
			// p2pc
			// 
			this->p2pc->AutoSize = true;
			this->p2pc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p2pc->Location = System::Drawing::Point(6, 279);
			this->p2pc->Name = L"p2pc";
			this->p2pc->Size = System::Drawing::Size(80, 13);
			this->p2pc->TabIndex = 8;
			this->p2pc->Text = L"P2P Combat:";
			// 
			// rangepnl
			// 
			this->rangepnl->Controls->Add(this->rangelbl);
			this->rangepnl->Controls->Add(this->rangepic);
			this->rangepnl->Location = System::Drawing::Point(6, 123);
			this->rangepnl->Name = L"rangepnl";
			this->rangepnl->Size = System::Drawing::Size(70, 25);
			this->rangepnl->TabIndex = 3;
			// 
			// totalpnl
			// 
			this->totalpnl->Controls->Add(this->totallbl);
			this->totalpnl->Controls->Add(this->totalpic);
			this->totalpnl->Location = System::Drawing::Point(6, 19);
			this->totalpnl->Name = L"totalpnl";
			this->totalpnl->Size = System::Drawing::Size(144, 25);
			this->totalpnl->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 530);
			this->Controls->Add(this->rstoolkittabs);
			this->Name = L"Form1";
			this->Text = L"RSToolkit";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->strengthpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dungeoneeringpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->constructionpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->runecraftingpic))->EndInit();
			this->summoningpnl->ResumeLayout(false);
			this->summoningpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->summoningpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->magicpic))->EndInit();
			this->firemakingpnl->ResumeLayout(false);
			this->firemakingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->firemakingpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->prayerpic))->EndInit();
			this->farmingpnl->ResumeLayout(false);
			this->farmingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->farmingpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->defencepic))->EndInit();
			this->woodcuttingpnl->ResumeLayout(false);
			this->woodcuttingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->woodcuttingpic))->EndInit();
			this->herblorepnl->ResumeLayout(false);
			this->herblorepnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->herblorepic))->EndInit();
			this->agilitypnl->ResumeLayout(false);
			this->agilitypnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->agilitypic))->EndInit();
			this->thievingpnl->ResumeLayout(false);
			this->thievingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->thievingpic))->EndInit();
			this->hppnl->ResumeLayout(false);
			this->hppnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->hppic))->EndInit();
			this->miningpnl->ResumeLayout(false);
			this->miningpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->miningpic))->EndInit();
			this->craftingpnl->ResumeLayout(false);
			this->craftingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->craftingpic))->EndInit();
			this->smithingpnl->ResumeLayout(false);
			this->smithingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->smithingpic))->EndInit();
			this->fishingpnl->ResumeLayout(false);
			this->fishingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fishingpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fletchingpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->hunterpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->slayerpic))->EndInit();
			this->cookingpnl->ResumeLayout(false);
			this->cookingpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cookingpic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->smallimage))->EndInit();
			this->settingtab->ResumeLayout(false);
			this->settingtab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->largeimage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->rangepic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->totalpic))->EndInit();
			this->grandexchangetab->ResumeLayout(false);
			this->searchpnl->ResumeLayout(false);
			this->searchpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->attackpic))->EndInit();
			this->calcstab->ResumeLayout(false);
			this->calcstab->PerformLayout();
			this->fletchingpnl->ResumeLayout(false);
			this->fletchingpnl->PerformLayout();
			this->runecraftingpnl->ResumeLayout(false);
			this->runecraftingpnl->PerformLayout();
			this->magicpnl->ResumeLayout(false);
			this->magicpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassulthealpic))->EndInit();
			this->fistofguthixpnl->ResumeLayout(false);
			this->fistofguthixpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fistofguthixpic))->EndInit();
			this->constructionpnl->ResumeLayout(false);
			this->constructionpnl->PerformLayout();
			this->barbarianassultcollectpnl->ResumeLayout(false);
			this->barbarianassultcollectpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassultcollectpic))->EndInit();
			this->dungeoneeringpnl->ResumeLayout(false);
			this->dungeoneeringpnl->PerformLayout();
			this->barbarianassultdefendpnl->ResumeLayout(false);
			this->barbarianassultdefendpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassultdefendpic))->EndInit();
			this->hunterpnl->ResumeLayout(false);
			this->hunterpnl->PerformLayout();
			this->slayerpnl->ResumeLayout(false);
			this->slayerpnl->PerformLayout();
			this->barbarianassultattackpnl->ResumeLayout(false);
			this->barbarianassultattackpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->barbarianassultattackpic))->EndInit();
			this->mobilisingarmiespnl->ResumeLayout(false);
			this->mobilisingarmiespnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->mobilisingarmiespic))->EndInit();
			this->cruciblepnl->ResumeLayout(false);
			this->cruciblepnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->cruciblepic))->EndInit();
			this->prayerpnl->ResumeLayout(false);
			this->prayerpnl->PerformLayout();
			this->rstoolkittabs->ResumeLayout(false);
			this->hiscoretab->ResumeLayout(false);
			this->hiscoretab->PerformLayout();
			this->activitiesbox->ResumeLayout(false);
			this->activitiesbox->PerformLayout();
			this->dominiontowerpnl->ResumeLayout(false);
			this->dominiontowerpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dominiontowerpic))->EndInit();
			this->conquestpnl->ResumeLayout(false);
			this->conquestpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->conquestpic))->EndInit();
			this->castlewarspnl->ResumeLayout(false);
			this->castlewarspnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->castlewarspic))->EndInit();
			this->barbarianassulthealpnl->ResumeLayout(false);
			this->barbarianassulthealpnl->PerformLayout();
			this->bountyhunterroguepnl->ResumeLayout(false);
			this->bountyhunterroguepnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bountyhunterroguepic))->EndInit();
			this->bountyhunterpnl->ResumeLayout(false);
			this->bountyhunterpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bountyhunterpic))->EndInit();
			this->dueltournamentpnl->ResumeLayout(false);
			this->dueltournamentpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dueltournamentpic))->EndInit();
			this->statsbox->ResumeLayout(false);
			this->statsbox->PerformLayout();
			this->defencepnl->ResumeLayout(false);
			this->defencepnl->PerformLayout();
			this->strengthpnl->ResumeLayout(false);
			this->strengthpnl->PerformLayout();
			this->attackpnl->ResumeLayout(false);
			this->attackpnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->avatarfull))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->avatarface))->EndInit();
			this->rangepnl->ResumeLayout(false);
			this->rangepnl->PerformLayout();
			this->totalpnl->ResumeLayout(false);
			this->totalpnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	DateTime updatetime;
	bool download_db;
	static array<String^>^ strArray = gcnew array<String^>(10);

	static array<String^>^ xp =  { "-1", "83", "174", "276", "388", "512", "650", "801", "969", "1154", "1358", "1584", "1833", "2107", "2411", "2746", "3115", "3523", "3973", "4470", "5018", "5624", "6291", "7028", "7842", "8740", "9730", "10824", "12031", "13363", "14833", "16456", "18247", "20224", "22406", "24815", "27473", "30408", "33648", "37224", "41171", "45529", "50339", "55649", "61512", "67983", "75127", "83014", "91721", "101333", "111945", "123660", "136594", "150872", "166636", "184040", "203254", "224466", "247886", "273742", "302288", "333804", "368599", "407015", "449428", "496254", "547953", "605032", "668051", "737627", "814445", "899256", "992895", "1096278", "1210421", "1336443", "1475581", "1629200", "1798808", "1986068", "2192818", "2421087", "2673114", "2951373", "3258594", "3597729", "3972294", "4385776", "4842295", "5346332", "5902831", "6517253", "7195629", "7944614", "8771558", "9684577", "10692629", "11805606", "13034431", "14391160", "15889108", "17542976", "19368991", "21385072", "23611005", "26068631", "28782068", "31777942", "35085653", "38737660", "42769799", "47221639", "52136868", "57563717", "63555442", "70170839", "77474827", "85539081", "94442736", "104273166", "115126838", "127110260", "140341028", "154948977", "171077457", "188884740", "200000000" };
	String^ rsnamevar;
    double^ scoresdbl;
    String^ currentlevel;
	public: array<String^>^ uservalues;
	public: array<double^>^ sortuservalues;
	public: DateTime updatetime;
    String^ itemsearched, webpagename, WebPage, itempage, imgid, item, minimg, itemprice, change, members, nextsearch;
    int^ pageno;
    String^ newwebpagename;
    String^ webpage;
	//public: String^ fname = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData);
	public: array<String^>^ scores;
    HttpClient^ httpClient;
	ToolTip^ tt;

		public: int^ oddeven(int Number)
        {
            if ((Number % 2) == 0)
            {
                return Number;
            }
            else
            {
                Number -= 1;
                return Number;
            }
        }
				
		public: int^ oddeven2(int Num)
        {
            if ((Num % 2) == 0)
            {
                Num = Num * 195;
                return Num;
            }
            else
            {
                Num = (Num * 195) - 65;
                return Num;
            }
        }
			
		public: String^ GetPageHTML(String^ URL)
        {
            WebClient^ wclient = gcnew WebClient;
            try
            {
                return System::Text::UTF8Encoding().GetString(wclient->DownloadData(URL));
            }
            catch (Exception^)
            {
                return "";
            }
        }
public: static System::Boolean^ IsNumeric(String str)
   {
			int gl = str.Length;
   for(int i = 0; i < gl; i++)
   {
	   if(!std::isdigit(str[i]))
	   {
		   return false;
	   }
   }
   return true;
   }
		
private: System::Void timezonetimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(timezonecombo->SelectedIndex == 0)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-12));
			 }
			 if(timezonecombo->SelectedIndex == 1)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-11));
			 }
			 if(timezonecombo->SelectedIndex == 2)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-10));
			 }
			 if(timezonecombo->SelectedIndex == 3)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-10));
			 }
			 if(timezonecombo->SelectedIndex == 4)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-8));
			 }
			 if(timezonecombo->SelectedIndex == 5)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-7));
			 }
			 if(timezonecombo->SelectedIndex == 6)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-7));
			 }
			 if(timezonecombo->SelectedIndex == 7)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-6));
			 }
			 if(timezonecombo->SelectedIndex == 8)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-6));
			 }
			 if(timezonecombo->SelectedIndex == 9)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-6));
			 }
			 if(timezonecombo->SelectedIndex == 10)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-6));
			 }
			 if(timezonecombo->SelectedIndex == 11)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-5));
			 }
			 if(timezonecombo->SelectedIndex == 12)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-5));
			 }
			 if(timezonecombo->SelectedIndex == 13)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-4));
			 }
			 if(timezonecombo->SelectedIndex == 14)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-4));
			 }
			 if(timezonecombo->SelectedIndex == 15)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-4));
			 }
			 if(timezonecombo->SelectedIndex == 16)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-3));
			 }
			 if(timezonecombo->SelectedIndex == 17)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-3));
			 }
			 if(timezonecombo->SelectedIndex == 18)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-3));
			 }
			 if(timezonecombo->SelectedIndex == 19)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-3));
			 }
			 if(timezonecombo->SelectedIndex == 20)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-2));
			 }
			 if(timezonecombo->SelectedIndex == 21)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-1));
			 }
			 if(timezonecombo->SelectedIndex == 22)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(-1));
			 }
			 if(timezonecombo->SelectedIndex == 23)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(0));
			 }
			 if(timezonecombo->SelectedIndex == 24)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(0));
			 }
			 if(timezonecombo->SelectedIndex == 25)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(1));
			 }
			 if(timezonecombo->SelectedIndex == 26)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(1));
			 }
			 if(timezonecombo->SelectedIndex == 27)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(1));
			 }
			 if(timezonecombo->SelectedIndex == 28)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(1));
			 }
			 if(timezonecombo->SelectedIndex == 29)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(1));
			 }
			 if(timezonecombo->SelectedIndex == 30)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(2));
			 }
			 if(timezonecombo->SelectedIndex == 31)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(2));
			 }
			 if(timezonecombo->SelectedIndex == 32)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(2));
			 }
			 if(timezonecombo->SelectedIndex == 33)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(2));
			 }
			 if(timezonecombo->SelectedIndex == 34)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(2));
			 }
			 if(timezonecombo->SelectedIndex == 35)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(2));
			 }
			 if(timezonecombo->SelectedIndex == 36)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(3));
			 }
			 if(timezonecombo->SelectedIndex == 37)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(3));
			 }
			 if(timezonecombo->SelectedIndex == 38)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(3));
			 }
			 if(timezonecombo->SelectedIndex == 39)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(3));
			 }
			 if(timezonecombo->SelectedIndex == 40)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(3).AddMinutes(30));
			 }
			 if(timezonecombo->SelectedIndex == 41)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(4));
			 }
			 if(timezonecombo->SelectedIndex == 42)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(4));
			 }
			 if(timezonecombo->SelectedIndex == 43)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(4));
			 }
			 if(timezonecombo->SelectedIndex == 44)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(5));
			 }
			 if(timezonecombo->SelectedIndex == 45)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(5));
			 }
			 if(timezonecombo->SelectedIndex == 46)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(5).AddMinutes(30));
			 }
			 if(timezonecombo->SelectedIndex == 47)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(5).AddMinutes(45));
			 }
			 if(timezonecombo->SelectedIndex == 48)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(6));
			 }
			 if(timezonecombo->SelectedIndex == 49)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(6));
			 }
			 if(timezonecombo->SelectedIndex == 50)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(6));
			 }
			 if(timezonecombo->SelectedIndex == 51)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(6).AddMinutes(30));
			 }
			 if(timezonecombo->SelectedIndex == 52)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(7));
			 }
			 if(timezonecombo->SelectedIndex == 53)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(7));
			 }
			 if(timezonecombo->SelectedIndex == 54)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(8));
			 }
			 if(timezonecombo->SelectedIndex == 55)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(8));
			 }
			 if(timezonecombo->SelectedIndex == 56)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(8));
			 }
			 if(timezonecombo->SelectedIndex == 57)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(8));
			 }
			 if(timezonecombo->SelectedIndex == 58)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(8));
			 }
			 if(timezonecombo->SelectedIndex == 59)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(9));
			 }
			 if(timezonecombo->SelectedIndex == 60)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(9));
			 }
			 if(timezonecombo->SelectedIndex == 61)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(9));
			 }
			 if(timezonecombo->SelectedIndex == 62)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(9).AddMinutes(30));
			 }
			 if(timezonecombo->SelectedIndex == 63)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(9).AddMinutes(30));
			 }
			 if(timezonecombo->SelectedIndex == 64)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(10));
			 }
			 if(timezonecombo->SelectedIndex == 65)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(10));
			 }
			 if(timezonecombo->SelectedIndex == 66)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(10));
			 }
			 if(timezonecombo->SelectedIndex == 67)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(10));
			 }
			 if(timezonecombo->SelectedIndex == 68)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(10));
			 }
			 if(timezonecombo->SelectedIndex == 69)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(11));
			 }
			 if(timezonecombo->SelectedIndex == 70)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(12));
			 }
			 if(timezonecombo->SelectedIndex == 71)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(12));
			 }
			 if(timezonecombo->SelectedIndex == 72)
			 {
				 DateTime dt = System::DateTime::UtcNow;
				 timezonetxt->Text = Convert::ToString(dt.AddHours(13));
			 }
			 if(updatetime == DateTime::UtcNow)
			 {
				 checkdb(sender, e);
				 updatetime = DateTime::UtcNow.AddMinutes(30);
			 }
		 }
private: System::Void checkdb(System::Object^ sender, System::EventArgs^ e){
					  download_db = false;
				  }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		updatetime = DateTime::UtcNow.AddMinutes(30);

		if(download_db == true)
		{
			checkdb(sender, e);
		}
		 }
};
}

