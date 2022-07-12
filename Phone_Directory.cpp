#include<bits/stdc++.h>
#include<fstream>
using namespace std;


int exists(string s);                    //To check whether the contact exists or not
void updatename(string s);               //To update name of contact.
void updatecontact(string s);            //To update phone number of contact.
void updateemail(string s);              //To update email of contact.
void updatedob(string s);                //To update date of birth of contact.
void updatetitle(string s);              //To update title of contact.
void remove_contact();                   //To delete the contact from list.
void update();                           //To update an existing contact
void findinlist();                       //To search whether the contact exists or not
void add();                              //To add a new contact in list.

/**********************************************************************************************************************************************/

struct details
{
    string title;
    string name;
    string phone_no;
    string email;
    string dob;
};

/**********************************************************************************************************************************************/

void updatename(string s)
{
    int flag=0,len,i,c;
    struct details t;
    len=s.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(s[i]);
    }
    r[i]='\0';
    s=r;
    string extra,y;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    fstream file2("dupli.txt");
    file2.open("dupli.txt", ios::in | ios ::out | ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=s)
       {
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       else
       {
           cout<<"Enter the new name ";
           getline(cin>>ws,t.name);
           len=(t.name).length();
           char b[len+1];
           for(i=0;i<len;i++)
           {
               b[i]=toupper(t.name[i]);
           }
           b[i]='\0';
           y=b;
           int check=exists(y);
           while(check)
           {
               cout<<"The name already exists.To update again press 1 else press 0"<<endl;
               cin>>c;
               if(c)
               {
                   cout<<"Enter the new name ";
                   getline(cin>>ws,t.name);
                   len=(t.name).length();
                   char c[len+1];
                   for(i=0;i<len;i++)
                   {
                       c[i]=toupper(t.name[i]);
                   }
                   c[i]='\0';
                   y=c;
                   check=exists(y);
               }
               else
               {
                   return ;
               }
            }
            file2<<t.name<<endl;
            file2<<t.phone_no<<endl;
            file2<<t.email<<endl;
            file2<<t.dob<<endl;
            file2<<t.title<<endl<<endl;
        }
        getline(file,extra);
        getline(file,t.name);
        len=(t.name).length();
        char d[len+1];
        for(i=0;i<len;i++)
        {
           d[i]=toupper(t.name[i]);
        }
        d[i]='\0';
        y=d;
        getline(file,t.phone_no);
        getline(file,t.email);
        getline(file,t.dob);
        getline(file,t.title);
    }
    file.close();
    file2.close();
    remove("Contact_list.txt");
    rename("dupli.txt","Contact_list.txt");
}

/**********************************************************************************************************************************************/

void updatecontact(string s)
{
    int flag=0,len,i;
    struct details t;
    len=s.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(s[i]);
    }
    r[i]='\0';
    s=r;
    string extra,y;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    fstream file2("dupli.txt");
    file2.open("dupli.txt", ios::in | ios ::out | ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=s)
       {
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       else
       {
           cout<<"Enter the new Phone number ";
           getline(cin>>ws,t.phone_no);
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
        }
        getline(file,extra);
        getline(file,t.name);
        len=(t.name).length();
        char b[len+1];
        for(i=0;i<len;i++)
        {
            b[i]=toupper(t.name[i]);
        }
        b[i]='\0';
        y=b;
        getline(file,t.phone_no);
        getline(file,t.email);
        getline(file,t.dob);
        getline(file,t.title);
    }
    file.close();
    file2.close();
    remove("Contact_list.txt");
    rename("dupli.txt","Contact_list.txt");
}

/**********************************************************************************************************************************************/

