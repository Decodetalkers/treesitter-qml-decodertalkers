module.exports = grammar({
	name: 'qml',
	rules: {
		source_file: $ => repeat($._definition),
		_import: $ => choice(
			$._importfromfile,
			$._importfromsource,
		),
		_double: $ => seq(
			".",
			$.number,
		),
		_key : $ => seq(
			//choice("property"),
			//choice("alias"),
			$.identifier,
			":",
			$.identifier,
			//choice(
			//	$._type,
			//	seq(
			//		$.identifier,
			//		choice(
			//			$.parameter_list
			//		)
			//	)
			//)
		),
		_identifiers: $ => choice(
			seq(
				".",
				$.identifier,
			),
			$.identifier
		),
		_importfromsource: $ => seq(
			"import",
			repeat($._identifiers),
			$.number,
			choice(
				$._double,
				$._definition,
			)
		),
		_importfromfile: $ => seq(
			"import",
			"\"",
			$.identifier,
			"\""
		),
		_definition: $ => choice(
			$._import,
			$._object_definition
			// TODO: other kinds of definitions
		),
		_object_definition: $ => seq(
			repeat($._key),
			repeat($._identifiers),
			$.block
		),
		parameter_list: $ => seq(
			'(',
			choice(
				repeat($.identifier)
			),
			// TODO: parameters
			')'
		),

		_type: $ => choice(
			'bool'
			// TODO: other kinds of types
		),

		block: $ => seq(
			'{',
			repeat($._object_definition),
			'}'
		),

		_expression: $ => choice(
			$.identifier,
			$.number
			// TODO: other kinds of expressions
		),

		identifier: $ => /[a-zA-Z]+/,

		number: $ => /\d+/
	}
});
