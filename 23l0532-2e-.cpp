#include <fstream>
#include <SFML/Graphics.hpp>
#include "TextBox.h"
#include"Header.h"
using namespace sf;


bool check(string a, string b, string& d)
{
	ifstream fin("userName.txt");
	ifstream fn("userPassword.txt");
	ifstream f("userEmail.txt");

	string email, password;

	while (getline(fin, email) && getline(fn, password), getline(f, d)) {
		if (email.length() != a.length() || password.length() != b.length()) {
			continue;
		}

		bool match = true;
		for (int i = 0; i < email.length(); i++) {
			if (email[i] != a[i]) {
				match = false;
				break;
			}
		}

		if (match) {
			for (int i = 0; i < password.length(); i++) {
				if (password[i] != b[i]) {
					match = false;
					break;
				}
			}
		}

		if (match) {
			return true;
		}
	}

	return false;

}
bool check1(string a)
{
	ifstream fin("userName.txt");
	ifstream fn("userPassword.txt");

	string email, password;

	while (getline(fin, email)) {
		if (email.length() != a.length()) {
			continue;
		}
		bool match = true;
		for (int i = 0; i < email.length(); i++) {
			if (email[i] != a[i]) {
				match = false;
				break;
			}
		}
		if (match) {
			return true;
		}
	}

	return false;
}
bool check3(string a) {
	bool flag = 0; int temp = 0;
	char arr[] = { "@gmail.com" };
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == arr[0]) {
			for (int j = 1, k = i + 1; j < strlen(arr), k < a.length(); k++, j++) {
				if (arr[j] != a[k]) {
					flag = 0;
					break;
				}
				flag = 1;
				temp++;
			}
		}
	}
	if (flag && temp == 9) {
		return 0;
	}
	return 1;
}
bool check2(string a) {

	ifstream fin("userName.txt");

	string email;

	while (getline(fin, email)) {
		if (email.length() != a.length()) {
			continue;
		}

		bool match = true;
		for (int i = 0; i < email.length(); i++) {
			if (email[i] != a[i]) {
				match = false;
				break;
			}
		}

		if (match) {
			return true;
		}
	}

	return false;

}
int scene = 0, i = 1;
scn2 scene2;
scn3 scene3;
scn4 scene4;
scn4 scene5;
scn4 scene6;
scn4 scene7;
scn4 scene8;
scn4 scene9;

