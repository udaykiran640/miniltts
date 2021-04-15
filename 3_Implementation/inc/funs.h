/**
 * @file funs.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUNS_H__
#define __FUNS_H__

/**
 * @brief Displays all the properties available to buy.
 * 
 */
void display_prop();

/**
 * @brief User can view properties by type of the property
 * (villa, house, land).
 * 
 */
void display_type_prop();

/**
 * @brief Sellers can add their properties so that they can be viewed 
 * by buyers.
 * 
 */
void add_prop();

/**
 * @brief Sellers can remove their properties if like to
 * (incase sold out)
 * 
 */
void remove_prop();

/**
 * @brief Sellers can change the specifications if they were entered 
 * wrong by mistake.
 * 
 */
void modify_prop();

#endif