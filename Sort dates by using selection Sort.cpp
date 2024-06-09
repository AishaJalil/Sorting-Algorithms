#include <iostream>
using namespace std;

class date {
public:
    int day, mon, year;

    date() {}

    date(int day, int mon, int year) {
        this->day = day;
        this->mon = mon;
        this->year = year;
    }
};

void display(date d) {
    cout << d.day << "-" << d.mon << "-" << d.year << endl;
}

void swap(date &obj1, date &obj2) {
    date temp = obj1;
    obj1 = obj2;
    obj2 = temp;
}

void selection_sort(date array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;

        for (int j = i + 1; j < size; j++) {
            if (array[j].year < array[min_index].year ||
                (array[j].year == array[min_index].year && array[j].mon < array[min_index].mon) ||
                (array[j].year == array[min_index].year && array[j].mon == array[min_index].mon && array[j].day < array[min_index].day)) {
                min_index = j;
            }
        }

        if (min_index != i) {
            
			//check error
			/*cout << "swap  ";
            display(array[min_index]);
            cout << "to ";
            display(array[i]);
            cout << " \n\n";
            */

            swap(array[min_index], array[i]);
        }
    }
}

int main() {
    date d[5] = {date(12, 3, 2010), date(2, 5, 2006), date(10, 12, 2003), date(10, 8, 2008), date(4, 9, 2014)};
    
    cout<<"Before sorting: \n";
     for (int i = 0; i < 5; i++)
	 {
        cout << d[i].day << "-" << d[i].mon << "-" << d[i].year << endl;
     }
     
     
    selection_sort(d, 5);

    cout<<"\n\nAfter sorting: \n";

    for (int i = 0; i < 5; i++) 
	{
        cout << d[i].day << "-" << d[i].mon << "-" << d[i].year << endl;
    }

    return 0;
}