bool first = true;
int main()
{
	user u_obj;
	//u_obj.setuserName("a");
	//u_obj.loadMemory();
	//int count = u_obj.getfriendcount();
	//int l = 0;//for friend count
	//user u1(u_obj.getFriend(l));
	//u1.loadMemory();
	//int count1 = u1.getpostCount();
	//int m = 0;//friend post count
	//u_obj.setemail("a");
	//int count2 = u_obj.getpostCount();
	int count;
	int l = 0;
	user u1;
	int count1;
	int count2;
	int m;

	RenderWindow window(VideoMode(1000, 600), "Nufil's APP");

	Texture r1, r2, r3, r3a, r3b, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21;

	r1.loadFromFile("Project.png");
	r2.loadFromFile("Choose Option.png");
	r3.loadFromFile("log.png");
	r4.loadFromFile("Social Media APP.png");
	r3a.loadFromFile("PUBLIC.png");
	r3b.loadFromFile("Create-Account.png");
	r5.loadFromFile("loginSuccess.png");
	r6.loadFromFile("loginError.png");
	r7.loadFromFile("GO BACK!!!.png");
	r8.loadFromFile("accountcreated.png");
	r9.loadFromFile("error1.png");
	r10.loadFromFile("FEED.png");
	r11.loadFromFile("FEED2.png");
	r13.loadFromFile("message.png");
	r14.loadFromFile("TYPE.png");
	r15.loadFromFile("click to type.png");
	r16.loadFromFile("addpost.png");
	r17.loadFromFile("addpost1.png");
	r18.loadFromFile("comment.png");
	r19.loadFromFile("comment1.png");
	r20.loadFromFile("userpost.png");

	Sprite Login(r3), select(r2), signup(r4), logo(r1), pub(r3a), pri(r3b), success(r5), error(r6), exist(r7), created(r8), error1(r9);
	Sprite feed(r10), feed1(r11), post1, mess(r13), addfriend(r14), addpost(r16), addpost1(r17), comment(r18), comment1(r19);
	Sprite userpost(r20), userpost1;



	float scaleX = static_cast<float>(window.getSize().x) / r3.getSize().x;
	float scaleY = static_cast<float>(window.getSize().y) / r3.getSize().y;
	Login.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r2.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r2.getSize().y;
	select.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r4.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r4.getSize().y;
	signup.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r1.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r1.getSize().y;
	logo.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r3a.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r3a.getSize().y;
	pub.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r3b.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r3b.getSize().y;
	pri.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r5.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r5.getSize().y;
	success.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r6.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r6.getSize().y;
	error.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r7.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r7.getSize().y;
	exist.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r8.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r8.getSize().y;
	created.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r9.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r9.getSize().y;
	error1.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r10.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r10.getSize().y;
	feed.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r11.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r11.getSize().y;
	feed1.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r13.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r13.getSize().y;
	mess.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r16.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r16.getSize().y;
	addpost.setScale(scaleX, scaleY);
	scaleX = static_cast<float>(window.getSize().x) / r17.getSize().x;
	scaleY = static_cast<float>(window.getSize().y) / r17.getSize().y;
	addpost1.setScale(scaleX, scaleY);
	scaleY = static_cast<float>(window.getSize().y) / r18.getSize().y;
	comment.setScale(scaleX, scaleY);
	scaleY = static_cast<float>(window.getSize().y) / r19.getSize().y;
	comment1.setScale(scaleX, scaleY);
	scaleY = static_cast<float>(window.getSize().y) / r20.getSize().y;
	userpost.setScale(scaleX, scaleY);

	Font arial;
	arial.loadFromFile("Arial.ttf");

	Textbox textLoginEmail(25, Color::Black, false);
	textLoginEmail.setFont(arial);
	Textbox textLoginPassword(25, Color::Black, false);
	textLoginPassword.setFont(arial);
	Textbox textRegisterEmail(25, Color::White, false);
	textRegisterEmail.setFont(arial);
	Textbox textRegisterConfirmEmail(25, Color::White, false);
	textRegisterConfirmEmail.setFont(arial);
	Textbox textRegisterPassword(25, Color::White, false);
	textRegisterPassword.setFont(arial);
	Textbox textRegisterConfirmPassword(25, Color::White, false);
	textRegisterConfirmPassword.setFont(arial);
	Textbox friendsearch(25, Color::Black, false);
	friendsearch.setFont(arial);
	Textbox sendmsg(22, Color::Black, false);
	sendmsg.setFont(arial);
	Textbox addfrd(25, Color::Black, false);
	addfrd.setFont(arial);
	Textbox addpt(25, Color::Black, false);
	addpt.setFont(arial);
	Textbox addpt2(25, Color::Black, false);
	addpt2.setFont(arial);
	Textbox addcom(23, Color::Black, false);
	addcom.setFont(arial);

Text username("ahmad ", arial, 22);
	username.setFillColor(Color::Black);
	username.setPosition(170, 60);
	username.setStyle(Text::Underlined);

Text f_name("", arial, 24);
	f_name.setFillColor(Color::Black);
	f_name.setPosition(170, 215);
	f_name.setStyle(Text::Bold);

	Text p_caption("", arial, 16);
	p_caption.setFillColor(Color::Black);
	p_caption.setPosition(190, 247);

	Text msg("", arial, 20);
	msg.setFillColor(Color::Black);
	msg.setPosition(155, 220);

	Text com("", arial, 20);
	com.setFillColor(Color::Black);
	com.setPosition(155, 220);

	Text msg1("", arial, 20);
	msg.setFillColor(Color::Black);
	msg.setPosition(155, 220);

	Text msg2("", arial, 24);
	msg2.setFillColor(Color::Black);
	msg2.setPosition(370, 535);

	Text userna("", arial, 22);
	userna.setFillColor(Color::Black);
	userna.setPosition(290, 71);

	Text useremail("", arial, 22);
	useremail.setFillColor(Color::Black);
	useremail.setPosition(245, 127);

	Text postcount("", arial, 24);
	postcount.setFillColor(Color::Black);
	postcount.setPosition(772, 87);

	Text f_name1("", arial, 24);
	f_name1.setFillColor(Color::Black);
	f_name1.setPosition(170, 215);
	f_name1.setStyle(Text::Bold);

	Text p_caption1("", arial, 16);
	p_caption1.setFillColor(Color::Black);
	p_caption1.setPosition(190, 247);

	bool flag = 0, flag3 = 0, flag4 = 0;
	int temp = 0;

	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
			{
				window.close();
			}
			if (e.type == Event::MouseButtonPressed)
			{
				if (e.key.code == Mouse::Left)
				{
					int x = Mouse::getPosition(window).x;
					int y = Mouse::getPosition(window).y;
					/*double x = Mouse::getPosition(*window).x * (window->getDefaultView().getSize().x/relevantWindowSize.x);
					double y = Mouse::getPosition(*window).x * (window->getDefaultView().getSize().y / relevantWindowSize.y);*/
					if (scene == 0) {
						if (x >= 0 && x <= 1000 && y >= 0 && y <= 600)
							scene = 1;
					}
					else if (scene == 1)
					{
						if (x >= 380 && x <= 630 && y >= 200 && y <= 395)
						{
							//LOGIN
							scene = 2;
						}
						if (x >= 380 && x <= 630 && y >= 420 && y <= 595)
						{
							//SignUp
							scene = 3;
						}

					}
					else if (scene == 2)
					{//back
						if (x >= 36 && x <= 128 && y >= 30 && y <= 103)
						{
							scene = 1;
						}
						if (x >= 250 && x <= 750 && y >= 300 && y <= 350)
						{
							// click on email
							scene2.email = true;
							textLoginEmail.setSelected(true);
						}
						if (x >= 250 && x <= 750 && y >= 450 && y <= 500)
						{
							//click on password
							scene2.password = true;
							textLoginPassword.setSelected(true);
						}
						//submit
						if (x >= 250 && x <= 750 && y >= 520 && y <= 600)
						{

							bool valid = false;
							string e, p;
							e = textLoginEmail.getText();
							p = textLoginPassword.getText();
							string d;
							if (e.empty() == false && p.empty() == false)
							{
								if (check(e, p, d))
								{
									valid = true;
								}

							}
							else {
								scene = 5;
							}
							if (valid)
							{
								scene = 4;
								u_obj.setuserName(e);
								u_obj.setPassword(p);
								u_obj.setemail(d);
								u_obj.loadMemory();
								username.setString(e);
								userna.setString(u_obj.getuserName());
								useremail.setString(u_obj.getemail());
								postcount.setString(to_string(u_obj.getpostCount()));
								count = u_obj.getfriendcount();
								l = 0;//for friend count
								u1.setuserName(u_obj.getFriend(l));
								u1.loadMemory();
								count1 = u1.getpostCount();
								m = 0;//friend post count
								count2 = u_obj.getpostCount();
								if (count1 > 0) {
									r12.loadFromFile(u1.getpostpicId(m) + ".jpg");
									post1.setTexture(r12);
									post1.setPosition(145, 280);
									post1.setScale(0.695f, 0.41f);
									f_name.setString(u1.getuserName());
									p_caption.setString(u1.getposttxt(m));
								}
							}
							else
							{
								scene = 5;
							}
						}

					}
					else if (scene == 4)
					{//loginSuccess
						if (x >= 320 && x <= 670 && y >= 400 && y <= 500)
							scene = 9;
					}
					else if (scene == 5)
					{//error

						if (x >= 36 && x <= 128 && y >= 30 && y <= 103)
						{
							scene = 2;
						}
					}
					else if (scene == 6)
					{//accountExists

						if (x >= 36 && x <= 128 && y >= 30 && y <= 103)
						{

							scene = 3;
						}
					}
					else if (scene == 8)
					{//account error

						if (x >= 36 && x <= 128 && y >= 30 && y <= 103)
						{
							scene = 3;
						}
					}
					else if (scene == 7)
					{//Account Created
						if (x >= 320 && x <= 670 && y >= 325 && y <= 425)
							scene = 1;
					}
					else if (scene == 12) {
						//back
						if (x >= 20 && x <= 105 && y >= 25 && y <= 95)
						{
							scene = 9;
							flag3 = 0;

						}//picid
						if (x >= 180 && x <= 820 && y >= 140 && y <= 210)
						{
							scene7.txt = true;
							addpt.setSelected(true);

						}//caption
						if (x >= 180 && x <= 820 && y >= 258 && y <= 417)
						{
							scene8.txt = true;
							addpt2.setSelected(true);

						}//enter
						if (x >= 400 && x <= 599 && y >= 457 && y <= 600)
						{
							string e, p;
							e = addpt.getText();
							p = addpt2.getText();
							if (e.empty() == false && p.empty() == false)
							{
								u_obj.addpost(p, e);
								flag3 = 1;
							}

						}
					}
					else if (scene == 10)
					{//message
					//back
						bool flag3 = 0;
						if (x >= 10 && x <= 102 && y >= 17 && y <= 92)
						{
							scene = 9;
						}//enter friend name
						if (x >= 125 && x <= 800 && y >= 70 && y <= 145)
						{
							scene4.txt = true;
							friendsearch.setSelected(true);

						}
						//search message
						if (x >= 820 && x <= 875 && y >= 70 && y <= 145)
						{
							string e = friendsearch.getText();
							flag3 = u_obj.checkfriend(e);
							//cout << flag3;
						}
						if (flag3) {
							string* s = u_obj.loadmessage(friendsearch.getText());
							float windowWidth = 792;

							float textWidth = msg.getLocalBounds().width;
							if (s[0] != "-1") {

								char* arr = new char[1000];
								int i = 0, k = 0;

								for (int j = 0; j <= u_obj.getmsgcount(); j++) {

									int i;
									for (i = 0; s[j][i] != '\0'; i++) {
										arr[k++] = s[j][i];
									}
									arr[k++] = '\n';
									//cout << arr;
								}
								arr[k] = '\0';
								msg.setString(arr);
							}
							else {
								msg.setString("\nNO previous message history found");
								msg.setFillColor(Color::Red);
								msg.setPosition(155, 220);
							}

						}

						//enter  message
						if (x >= 157 && x <= 840 && y >= 280 && y <= 450)
						{
							scene5.txt = true;
							sendmsg.setSelected(true);
						}
						//send message
						if (x >= 428 && x <= 576 && y >= 500 && y <= 550)
						{
							u_obj.sendmessage(friendsearch.getText(), sendmsg.getText());
							msg1.setString("\nMessage sent");
							msg1.setFillColor(Color::Black);
							msg1.setPosition(600, 870);
						}
					}//addfriend
					//comment
					else if (scene == 13) {
						//back
						if (x >= 10 && x <= 102 && y >= 17 && y <= 92)
						{
							flag4 = 0;
							scene = 9;

						}
						string* s = u1.loadcomments(m);
						if (s[0] != "-1") {

							char* arr = new char[1000];
							int i = 0, k = 0;

							for (int j = 0; j < u1.getcommCount(m); j++) {

								int i;
								for (i = 0; s[j][i] != '\0'; i++) {
									arr[k++] = s[j][i];
								}
								arr[k++] = '\n';
								//cout << arr;
							}
							arr[k] = '\0';
							com.setString(arr);
						}
						else {
							com.setString("\nNO previous comment history found");
							com.setFillColor(Color::Red);
							com.setPosition(155, 220);
						}

						//write comment
						if (x >= 157 && x <= 840 && y >= 400&& y <= 450)
						{
							scene9.txt = true;
							addcom.setSelected(true);
						}
						//add comment
						if (x >= 412 && x <= 600 && y >= 500 && y <= 500)
						{
							string e = addcom.getText();
							if (e.empty() == false) {

								u1.addcomment(addcom.getText(), m, u_obj.getuserName());
								flag4 = 1;
							}
						}
					}
					else if (scene == 14) {
						//back
						if (x >= 23 && x <= 112 && y >= 17 && y <= 92)
						{
							scene = 9; m = 0;
						}
						userna.setString(u_obj.getuserName());
						useremail.setString(u_obj.getemail());
						postcount.setString(to_string(u_obj.getpostCount()));
						//logout
						if (x >= 880 && x <= 964 && y >= 52 && y <= 155) {
							scene = 2;
						}
						//like
						if (x >= 245 && x <= 330 && y >= 500 && y <= 550)
						{
							if (flag)
								flag = 0;
							else
								flag = 1;
						}//comment
						if (x >= 645 && x <= 760 && y >= 500 && y <= 550)
						{
							scene = 13;
						}
						if (u_obj.getpostCount() > 0) {
							if (x >= 890 && x <= 974 && y >= 520 && y <= 589)
							{

								if (m < count2 - 1) {
									m++;
								}
								r21.loadFromFile(u_obj.getpostpicId(m) + ".jpg");
								userpost1.setTexture(r21);
								userpost1.setPosition(145, 280);

								userpost1.setScale(0.695f, 0.41f);

								f_name1.setString(u_obj.getuserName());
								p_caption1.setString(u_obj.getposttxt(m));

							}//backpost
							if (x >= 20 && x <= 107 && y >= 300 && y <= 350)
							{

								m--;
								if (m < 0)
									m++;
							}
							r21.loadFromFile(u_obj.getpostpicId(m) + ".jpg");
							userpost1.setTexture(r21);
							userpost1.setPosition(145, 280);
							userpost1.setScale(0.695f, 0.54f);
							f_name1.setString(u_obj.getuserName());
							p_caption1.setString(u_obj.getposttxt(m));

						}
					}
					else if (scene == 11) {
						//back
						if (x >= 12 && x <= 100 && y >= 17 && y <= 92)
						{
							scene = 9;
							msg2.setString("");
							addfriend.setTexture(r14);
						}//Entername
						if (x >= 55 && x <= 810 && y >= 95 && y <= 175)
						{
							scene5.txt = true;
							addfrd.setSelected(true);

						}//serachName
						if (x >= 835 && x <= 905 && y >= 95 && y <= 175)
						{
							if (check1(addfrd.getText())) {
								msg2.setString("Account Found!!!");
							}
							else
								msg2.setString("Account Not Found!!!");
						}
						if (x >= 395 && x <= 616 && y >= 425 && y <= 590)
						{
							string e = addfrd.getText();

							if (e.empty() == false)
							{

								ifstream f(addfrd.getText() + "postcount.txt");
								int num, num2;
								f >> num;
								f >> num2;
								f.close();
								ofstream fw(addfrd.getText() + "postcount.txt");
								fw << num << endl << ++num2;
								fw.close();
								ofstream f1(addfrd.getText() + "friends.txt", ios::app);
								f1 << u_obj.getuserName() << endl;
								f1.close();

								addfriend.setTexture(r15);
							}
						}

					}
					else if (scene == 9)
					{//NewsFeed
						//like
						if (x >= 245 && x <= 330 && y >= 260 && y <= 398)
						{
							if (flag)
								flag = 0;
							else
								flag = 1;
						}//comment
						if (x >= 645 && x <= 760 && y >= 535 && y <= 600)
						{
							scene = 13;
						}
						//addfriend
						if (x >= 732 && x <= 928 && y >= 11 && y <= 68)
						{
							scene = 11;
						}//addpost
						if (x >= 732 && x <= 928 && y >= 76 && y <= 133)
						{
							scene = 12;
						}//message
						if (x >= 732 && x <= 928 && y >= 141 && y <= 193)
						{
							scene = 10;
						}//userpost
						if (x >= 295 && x <= 660 && y >= 30 && y <= 127)
						{
							scene = 14; m = 0; if (u_obj.getpostCount() > 0) {
								r21.loadFromFile(u_obj.getpostpicId(m) + ".jpg");
								userpost1.setTexture(r21);
								userpost1.setPosition(145, 280);
								userpost1.setScale(0.695f, 0.54f);
								p_caption1.setString(u_obj.getposttxt(m));

							}
							f_name1.setString(u_obj.getuserName());

						}
						//nextpost
						if (count1 > 0) {
							if (x >= 890 && x <= 974 && y >= 520 && y <= 589)
							{
								//flag = 0;
								m++;
								if (m >= count1) {
									if (l + 1 < count) {
										l++;
										m = 0;
										u1.setuserName(u_obj.getFriend(l));
										u1.loadMemory();
										count1 = u1.getpostCount();
									}
									else
										m--;
								}
								r12.loadFromFile(u1.getpostpicId(m) + ".jpg");
								post1.setTexture(r12);
								post1.setPosition(145, 280);
								post1.setScale(0.695f, 0.41f);
								f_name.setString(u1.getuserName());
								p_caption.setString(u1.getposttxt(m));

							}//backpost
							if (x >= 20 && x <= 107 && y >= 520 && y <= 589)
							{

								m--;
								if (m < 0) {
									if (l > 0 && l < count) {
										l--;

										u1.setuserName(u_obj.getFriend(l));
										u1.loadMemory();
										count1 = u1.getpostCount();
										m = count1 - 1;
									}
									else
										m++;
								}
								r12.loadFromFile(u1.getpostpicId(m) + ".jpg");
								post1.setTexture(r12);
								post1.setPosition(145, 280);
								post1.setScale(0.695f, 0.41f);
								f_name.setString(u1.getuserName());
								p_caption.setString(u1.getposttxt(m));

							}
						}
					}
					else if (scene == 3)
					{
						if (x >= 215 && x <= 253 && y >= 200 && y <= 250)
						{
							temp = 1;
						}
						if (x >= 500 && x <= 538 && y >= 200 && y <= 250)
						{
							temp = 2;
						}

						//back
						if (x >= 36 && x <= 128 && y >= 30 && y <= 103)
						{
							scene = 1;
						}//email
						if (x >= 205 && x <= 755 && y >= 260 && y <= 330)
						{
							scene3.email = true;
							textRegisterEmail.setSelected(true);
						}
						//username
						if (x >= 205 && x <= 755 && y >= 350 && y <= 400)
						{
							scene3.confirmEmail = true;
							textRegisterConfirmEmail.setSelected(true);
						}
						//password
						if (x >= 205 && x <= 755 && y >= 450 && y <= 470) {
							scene3.password = true;
							textRegisterPassword.setSelected(true);
						}
						//confirm password
						if (x >= 205 && x <= 755 && y >= 471 && y <= 520)
						{
							scene3.confirmPassword = true;
							textRegisterConfirmPassword.setSelected(true);
						}
						//submit
						if (x >= 205 && x <= 755 && y >= 520 && y <= 600)
						{
							string e, ce, p, cp, d;
							e = textRegisterEmail.getText();
							ce = textRegisterConfirmEmail.getText();
							p = textRegisterPassword.getText();
							cp = textRegisterConfirmPassword.getText();
							if (e.empty() == false && ce.empty() == false && p.empty() == false && cp.empty() == false)
							{
								if (p == cp)
								{
									bool valid = 0;

									if (check2(ce))
									{
										valid = true;
									}
									if (check3(e)) {
										valid = 1;
									}
									if (valid)
									{
										scene = 6;
									}
									else
									{
										ofstream fout("userName.txt", ios::app);
										fout << ce << endl;
										fout.close();
										ofstream fw("userPassword.txt", ios::app);
										fw << p << endl;
										fw.close();
										ofstream f("userEmail.txt", ios::app);
										f << e << endl;
										f.close();

										scene = 7;
									}

								}
							}
							else {
								scene = 8;
							}
						}
					}
				}
			}
			if (e.type == Event::TextEntered)
			{
				if (scene == 2)
				{
					if (scene2.email == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							textLoginEmail.setSelected(false);
							scene2.email = false;
						}
						else
						{
							textLoginEmail.typedOn(e);
						}
					}
					else if (scene2.password == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							textLoginPassword.setSelected(false);
							scene2.password = false;
						}
						else
						{
							textLoginPassword.typedOn(e);
						}
					}
				}
				else if (scene == 13) {
					if (scene9.txt == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							addcom.setSelected(false);
							scene9.txt = false;
						}
						else
						{
							addcom.typedOn(e);
						}
					}

				}
				else if (scene == 12)
				{
					if (scene7.txt == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							addpt.setSelected(false);
							scene7.txt = false;
						}
						else
						{
							addpt.typedOn(e);
						}
					}
					else if (scene8.txt == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							addpt2.setSelected(false);
							scene8.txt = false;
						}
						else
						{
							addpt2.typedOn(e);
						}
					}
				}

				else if (scene == 10) {
					if (scene4.txt == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							friendsearch.setSelected(false);
							scene4.txt = false;
						}
						else
						{
							friendsearch.typedOn(e);
						}
					}
					if (scene5.txt == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							sendmsg.setSelected(false);
							scene5.txt = false;
						}
						else
						{
							sendmsg.typedOn(e);
						}
					}

				}

				else if (scene == 11) {
					if (scene5.txt == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							friendsearch.setSelected(false);
							scene4.txt = false;
						}
						else
						{
							addfrd.typedOn(e);
						}
					}
				}

				else if (scene == 3)
				{
					if (scene3.email == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							textRegisterEmail.setSelected(false);
							scene3.email = false;
						}
						else
						{
							textRegisterEmail.typedOn(e);
						}
					}
					else if (scene3.confirmEmail == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							textRegisterConfirmEmail.setSelected(false);
							scene3.confirmEmail = false;
						}
						else
						{
							textRegisterConfirmEmail.typedOn(e);
						}
					}
					else if (scene3.password == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							textRegisterPassword.setSelected(false);
							scene3.password = false;
						}
						else
						{
							textRegisterPassword.typedOn(e);
						}
					}
					else if (scene3.confirmPassword == true)
					{
						if (Keyboard::isKeyPressed(Keyboard::Return))
						{
							textRegisterConfirmPassword.setSelected(false);
							scene3.confirmPassword = false;
						}
						else
						{
							textRegisterConfirmPassword.typedOn(e);
						}
					}
				}
			}
		}
		window.clear(Color(104, 167, 92));
		if (scene == 0) {
			window.draw(logo);
		}
		else if (scene == 1)
		{
			window.draw(select);
		}
		else if (scene == 2)
		{
			window.draw(Login);
			textLoginEmail.setPosition({ 260,302 });
			textLoginEmail.drawTo(window);
			textLoginPassword.setPosition({ 260,350 });
			textLoginPassword.drawTo(window);
		}
		else if (scene == 3)
		{
			if (temp == 1) {
				window.draw(pub);
			}
			else if (temp == 2) {
				window.draw(pri);
			}
			else
				window.draw(signup);
			textRegisterEmail.setPosition({ 215, 300 });
			textRegisterEmail.drawTo(window);
			textRegisterConfirmEmail.setPosition({ 215,305 });
			textRegisterConfirmEmail.drawTo(window);
			textRegisterPassword.setPosition({ 217,435 });
			textRegisterPassword.drawTo(window);
			textRegisterConfirmPassword.setPosition({ 215,500 });
			textRegisterConfirmPassword.drawTo(window);
		}
		else if (scene == 4)
		{
			window.draw(success);
		}
		else if (scene == 5) {
			window.draw(error);
		}
		else if (scene == 6) {
			window.draw(exist);
		}
		else if (scene == 7) {
			window.draw(created);
		}
		else if (scene == 8) {
			window.draw(error1);
		}
		else if (scene == 9) {
			if (flag) {
				window.draw(feed1);
			}
			else {
				window.draw(feed);
			}
			window.draw(username);
			window.draw(post1);
			window.draw(f_name);
			window.draw(p_caption);
		}
		else if (scene == 10) {
			window.draw(mess);
			friendsearch.setPosition({ 139,98 });
			friendsearch.drawTo(window);
			window.draw(msg);
			sendmsg.setPosition({ 168,550 });
			sendmsg.drawTo(window);
			window.draw(msg1);
		}
		else if (scene == 11) {
			window.draw(addfriend);
			addfrd.setPosition({ 102,123 });
			addfrd.drawTo(window);
			window.draw(msg2);
		}
		else if (scene == 12) {
			if (!flag3) {
				window.draw(addpost1);
			}

			else
				window.draw(addpost);
			addpt.setPosition({ 205,360 });
			addpt.drawTo(window);
			addpt2.setPosition({ 204,488 });
			addpt2.drawTo(window);

		}
		else if (scene == 13) {
			if (!flag4)
				window.draw(comment1);
			else
				window.draw(comment);
			window.draw(com);
			addcom.setPosition({ 170,501 });
			addcom.drawTo(window);
		}
		else if (scene == 14) {
			window.draw(userpost);
			window.draw(userna);
			window.draw(useremail);
			window.draw(postcount);
			window.draw(userpost1);
			window.draw(f_name1);
			window.draw(p_caption1);

		}
		window.display();
	}

	return 0;
}