void updatetitle(string s)
{
    int flag=0,len,i;
    struct details t;
    len=s.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(s[i]);
    }
    r[i]='\0';
    s=r;
    string extra,y;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    fstream file2("dupli.txt");
    file2.open("dupli.txt", ios::in | ios ::out | ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=s)
       {
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       else
       {
           cout<<"Enter the new title ";
           getline(cin>>ws,t.title);
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       getline(file,extra);
       getline(file,t.name);
       len=(t.name).length();
       char b[len+1];
       for(i=0;i<len;i++)
       {
           b[i]=toupper(t.name[i]);
       }
       b[i]='\0';
       y=b;
       getline(file,t.phone_no);
       getline(file,t.email);
       getline(file,t.dob);
       getline(file,t.title);
    }
    file.close();
    file2.close();
    remove("Contact_list.txt");
    rename("dupli.txt","Contact_list.txt");
}

/*****************************************************************************************************************************************************/

void updateemail(string s)
{
    int flag=0,len,i;
    struct details t;
    len=s.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(s[i]);
    }
    r[i]='\0';
    s=r;
    string extra,y;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    fstream file2("dupli.txt");
    file2.open("dupli.txt", ios::in | ios ::out | ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=s)
       {
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       else
       {
           cout<<"Enter the new email ";
           getline(cin>>ws,t.email);
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       getline(file,extra);
       getline(file,t.name);
       len=(t.name).length();
       char b[len+1];
       for(i=0;i<len;i++)
       {
           b[i]=toupper(t.name[i]);
       }
        b[i]='\0';
        y=b;
        getline(file,t.phone_no);
        getline(file,t.email);
        getline(file,t.dob);
        getline(file,t.title);
    }
    file.close();
    file2.close();
    remove("Contact_list.txt");
    rename("dupli.txt","Contact_list.txt");
}

/***********************************************************************************************************************************************************/

void updatedob(string s)
{
    int flag=0,len,i;
    struct details t;
    string extra,y;
    len=s.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(s[i]);
    }
    r[i]='\0';
    s=r;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    fstream file2("dupli.txt");
    file2.open("dupli.txt", ios::in | ios ::out | ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=s)
       {
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       else
       {
           cout<<"Enter the new DOB ";
           getline(cin>>ws,t.dob);
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       getline(file,extra);
       getline(file,t.name);
       len=(t.name).length();
       char b[len+1];
       for(i=0;i<len;i++)
       {
           b[i]=toupper(t.name[i]);
       }
       b[i]='\0';
       y=b;
       getline(file,t.phone_no);
       getline(file,t.email);
       getline(file,t.dob);
       getline(file,t.title);
    }
    file.close();
    file2.close();
    remove("Contact_list.txt");
    rename("dupli.txt","Contact_list.txt");
}

/*****************************************************************************************************************************************************/

void remove_contact()
{
    int flag=0,i,len;
    struct details t;
    string extra,y;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    string l;
    cout<<"Enter the name of the contact to be deleted : "<<endl;
    getline(cin>>ws,l);
    len=l.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(l[i]);
    }
    r[i]='\0';
    l=r;
    fstream file2("dupli.txt");
    file2.open("dupli.txt", ios::in | ios ::out | ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=l)
       {
           file2<<t.name<<endl;
           file2<<t.phone_no<<endl;
           file2<<t.email<<endl;
           file2<<t.dob<<endl;
           file2<<t.title<<endl<<endl;
       }
       else
       {
           flag=1;
           cout<<endl<<"Record deleted"<<endl;
       }
       getline(file,extra);
       getline(file,t.name);
       len=(t.name).length();
       char b[len+1];
       for(i=0;i<len;i++)
       {
           b[i]=toupper(t.name[i]);
       }
       b[i]='\0';
       y=b;
       getline(file,t.phone_no);
       getline(file,t.email);
       getline(file,t.dob);
       getline(file,t.title);
    }
    file.close();
    file2.close();
    remove("Contact_list.txt");
    rename("dupli.txt","Contact_list.txt");
    if(flag==0)
    {
        cout<<"Contact does not exist"<<endl;
    }
}

/****************************************************************************************************************************************************/


