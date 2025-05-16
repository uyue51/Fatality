// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_soundsystem_lowlevel_H
#define SDK_SCHEMA_soundsystem_lowlevel_H

#include <cstdint>

namespace sdk {
	namespace schema {
		namespace soundsystem_lowlevel {
			class VMixDynamicsDesc_t;
			class VMixOscDesc_t;
			class VMixFilterDesc_t;
			class VMixUtilityDesc_t;
			class VMixVocoderDesc_t;
			class VMixEffectChainDesc_t;
			class VMixDynamicsBand_t;
			class VMixEnvelopeDesc_t;
			class VMixShaperDesc_t;
			class VMixDynamicsCompressorDesc_t;
			class VMixDiffusorDesc_t;
			class VMixPlateverbDesc_t;
			class VMixConvolutionDesc_t;
			class VMixAutoFilterDesc_t;
			class VMixPitchShiftDesc_t;
			class VMixDelayDesc_t;
			class VMixBoxverbDesc_t;
			class VMixModDelayDesc_t;
			class VMixPannerDesc_t;
			class VMixEQ8Desc_t;
			class VMixSubgraphSwitchDesc_t;
			class VMixFreeverbDesc_t;
			class VMixDynamics3BandDesc_t;
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class VMixPannerType_t : std::uint32_t {
				PANNER_TYPE_LINEAR = 0x0,
				PANNER_TYPE_EQUAL_POWER = 0x1,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class VMixLFOShape_t : std::uint32_t {
				LFO_SHAPE_SINE = 0x0,
				LFO_SHAPE_SQUARE = 0x1,
				LFO_SHAPE_TRI = 0x2,
				LFO_SHAPE_SAW = 0x3,
				LFO_SHAPE_NOISE = 0x4,
			};
			// Enumerator count: 10
			// Alignment: 
			// Size: 0x2
			enum class VMixFilterType_t : std::uint16_t {
				FILTER_UNKNOWN = 0xffff,
				FILTER_LOWPASS = 0x0,
				FILTER_HIGHPASS = 0x1,
				FILTER_BANDPASS = 0x2,
				FILTER_NOTCH = 0x3,
				FILTER_PEAKING_EQ = 0x4,
				FILTER_LOW_SHELF = 0x5,
				FILTER_HIGH_SHELF = 0x6,
				FILTER_ALLPASS = 0x7,
				FILTER_PASSTHROUGH = 0x8,
			};
			// Enumerator count: 30
			// Alignment: 
			// Size: 0x2
			enum class VMixProcessorType_t : std::uint16_t {
				VPROCESSOR_UNKNOWN = 0x0,
				VPROCESSOR_RT_PITCH = 0x1,
				VPROCESSOR_STEAMAUDIO_HRTF = 0x2,
				VPROCESSOR_DYNAMICS = 0x3,
				VPROCESSOR_PRESETDSP = 0x4,
				VPROCESSOR_DELAY = 0x5,
				VPROCESSOR_MOD_DELAY = 0x6,
				VPROCESSOR_DIFFUSOR = 0x7,
				VPROCESSOR_BOXVERB = 0x8,
				VPROCESSOR_FREEVERB = 0x9,
				VPROCESSOR_PLATEVERB = 0xa,
				VPROCESSOR_FULLWAVE_INTEGRATOR = 0xb,
				VPROCESSOR_FILTER = 0xc,
				VPROCESSOR_STEAMAUDIO_PATHING = 0xd,
				VPROCESSOR_EQ8 = 0xe,
				VPROCESSOR_ENVELOPE = 0xf,
				VPROCESSOR_VOCODER = 0x10,
				VPROCESSOR_CONVOLUTION = 0x11,
				VPROCESSOR_DYNAMICS_3BAND = 0x12,
				VPROCESSOR_DYNAMICS_COMPRESSOR = 0x13,
				VPROCESSOR_SHAPER = 0x14,
				VPROCESSOR_PANNER = 0x15,
				VPROCESSOR_UTILITY = 0x16,
				VPROCESSOR_AUTOFILTER = 0x17,
				VPROCESSOR_OSC = 0x18,
				VPROCESSOR_STEREODELAY = 0x19,
				VPROCESSOR_EFFECT_CHAIN = 0x1a,
				VPROCESSOR_SUBGRAPH_SWITCH = 0x1b,
				VPROCESSOR_STEAMAUDIO_DIRECT = 0x1c,
				VPROCESSOR_STEAMAUDIO_HYBRIDREVERB = 0x1d,
			};
			// Enumerator count: 3
			// Alignment: 
			// Size: 0x4
			enum class VMixSubgraphSwitchInterpolationType_t : std::uint32_t {
				SUBGRAPH_INTERPOLATION_TEMPORAL_CROSSFADE = 0x0,
				SUBGRAPH_INTERPOLATION_TEMPORAL_FADE_OUT = 0x1,
				SUBGRAPH_INTERPOLATION_KEEP_LAST_SUBGRAPH_RUNNING = 0x2,
			};
			// Enumerator count: 6
			// Alignment: 
			// Size: 0x4
			enum class VMixChannelOperation_t : std::uint32_t {
				VMIX_CHAN_STEREO = 0x0,
				VMIX_CHAN_LEFT = 0x1,
				VMIX_CHAN_RIGHT = 0x2,
				VMIX_CHAN_SWAP = 0x3,
				VMIX_CHAN_MONO = 0x4,
				VMIX_CHAN_MID_SIDE = 0x5,
			};
			// Enumerator count: 9
			// Alignment: 
			// Size: 0x1
			enum class VMixFilterSlope_t : std::uint8_t {
				FILTER_SLOPE_1POLE_6dB = 0,
				FILTER_SLOPE_1POLE_12dB = 1,
				FILTER_SLOPE_1POLE_18dB = 2,
				FILTER_SLOPE_1POLE_24dB = 3,
				FILTER_SLOPE_12dB = 4,
				FILTER_SLOPE_24dB = 5,
				FILTER_SLOPE_36dB = 6,
				FILTER_SLOPE_48dB = 7,
				FILTER_SLOPE_MAX = 7,
			};
			struct VMixDynamicsDesc_t {
				MEMBER(fldb_gain, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fldb_noise_gate_threshold, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fldb_compression_threshold, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fldb_limiter_threshold, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fldb_knee_width, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fl_ratio, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fl_limiter_ratio, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fl_attack_time_ms, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fl_release_time_ms, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fl_rmstime_ms, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(fl_wet_mix, soundsystem_lowlevel::VMixDynamicsDesc_t, float);
				MEMBER(b_peak_mode, soundsystem_lowlevel::VMixDynamicsDesc_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixDynamicsDesc_t

			struct VMixOscDesc_t {
				MEMBER(osc_type, soundsystem_lowlevel::VMixOscDesc_t, soundsystem_lowlevel::VMixLFOShape_t);
				MEMBER(freq, soundsystem_lowlevel::VMixOscDesc_t, float);
				MEMBER(fl_phase, soundsystem_lowlevel::VMixOscDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixOscDesc_t

			struct VMixFilterDesc_t {
				MEMBER(n_filter_type, soundsystem_lowlevel::VMixFilterDesc_t, soundsystem_lowlevel::VMixFilterType_t);
				MEMBER(n_filter_slope, soundsystem_lowlevel::VMixFilterDesc_t, soundsystem_lowlevel::VMixFilterSlope_t);
				MEMBER(b_enabled, soundsystem_lowlevel::VMixFilterDesc_t, bool);
				MEMBER(fldb_gain, soundsystem_lowlevel::VMixFilterDesc_t, float);
				MEMBER(fl_cutoff_freq, soundsystem_lowlevel::VMixFilterDesc_t, float);
				MEMBER(fl_q, soundsystem_lowlevel::VMixFilterDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixFilterDesc_t

			struct VMixUtilityDesc_t {
				MEMBER(n_op, soundsystem_lowlevel::VMixUtilityDesc_t, soundsystem_lowlevel::VMixChannelOperation_t);
				MEMBER(fl_input_pan, soundsystem_lowlevel::VMixUtilityDesc_t, float);
				MEMBER(fl_output_balance, soundsystem_lowlevel::VMixUtilityDesc_t, float);
				MEMBER(fldb_output_gain, soundsystem_lowlevel::VMixUtilityDesc_t, float);
				MEMBER(b_bass_mono, soundsystem_lowlevel::VMixUtilityDesc_t, bool);
				MEMBER(fl_bass_freq, soundsystem_lowlevel::VMixUtilityDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixUtilityDesc_t

			struct VMixVocoderDesc_t {
				MEMBER(n_band_count, soundsystem_lowlevel::VMixVocoderDesc_t, int32_t);
				MEMBER(fl_bandwidth, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(fld_bmod_gain, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(fl_freq_range_start, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(fl_freq_range_end, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(fld_bunvoiced_gain, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(fl_attack_time_ms, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(fl_release_time_ms, soundsystem_lowlevel::VMixVocoderDesc_t, float);
				MEMBER(n_debug_band, soundsystem_lowlevel::VMixVocoderDesc_t, int32_t);
				MEMBER(b_peak_mode, soundsystem_lowlevel::VMixVocoderDesc_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixVocoderDesc_t

			struct VMixEffectChainDesc_t {
				MEMBER(fl_crossfade_time, soundsystem_lowlevel::VMixEffectChainDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixEffectChainDesc_t

			struct VMixDynamicsBand_t {
				MEMBER(fldb_gain_input, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fldb_gain_output, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fldb_threshold_below, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fldb_threshold_above, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fl_ratio_below, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fl_ratio_above, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fl_attack_time_ms, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(fl_release_time_ms, soundsystem_lowlevel::VMixDynamicsBand_t, float);
				MEMBER(b_enable, soundsystem_lowlevel::VMixDynamicsBand_t, bool);
				MEMBER(b_solo, soundsystem_lowlevel::VMixDynamicsBand_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixDynamicsBand_t

			struct VMixEnvelopeDesc_t {
				MEMBER(fl_attack_time_ms, soundsystem_lowlevel::VMixEnvelopeDesc_t, float);
				MEMBER(fl_hold_time_ms, soundsystem_lowlevel::VMixEnvelopeDesc_t, float);
				MEMBER(fl_release_time_ms, soundsystem_lowlevel::VMixEnvelopeDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixEnvelopeDesc_t

			struct VMixShaperDesc_t {
				MEMBER(n_shape, soundsystem_lowlevel::VMixShaperDesc_t, int32_t);
				MEMBER(fldb_drive, soundsystem_lowlevel::VMixShaperDesc_t, float);
				MEMBER(fldb_output_gain, soundsystem_lowlevel::VMixShaperDesc_t, float);
				MEMBER(fl_wet_mix, soundsystem_lowlevel::VMixShaperDesc_t, float);
				MEMBER(n_oversample_factor, soundsystem_lowlevel::VMixShaperDesc_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixShaperDesc_t

			struct VMixDynamicsCompressorDesc_t {
				MEMBER(fldb_output_gain, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fldb_compression_threshold, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fldb_knee_width, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fl_compression_ratio, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fl_attack_time_ms, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fl_release_time_ms, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fl_rmstime_ms, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(fl_wet_mix, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, float);
				MEMBER(b_peak_mode, soundsystem_lowlevel::VMixDynamicsCompressorDesc_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixDynamicsCompressorDesc_t

			struct VMixDiffusorDesc_t {
				MEMBER(fl_size, soundsystem_lowlevel::VMixDiffusorDesc_t, float);
				MEMBER(fl_complexity, soundsystem_lowlevel::VMixDiffusorDesc_t, float);
				MEMBER(fl_feedback, soundsystem_lowlevel::VMixDiffusorDesc_t, float);
				MEMBER(fl_output_gain, soundsystem_lowlevel::VMixDiffusorDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixDiffusorDesc_t

			struct VMixPlateverbDesc_t {
				MEMBER(fl_prefilter, soundsystem_lowlevel::VMixPlateverbDesc_t, float);
				MEMBER(fl_input_diffusion1, soundsystem_lowlevel::VMixPlateverbDesc_t, float);
				MEMBER(fl_input_diffusion2, soundsystem_lowlevel::VMixPlateverbDesc_t, float);
				MEMBER(fl_decay, soundsystem_lowlevel::VMixPlateverbDesc_t, float);
				MEMBER(fl_damp, soundsystem_lowlevel::VMixPlateverbDesc_t, float);
				MEMBER(fl_feedback_diffusion1, soundsystem_lowlevel::VMixPlateverbDesc_t, float);
				MEMBER(fl_feedback_diffusion2, soundsystem_lowlevel::VMixPlateverbDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixPlateverbDesc_t

			struct VMixConvolutionDesc_t {
				MEMBER(fldb_gain, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fl_pre_delay_ms, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fl_wet_mix, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fldb_low, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fldb_mid, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fldb_high, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fl_low_cutoff_freq, soundsystem_lowlevel::VMixConvolutionDesc_t, float);
				MEMBER(fl_high_cutoff_freq, soundsystem_lowlevel::VMixConvolutionDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixConvolutionDesc_t

			struct VMixAutoFilterDesc_t {
				MEMBER(fl_envelope_amount, soundsystem_lowlevel::VMixAutoFilterDesc_t, float);
				MEMBER(fl_attack_time_ms, soundsystem_lowlevel::VMixAutoFilterDesc_t, float);
				MEMBER(fl_release_time_ms, soundsystem_lowlevel::VMixAutoFilterDesc_t, float);
				MEMBER(filter, soundsystem_lowlevel::VMixAutoFilterDesc_t, soundsystem_lowlevel::VMixFilterDesc_t);
				MEMBER(fl_lfoamount, soundsystem_lowlevel::VMixAutoFilterDesc_t, float);
				MEMBER(fl_lforate, soundsystem_lowlevel::VMixAutoFilterDesc_t, float);
				MEMBER(fl_phase, soundsystem_lowlevel::VMixAutoFilterDesc_t, float);
				MEMBER(n_lfoshape, soundsystem_lowlevel::VMixAutoFilterDesc_t, soundsystem_lowlevel::VMixLFOShape_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixAutoFilterDesc_t

			struct VMixPitchShiftDesc_t {
				MEMBER(n_grain_sample_count, soundsystem_lowlevel::VMixPitchShiftDesc_t, int32_t);
				MEMBER(fl_pitch_shift, soundsystem_lowlevel::VMixPitchShiftDesc_t, float);
				MEMBER(n_quality, soundsystem_lowlevel::VMixPitchShiftDesc_t, int32_t);
				MEMBER(n_proc_type, soundsystem_lowlevel::VMixPitchShiftDesc_t, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixPitchShiftDesc_t

			struct VMixDelayDesc_t {
				MEMBER(feedback_filter, soundsystem_lowlevel::VMixDelayDesc_t, soundsystem_lowlevel::VMixFilterDesc_t);
				MEMBER(b_enable_filter, soundsystem_lowlevel::VMixDelayDesc_t, bool);
				MEMBER(fl_delay, soundsystem_lowlevel::VMixDelayDesc_t, float);
				MEMBER(fl_direct_gain, soundsystem_lowlevel::VMixDelayDesc_t, float);
				MEMBER(fl_delay_gain, soundsystem_lowlevel::VMixDelayDesc_t, float);
				MEMBER(fl_feedback_gain, soundsystem_lowlevel::VMixDelayDesc_t, float);
				MEMBER(fl_width, soundsystem_lowlevel::VMixDelayDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixDelayDesc_t

			struct VMixBoxverbDesc_t {
				MEMBER(fl_size_max, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_size_min, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_complexity, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_diffusion, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_mod_depth, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_mod_rate, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(b_parallel, soundsystem_lowlevel::VMixBoxverbDesc_t, bool);
				MEMBER(filter_type, soundsystem_lowlevel::VMixBoxverbDesc_t, soundsystem_lowlevel::VMixFilterDesc_t);
				MEMBER(fl_width, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_height, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_depth, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_feedback_scale, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_feedback_width, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_feedback_height, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_feedback_depth, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_output_gain, soundsystem_lowlevel::VMixBoxverbDesc_t, float);
				MEMBER(fl_taps, soundsystem_lowlevel::VMixBoxverbDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixBoxverbDesc_t

			struct VMixModDelayDesc_t {
				MEMBER(feedback_filter, soundsystem_lowlevel::VMixModDelayDesc_t, soundsystem_lowlevel::VMixFilterDesc_t);
				MEMBER(b_phase_invert, soundsystem_lowlevel::VMixModDelayDesc_t, bool);
				MEMBER(fl_glide_time, soundsystem_lowlevel::VMixModDelayDesc_t, float);
				MEMBER(fl_delay, soundsystem_lowlevel::VMixModDelayDesc_t, float);
				MEMBER(fl_output_gain, soundsystem_lowlevel::VMixModDelayDesc_t, float);
				MEMBER(fl_feedback_gain, soundsystem_lowlevel::VMixModDelayDesc_t, float);
				MEMBER(fl_mod_rate, soundsystem_lowlevel::VMixModDelayDesc_t, float);
				MEMBER(fl_mod_depth, soundsystem_lowlevel::VMixModDelayDesc_t, float);
				MEMBER(b_apply_antialiasing, soundsystem_lowlevel::VMixModDelayDesc_t, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixModDelayDesc_t

			struct VMixPannerDesc_t {
				MEMBER(type, soundsystem_lowlevel::VMixPannerDesc_t, soundsystem_lowlevel::VMixPannerType_t);
				MEMBER(fl_strength, soundsystem_lowlevel::VMixPannerDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixPannerDesc_t

			struct VMixEQ8Desc_t {
				MEMBER_ARR(stages, soundsystem_lowlevel::VMixEQ8Desc_t, 8, soundsystem_lowlevel::VMixFilterDesc_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixEQ8Desc_t

			struct VMixSubgraphSwitchDesc_t {
				MEMBER(interpolation_mode, soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, soundsystem_lowlevel::VMixSubgraphSwitchInterpolationType_t);
				MEMBER(b_only_tails_on_fade_out, soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, bool);
				MEMBER(fl_interpolation_time, soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixSubgraphSwitchDesc_t

			struct VMixFreeverbDesc_t {
				MEMBER(fl_room_size, soundsystem_lowlevel::VMixFreeverbDesc_t, float);
				MEMBER(fl_damp, soundsystem_lowlevel::VMixFreeverbDesc_t, float);
				MEMBER(fl_width, soundsystem_lowlevel::VMixFreeverbDesc_t, float);
				MEMBER(fl_late_reflections, soundsystem_lowlevel::VMixFreeverbDesc_t, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixFreeverbDesc_t

			struct VMixDynamics3BandDesc_t {
				MEMBER(fldb_gain_output, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fl_rmstime_ms, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fldb_knee_width, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fl_depth, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fl_wet_mix, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fl_time_scale, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fl_low_cutoff_freq, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(fl_high_cutoff_freq, soundsystem_lowlevel::VMixDynamics3BandDesc_t, float);
				MEMBER(b_peak_mode, soundsystem_lowlevel::VMixDynamics3BandDesc_t, bool);
				MEMBER_ARR(band_desc, soundsystem_lowlevel::VMixDynamics3BandDesc_t, 3, soundsystem_lowlevel::VMixDynamicsBand_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // struct VMixDynamics3BandDesc_t

		} // namespace soundsystem_lowlevel
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_soundsystem_lowlevel_H
