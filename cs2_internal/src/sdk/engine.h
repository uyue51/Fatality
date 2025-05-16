#pragma once

namespace sdk
{
	struct cengine_client
	{
		bool in_game()
		{
			return utils::CallVFunc<bool, 35U>(this);
		}

		bool is_connected()
		{
			return utils::CallVFunc<bool, 36U>(this);
		}

		void get_screen_size(int& iWidth, int& iHeight)
		{
			return utils::CallVFunc<void, 53U>(this, std::ref(iWidth), std::ref(iHeight));
		}

		int get_local()
		{
			int nIndex = -1;

			utils::CallVFunc<void, 49U>(this, std::ref(nIndex), 0);

			return nIndex + 1;
		}


	};
} // namespace sdk
