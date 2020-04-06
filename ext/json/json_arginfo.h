/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_json_encode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, depth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_json_decode, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, json, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, assoc, _IS_BOOL, 1)
	ZEND_ARG_TYPE_INFO(0, depth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_json_last_error, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_json_last_error_msg, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_JsonSerializable_jsonSerialize, 0, 0, 0)
ZEND_END_ARG_INFO()


ZEND_FUNCTION(json_encode);
ZEND_FUNCTION(json_decode);
ZEND_FUNCTION(json_last_error);
ZEND_FUNCTION(json_last_error_msg);


static const zend_function_entry ext_functions[] = {
	ZEND_FE(json_encode, arginfo_json_encode)
	ZEND_FE(json_decode, arginfo_json_decode)
	ZEND_FE(json_last_error, arginfo_json_last_error)
	ZEND_FE(json_last_error_msg, arginfo_json_last_error_msg)
	ZEND_FE_END
};