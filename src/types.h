enum amath_symt {
	AMATH_alpha,
	AMATH_beta,
	AMATH_chi,
	AMATH_delta,
	AMATH_Delta,
	AMATH_epsi,
	AMATH_varepsilon,
	AMATH_eta,
	AMATH_gamma,
	AMATH_Gamma,
	AMATH_iota,
	AMATH_kappa,
	AMATH_lambda,
	AMATH_Lambda,
	AMATH_lamda,
	AMATH_Lamda,
	AMATH_mu,
	AMATH_nu,
	AMATH_omega,
	AMATH_Omega,
	AMATH_phi,
	AMATH_varphi,
	AMATH_Phi,
	AMATH_pi,
	AMATH_Pi,
	AMATH_psi,
	AMATH_Psi,
	AMATH_rho,
	AMATH_sigma,
	AMATH_Sigma,
	AMATH_tau,
	AMATH_theta,
	AMATH_varthetaut,
	AMATH_Theta,
	AMATH_upsilon,
	AMATH_xi,
	AMATH_Xi,
	AMATH_zeta,
	AMATH_factorial,
	AMATH_plus,
	AMATH_minus,
	AMATH_cdot,
	AMATH_ast,
	AMATH_star,
	AMATH_slash,
	AMATH_backslash,
	AMATH_setminus,
	AMATH_times,
	AMATH_div,
	AMATH_divide,
	AMATH_circ,
	AMATH_oplus,
	AMATH_otimes,
	AMATH_odot,
	AMATH_sum,
	AMATH_prod,
	AMATH_wedge,
	AMATH_bigwedge,
	AMATH_vee,
	AMATH_bigvee,
	AMATH_cap,
	AMATH_bigcap,
	AMATH_cup,
	AMATH_bigcup,
	AMATH_eq,
	AMATH_ne,
	AMATH_def,
	AMATH_lt,
	AMATH_le,
	AMATH_leq,
	AMATH_gt,
	AMATH_ge,
	AMATH_geq,
	AMATH_prec,
	AMATH_lt2,
	AMATH_succ,
	AMATH_preceq,
	AMATH_succeq,
	AMATH_in,
	AMATH_notin,
	AMATH_subset,
	AMATH_supset,
	AMATH_subseteq,
	AMATH_supseteq,
	AMATH_equiv,
	AMATH_cong,
	AMATH_approx,
	AMATH_propto,
	AMATH_and,
	AMATH_or,
	AMATH_neg,
	AMATH_implies,
	AMATH_if,
	AMATH_iff,
	AMATH_forall,
	AMATH_exists,
	AMATH_bot,
	AMATH_top,
	AMATH_vdash,
	AMATH_models,
	AMATH_lparen,
	AMATH_rparen,
	AMATH_lbracket,
	AMATH_rbracket,
	AMATH_lcurly,
	AMATH_rcurly,
	AMATH_pipe,
	AMATH_doublepipe,
	AMATH_lparencolon,
	AMATH_rparencolon,
	AMATH_langle,
	AMATH_rangle,
	AMATH_linvis,
	AMATH_rinvis,
	AMATH_int,
	AMATH_oint,
	AMATH_partial,
	AMATH_nabla,
	AMATH_pm,
	AMATH_emptyset,
	AMATH_infty,
	AMATH_aleph,
	AMATH_ldots,
	AMATH_therefore,
	AMATH_angle,
	AMATH_triangle,
	AMATH_prime,
	AMATH_tilde,
	AMATH_double_backslash,
	AMATH_quad,
	AMATH_qquad,
	AMATH_cdots,
	AMATH_vdots,
	AMATH_ddots,
	AMATH_diamond,
	AMATH_square,
	AMATH_lfloor,
	AMATH_rfloor,
	AMATH_lceiling,
	AMATH_rceiling,
	AMATH_complex,
	AMATH_natural,
	AMATH_rational,
	AMATH_real,
	AMATH_integer,
	AMATH_lim,
	AMATH_Lim,
	AMATH_sin,
	AMATH_cos,
	AMATH_tan,
	AMATH_sinh,
	AMATH_cosh,
	AMATH_tanh,
	AMATH_cot,
	AMATH_sec,
	AMATH_csc,
	AMATH_log,
	AMATH_ln,
	AMATH_det,
	AMATH_dim,
	AMATH_mod,
	AMATH_gcd,
	AMATH_lcm,
	AMATH_lub,
	AMATH_glb,
	AMATH_min,
	AMATH_max,
	AMATH_hat,
	AMATH_bar,
	AMATH_ul,
	AMATH_vec,
	AMATH_dot,
	AMATH_ddot,
	AMATH_uarr,
	AMATH_darr,
	AMATH_rarr,
	AMATH_to,
	AMATH_inject,
	AMATH_surject,
	AMATH_biject,
	AMATH_maps,
	AMATH_larr,
	AMATH_harr,
	AMATH_rArr,
	AMATH_lArr,
	AMATH_hArr,
	AMATH_sqrt,
	AMATH_text,
	AMATH_frac,
	AMATH_root,
	AMATH_stackrel,
	AMATH_fracdiv,
	AMATH_sub,
	AMATH_sup,
	AMATH_comma,
	AMATH_EOL,
	AMATH_whitespace,
	AMATH__MAX
};

enum amath_extra {
	AMATH_none,
	AMATH_under,
	AMATH_over,
	AMATH_underover,
	AMATH_ignore
};


struct amath_node {
	int token;
        char *str;
	enum amath_extra extra;
};
