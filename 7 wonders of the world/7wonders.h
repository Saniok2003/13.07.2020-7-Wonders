#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Wonders
{
	namespace Wonder1
	{
		class Pyramid_heops
		{
		private:
			string nameWonder;
			double height;
		public:
			Pyramid_heops() : nameWonder("The Pyramid of Cheops"), height(138.75)
			{	}
			Pyramid_heops(string n, double h) : nameWonder(n), height(h)
			{	}
			void Show() const;
		};
	}
	namespace Wonder2
	{
		class Hanging
		{
		private:
			string nameWonder;
			string country;
		public:
			Hanging() : nameWonder("Hanging Gardens of Babylon"), country("Assyria")
			{	}
			Hanging(string n, string country) : nameWonder(n), country(country)
			{	}
			void Show() const;
		};
	}
	namespace Wonder3
	{
		class Zeus
		{
		private:
			string nameWonder;
			string country;
		public:
			Zeus() : nameWonder("Zeus statue in Olympia"), country("Greece")
			{	}
			Zeus(string n, string country) : nameWonder(n), country(country)
			{	}
			void Show() const;
		};
	}
	namespace Wonder4
	{
		class Temple
		{
		private:
			string nameWonder;
			string country;
		public:
			Temple() : nameWonder("Temple of Artemis of Ephesus"), country("Turkey")
			{	}
			Temple(string n, string country) : nameWonder(n), country(country)
			{	}
			void Show() const;
		};
	}
	namespace Wonder5
	{
		class Mausoleum
		{
		private:
			string nameWonder;
			string country;
		public:
			Mausoleum() : nameWonder("Mausoleum in Halicarnassus"), country("Turkey")
			{	}
			Mausoleum(string n, string country) : nameWonder(n), country(country)
			{	}
			void Show() const;
		};
	}
	namespace Wonder6
	{
		class Alexandrian
		{
		private:
			string nameWonder;
			string country;
			double height;
		public:
			Alexandrian() : nameWonder("Alexandrian lighthouse"), country("Egypt"), height(150)
			{	}
			Alexandrian(string n, string country, double h) : nameWonder(n), country(country), height(h)
			{	}
			void Show() const;
		};
	}
	namespace Wonder7
	{
		class Colossus
		{
		private:
			string nameWonder;
			string country;
			double height;
		public:
			Colossus() : nameWonder("The Colossus of Rhodes"), country("Greece"), height(36)
			{	}
			Colossus(string n, string country, double h) : nameWonder(n), country(country), height(h)
			{	}
			void Show() const;
		};
	}

}