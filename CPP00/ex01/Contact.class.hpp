/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisraely <aisraely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:50:37 by aisraely          #+#    #+#             */
/*   Updated: 2021/08/05 15:52:36 by aisraely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>

typedef struct s_date
{
	int	month;
	int	day;
	int	year;
}				t_date;

class	Contact
{
	public:
		int				get_index(void)			const;
		std::string		get_firstname(void)		const;
		std::string		get_lastname(void)		const;
		std::string		get_nickname(void)		const;
		std::string		get_login(void)			const;
		std::string		get_postaddress(void)	const;
		std::string		get_email(void)			const;
		std::string		get_phonenumber(void)	const;
		t_date			get_birthday(void)		const;
		std::string		get_favmeal(void)		const;
		std::string		get_underwear(void) 	const;
		std::string		get_darkestsecret(void)	const;
		static int		get_size(void);
		static void		increment_size(void);
		void			set_index(int _index);
		void			set_firstname(std::string _firstname);
		void			set_lastname(std::string _lastname);
		void			set_nickname(std::string _nickname);
		void			set_login(std::string _login);
		void			set_postaddress(std::string _postaddress);
		void			set_email(std::string _email);
		void			set_phonenumber(std::string _phonenumber);
		void			set_birthday(t_date _birthday);
		void			set_favmeal(std::string _favmeal);
		void			set_underwear(std::string _underwear);
		void			set_darkestsecret(std::string _darkestsecret);

	private:
		int				_index;
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_login;
		std::string		_postaddress;
		std::string		_email;
		std::string		_phonenumber;
		t_date			_birthday;
		std::string		_favmeal;
		std::string		_underwear;
		std::string		_darkestsecret;
		static int		_size;
};

#endif
