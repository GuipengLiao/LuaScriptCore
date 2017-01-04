﻿using System.Collections;
using System.Collections.Generic;
using System;
using System.Text;

namespace cn.vimfung.luascriptcore
{
	public class LuaObjectEncoder 
	{
		private List<byte> _buffer;

		public LuaObjectEncoder ()
		{
			_buffer = new List<byte> ();
		}

		/// <summary>
		/// 写入一个16位整型
		/// </summary>
		/// <param name="value">16位整型值</param>
		public void writeInt16(Int16 value)
		{
			byte[] bytes = BitConverter.GetBytes (value);
			if (BitConverter.IsLittleEndian)
			{
				Array.Reverse (bytes);
			}
			_buffer.AddRange (bytes);
		}

		/// <summary>
		/// 写入一个32位整型
		/// </summary>
		/// <param name="value">32位整型值</param>
		public void writeInt32(Int32 value)
		{
			byte[] bytes = BitConverter.GetBytes ((int)value);
			if (BitConverter.IsLittleEndian)
			{
				Array.Reverse (bytes);
			}
			_buffer.AddRange (bytes);
		}

		/// <summary>
		/// 写入一个64位的整型值
		/// </summary>
		/// <param name="value">64位整型值</param>
		public void writeInt64(Int64 value)
		{
			byte[] bytes = BitConverter.GetBytes (value);
			if (BitConverter.IsLittleEndian)
			{
				Array.Reverse (bytes);
			}
			_buffer.AddRange (bytes);
		}

		/// <summary>
		/// 写入一个双精度浮点型数据
		/// </summary>
		/// <param name="value">双精度浮点型</param>
		public void writeDouble(double value)
		{
			byte[] bytes = BitConverter.GetBytes (value);
			if (!BitConverter.IsLittleEndian)
			{
				//置换数组位置
				Array.Reverse (bytes);
			}
			_buffer.AddRange (bytes);
		}

		/// <summary>
		/// 写入一个字符串
		/// </summary>
		/// <param name="value">字符串</param>
		public void writeString(string value)
		{
			writeInt32 (value.Length);
			_buffer.AddRange (Encoding.UTF8.GetBytes (value));
		}

		/// <summary>
		/// 写入一个字节
		/// </summary>
		/// <param name="value">字符串</param>
		public void writeByte(Byte value)
		{
			_buffer.Add (value);
		}

		/// <summary>
		/// 写入一段缓冲区数据
		/// </summary>
		/// <param name="value">缓冲区数据</param>
		public void writeBytes(byte[] value)
		{
			writeInt32 (value.Length);
			_buffer.AddRange (value);
		}

		/// <summary>
		/// 写入一个对象类型
		/// </summary>
		/// <param name="value">对象</param>
		public void writeObject(LuaBaseObject value)
		{
			value.serialization (this);
		}

		/// <summary>
		/// 获取二进制数组
		/// </summary>
		/// <value>二进制数组</value>
		public byte[] bytes
		{
			get
			{
				return _buffer.ToArray();
			}
		}
	}
}
