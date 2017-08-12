using namespace std;

ostream &operator<<(ostream &os,
		const YearToMonth &ytm) {
	if (ytm.m_years > 0) {
	os << ytm.m_years << " year"
	<< (ytm.m_years > 1 ? "s" : ""); 
	if (ytm.m_months > 0) {
	os << " "; }
}
	//The "friend" mechanism is hated by object-orientaMon purists.
	if (ytm.m_months > 0) {
	os << ytm.m_months << " month"
	<< (ytm.m_months > 1 ? "s" : "");
	}
return os;
}

