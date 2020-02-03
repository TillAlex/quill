#pragma once

#include <cstddef>
#include <string>

/**
 * Contains useful utilities to assist with logging
 */
namespace quill
{
namespace utility
{
/**
 * Formats the given buffer to hex
 * @param buffer
 * @param size
 * @return A string containing the hexadecimal representation of the givven buffer
 */
[[nodiscard]] std::string to_hex(unsigned char* buffer, size_t size) noexcept;
[[nodiscard]] std::string to_hex(unsigned char const* buffer, size_t size) noexcept;

/**
 * Formats the given buffer to hex
 * @param buffer
 * @param size
 * @return A string containing the hexadecimal representation of the givven buffer
 */
[[nodiscard]] std::string to_hex(char* buffer, size_t size) noexcept;
[[nodiscard]] std::string to_hex(char const* buffer, size_t size) noexcept;

} // namespace utility
} // namespace quill