void update()
{
    struct details t;
    fstream file;
    string y;
    int len,i;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    cout<<"Enter the name of the contact to be updated ";
    getline(cin>>ws,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    int check=exists(y);
    int c;
    while(!check)
    {
        cout<<"No such contact exists.To update another contact press 1 else press 0"<<endl;
        cin>>c;
        if(c)
        {
            cout<<"Enter the name of the contact to be updated ";
            getline(cin>>ws,t.name);
            len=(t.name).length();
            char b[len+1];
            for(i=0;i<len;i++)
            {
                b[i]=toupper(t.name[i]);
            }
            b[i]='\0';
            y=b;
            check=exists(y);
        }
        else
        {
            return;
        }
    }
    file.close();
    cout<<endl<<" Select the category to be updated "<<endl<<"* Press 1 for name"<<endl<<"* Press 2 for contact number"<<endl<<"* Press 3 for email"<<endl<<"* Press 4 for DOB"<<endl<<"* Press 5 for Title"<<endl<<endl;
    cin>>c;
    switch (c)
    {
        case 1: updatename(t.name);
                break;
        case 2: updatecontact(t.name);
                break;
        case 3: updateemail(t.name);
                break;
        case 4: updatedob(t.name);
                break;
        case 5: updatetitle(t.name);
                break;
    }
}


/**************************************************************************************************************************************************/


int exists(string s)
{
    struct details t;
    string extra,y;
    int len,i;
    len=s.length();
    char r[len+1];
    for(i=0;i<len;i++)
    {
        r[i]=toupper(s[i]);
    }
    r[i]='\0';
    s=r;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    getline(file,t.name);
    len=(t.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(t.name[i]);
    }
    a[i]='\0';
    y=a;
    getline(file,t.phone_no);
    getline(file,t.email);
    getline(file,t.dob);
    getline(file,t.title);
    while(!file.eof())
    {
       if(y!=s)
       {

       }
       else
       {
           cout<<endl<<"Name: "<<t.name<<endl<<"Phone number: "<<t.phone_no<<endl<<"Email: "<<t.email<<endl<<"DOB: "<<t.dob<<endl<<"Title: "<<t.title<<endl<<endl;
           return 1;
       }
       getline(file,extra);
       getline(file,t.name);
       len=(t.name).length();
       char b[len+1];
       for(i=0;i<len;i++)
       {
           b[i]=toupper(t.name[i]);
       }
       b[i]='\0';
       y=b;
       getline(file,t.phone_no);
       getline(file,t.email);
       getline(file,t.dob);
       getline(file,t.title);
    }
    file.close();
    return 0;
}


/*********************************************************************************************************************************************/


void findinlist()
{
    int flag=0;
    int len,i;
    struct details t;
    string extra;
    fstream file;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    string l,y;
    cout<<"To search using Title press 1 , to search using Name press 0"<<endl;
    int s;
    cin>>s;
    if(s==0)
    {
        cout<<"Enter the name of contact to be searched :"<<endl;
        getline(cin>>ws,l);
        len=l.length();
        char a[len+1];
        for(i=0;i<len;i++)
        {
            a[i]=toupper(l[i]);
        }
        a[i]='\0';
        l=a;
        getline(file,t.name);
        len=(t.name).length();
        char b[len+1];
        for(i=0;i<len;i++)
        {
            b[i]=toupper(t.name[i]);
        }
        b[i]='\0';
        y=b;
        getline(file,t.phone_no);
        getline(file,t.email);
        getline(file,t.dob);
        getline(file,t.title);
        while(!file.eof())
        {
            if(y!=l)
            {
                //do nothing
            }
            else
            {
                flag=1;
                cout<<endl<<"Name "<<t.name<<endl<<"Phone number "<<t.phone_no<<endl<<"Email "<<t.email<<endl<<"DOB "<<t.dob<<endl<<"Title "<<t.title<<endl<<endl;
                return;
            }
            getline(file,extra);
            getline(file,t.name);
            len=(t.name).length();
            char c[len+1];
            for(i=0;i<len;i++)
            {
                c[i]=toupper(t.name[i]);
            }
            c[i]='\0';
            y=c;
            getline(file,t.phone_no);
            getline(file,t.email);
            getline(file,t.dob);
            getline(file,t.title);
        }
        file.close();
        if(flag==0)
        {
            cout<<"Contact does not exist"<<endl;
        }
    }
    else if(s==1)
    {
        cout<<"Enter the title of contact to be searched :"<<endl;
        getline(cin>>ws,l);
        len=l.length();
        char d[len+1];
        for(i=0;i<len;i++)
        {
            d[i]=toupper(l[i]);
        }
        d[i]='\0';
        l=d;
        getline(file,t.name);
        getline(file,t.phone_no);
        getline(file,t.email);
        getline(file,t.dob);
        getline(file,t.title);
        len=(t.title).length();
        char e[len+1];
        for(i=0;i<len;i++)
        {
            e[i]=toupper(t.title[i]);
        }
        e[i]='\0';
        y=e;
        while(!file.eof())
        {
            if(y!=l)
            {
               //do nothing
            }
            else
            {
                flag=1;
                cout<<endl<<"Name: "<<t.name<<endl<<"Phone number: "<<t.phone_no<<endl<<"Email: "<<t.email<<endl<<"DOB: "<<t.dob<<endl<<"Title: "<<t.title<<endl<<endl;
            }
            getline(file,extra);
            getline(file,t.name);
            getline(file,t.phone_no);
            getline(file,t.email);
            getline(file,t.dob);
            getline(file,t.title);
            len=(t.title).length();
            char f[len+1];
            for(i=0;i<len;i++)
            {
                f[i]=toupper(t.title[i]);
            }
            f[i]='\0';
            y=f;
        }
        file.close();
        if(flag==0)
        {
            cout<<"Contact does not exist"<<endl;
        }
    }
}


/*************************************************************************************************************************************************/


void add()
{
    struct details p;
    fstream file;
    string l;
    int i;
    file.open("Contact_list.txt",ios::in | ios::out |ios::app);
    cout<<"Enter name ";
    getline(cin>>ws,p.name);
    int len=(p.name).length();
    char a[len+1];
    for(i=0;i<len;i++)
    {
        a[i]=toupper(p.name[i]);
    }
    a[i]='\0';
    l=a;
    int check=exists(l);
    int t;
    while(check)
    {
        cout<<"There's already a contact with this name.To make a new contact enter 1 else enter 0"<<endl;
        cin>>t;
        if(t)
        {
            cout<<"Enter the new name "<<endl;
            getline(cin>>ws,p.name);
            len=(p.name).length();
            char a[len+1];
            for(i=0;i<len;i++)
            {
                a[i]=toupper(p.name[i]);
            }
            a[i]='\0';
            l=a;
            check=exists(l);
        }
        else
        {
            cout<<"No contact was added"<<endl;
            return;
        }
    }
    file<<p.name<<endl;
    cout<<"Enter phone number ";
    getline(cin>>ws,p.phone_no);
    file<<p.phone_no<<endl;
    cout<<"Enter email ";
    getline(cin>>ws,p.email);
    file<<p.email<<endl;
    cout<<"Enter date of birth in DD/MM/YYYY format ";
    getline(cin>>ws,p.dob);
    file<<p.dob<<endl;
    cout<<"Enter Title ";
    getline(cin>>ws,p.title);
    file<<p.title<<endl<<endl;
    file.close();
}

/************************************************************************************************************************************/

int main()
{
   int m=1,a;
   cout<<"************Phone directory************"<<endl;
   char b;
   while(m==1)
   {
   cout<<" Press the respective key for the operation you want to perform"<<endl;
   cout<<"Press 1 to add a new contact"<<endl;
   cout<<"Press 2 to delete a contact"<<endl;
   cout<<"Press 3 to search a contact"<<endl;
   cout<<"Press 4 to update a contact"<<endl;
   cin>>a;
   switch (a)
   {
   case 1: add();
           break;
   case 2: remove_contact();
           break;
   case 3: findinlist();
           break;
   case 4: update();
           break;
   }
   cout<<endl<<"**************************************************************************************************************"<<endl<<endl;
   cout<<"TO PERFORM FURTHER OPERATIONS PRESS '1' ELSE PRESS '0' "<<endl;
   cin>>m;
   }
}
