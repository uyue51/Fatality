// generated on: Mon Nov 18 16:22:35 2024
#ifndef SDK_SCHEMA_soundsystem_voicecontainers_H
#define SDK_SCHEMA_soundsystem_voicecontainers_H

#include <cstdint>

#include <sdk/schema/resourcesystem.h>
namespace sdk {
	namespace schema {
		namespace soundsystem_voicecontainers {
			class CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance;
			class CAudioSentence;
			class CSoundContainerReferenceArray;
			class CSoundInfoHeader;
			class CVoiceContainerSetElement;
			class CAudioEmphasisSample;
			class CAudioPhonemeTag;
			class CVoiceContainerBase;
			class CVoiceContainerDecayingSineWave;
			class CVoiceContainerAmpedDecayingSineWave;
			class CVoiceContainerLoopTrigger;
			class CVoiceContainerSwitch;
			class CVoiceContainerEnvelope;
			class CVoiceContainerSet;
			class CVoiceContainerSelector;
			class CVoiceContainerGranulator;
			class CVoiceContainerShapedNoise;
			class CVoiceContainerStaticAdditiveSynth;
			class CVoiceContainerRealtimeFMSineWave;
			class CVoiceContainerNull;
			class CVoiceContainerDefault;
			class CVoiceContainerRandomSampler;
			class CVoiceContainerBlender;
			class CAudioMorphData;
			class CVoiceContainerAnalysisBase;
			class CVoiceContainerEnvelopeAnalyzer;
			class CVSound;
			class CVoiceContainerStaticAdditiveSynth_CTone;
			class CVoiceContainerStaticAdditiveSynth_CHarmonic;
			class CSoundContainerReference;
			// Enumerator count: 2
			// Alignment: 
			// Size: 0x4
			enum class EMode_t : std::uint32_t {
				// MPropertyFriendlyName "Peak"
				Peak = 0x0,
				// MPropertyFriendlyName "RMS"
				RMS = 0x1,
			};
			// Enumerator count: 13
			// Alignment: 
			// Size: 0x1
			enum class EMidiNote : std::uint8_t {
				C = 0,
				C_Sharp = 1,
				D = 2,
				D_Sharp = 3,
				E = 4,
				F = 5,
				F_Sharp = 6,
				G = 7,
				G_Sharp = 8,
				A = 9,
				A_Sharp = 10,
				B = 11,
				Count = 12,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x1
			enum class EWaveform : std::uint8_t {
				Sine = 0,
				Square = 1,
				Saw = 2,
				Triangle = 3,
				Noise = 4,
			};
			// Enumerator count: 5
			// Alignment: 
			// Size: 0x4
			enum class PlayBackMode_t : std::uint32_t {
				// MPropertyFriendlyName "Random"
				Random = 0x0,
				// MPropertyFriendlyName "Random No Repeats"
				RandomNoRepeats = 0x1,
				// MPropertyFriendlyName "Random Avoid Last"
				RandomAvoidLast = 0x2,
				// MPropertyFriendlyName "Sequential"
				Sequential = 0x3,
				// MPropertyFriendlyName "Random With Weights"
				RandomWeights = 0x4,
			};
			// Enumerator count: 4
			// Alignment: 
			// Size: 0x1
			enum class CVSoundFormat_t : std::uint8_t {
				PCM16 = 0,
				PCM8 = 1,
				MP3 = 2,
				ADPCM = 3,
			};
			class CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance {
				MEMBER(fl_min_volume, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, float);
				MEMBER(n_instances_at_min_volume, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, int32_t);
				MEMBER(fl_max_volume, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, float);
				MEMBER(n_instances_at_max_volume, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance

			class CAudioSentence {
				MEMBER(b_should_voice_duck, soundsystem_voicecontainers::CAudioSentence, bool);
				MEMBER(run_time_phonemes, soundsystem_voicecontainers::CAudioSentence, cutl_vector<soundsystem_voicecontainers::CAudioPhonemeTag>);
				MEMBER(emphasis_samples, soundsystem_voicecontainers::CAudioSentence, cutl_vector<soundsystem_voicecontainers::CAudioEmphasisSample>);
				MEMBER(morph_data, soundsystem_voicecontainers::CAudioSentence, soundsystem_voicecontainers::CAudioMorphData);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAudioSentence

			class CSoundContainerReferenceArray {
				MEMBER(b_use_reference, soundsystem_voicecontainers::CSoundContainerReferenceArray, bool);
				MEMBER(sounds, soundsystem_voicecontainers::CSoundContainerReferenceArray, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>>);
				MEMBER(p_sounds, soundsystem_voicecontainers::CSoundContainerReferenceArray, cutl_vector<soundsystem_voicecontainers::CVoiceContainerBase*>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundContainerReferenceArray

			class CSoundInfoHeader {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundInfoHeader

			class CVoiceContainerSetElement {
				MEMBER(sound, soundsystem_voicecontainers::CVoiceContainerSetElement, soundsystem_voicecontainers::CSoundContainerReference);
				MEMBER(fl_volume_db, soundsystem_voicecontainers::CVoiceContainerSetElement, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerSetElement

			class CAudioEmphasisSample {
				MEMBER(fl_time, soundsystem_voicecontainers::CAudioEmphasisSample, float);
				MEMBER(fl_value, soundsystem_voicecontainers::CAudioEmphasisSample, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAudioEmphasisSample

			class CAudioPhonemeTag {
				MEMBER(fl_start_time, soundsystem_voicecontainers::CAudioPhonemeTag, float);
				MEMBER(fl_end_time, soundsystem_voicecontainers::CAudioPhonemeTag, float);
				MEMBER(n_phoneme_code, soundsystem_voicecontainers::CAudioPhonemeTag, int32_t);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAudioPhonemeTag

			class CVoiceContainerBase {
				MEMBER(v_sound, soundsystem_voicecontainers::CVoiceContainerBase, soundsystem_voicecontainers::CVSound);
				MEMBER(p_envelope_analyzer, soundsystem_voicecontainers::CVoiceContainerBase, soundsystem_voicecontainers::CVoiceContainerAnalysisBase*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerBase

			class CVoiceContainerDecayingSineWave : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(fl_frequency, soundsystem_voicecontainers::CVoiceContainerDecayingSineWave, float);
				MEMBER(fl_decay_time, soundsystem_voicecontainers::CVoiceContainerDecayingSineWave, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerDecayingSineWave

			class CVoiceContainerAmpedDecayingSineWave : public soundsystem_voicecontainers::CVoiceContainerDecayingSineWave {
				MEMBER(fl_gain_amount, soundsystem_voicecontainers::CVoiceContainerAmpedDecayingSineWave, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerAmpedDecayingSineWave

			class CVoiceContainerLoopTrigger : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(sound, soundsystem_voicecontainers::CVoiceContainerLoopTrigger, soundsystem_voicecontainers::CSoundContainerReference);
				MEMBER(fl_retrigger_time_min, soundsystem_voicecontainers::CVoiceContainerLoopTrigger, float);
				MEMBER(fl_retrigger_time_max, soundsystem_voicecontainers::CVoiceContainerLoopTrigger, float);
				MEMBER(fl_fade_time, soundsystem_voicecontainers::CVoiceContainerLoopTrigger, float);
				MEMBER(b_cross_fade, soundsystem_voicecontainers::CVoiceContainerLoopTrigger, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerLoopTrigger

			class CVoiceContainerSwitch : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(sounds_to_play, soundsystem_voicecontainers::CVoiceContainerSwitch, cutl_vector<soundsystem_voicecontainers::CSoundContainerReference>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerSwitch

			class CVoiceContainerEnvelope : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(sound, soundsystem_voicecontainers::CVoiceContainerEnvelope, CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>);
				MEMBER(analysis_container, soundsystem_voicecontainers::CVoiceContainerEnvelope, soundsystem_voicecontainers::CVoiceContainerAnalysisBase*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerEnvelope

			class CVoiceContainerSet : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(sounds_to_play, soundsystem_voicecontainers::CVoiceContainerSet, cutl_vector<soundsystem_voicecontainers::CVoiceContainerSetElement>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerSet

			class CVoiceContainerSelector : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(mode, soundsystem_voicecontainers::CVoiceContainerSelector, soundsystem_voicecontainers::PlayBackMode_t);
				MEMBER(sounds_to_play, soundsystem_voicecontainers::CVoiceContainerSelector, soundsystem_voicecontainers::CSoundContainerReferenceArray);
				MEMBER(f_probability_weights, soundsystem_voicecontainers::CVoiceContainerSelector, cutl_vector<float>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerSelector

			class CVoiceContainerGranulator : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(fl_grain_length, soundsystem_voicecontainers::CVoiceContainerGranulator, float);
				MEMBER(fl_grain_crossfade_amount, soundsystem_voicecontainers::CVoiceContainerGranulator, float);
				MEMBER(fl_start_jitter, soundsystem_voicecontainers::CVoiceContainerGranulator, float);
				MEMBER(fl_playback_jitter, soundsystem_voicecontainers::CVoiceContainerGranulator, float);
				MEMBER(source_audio, soundsystem_voicecontainers::CVoiceContainerGranulator, CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerGranulator

			class CVoiceContainerShapedNoise : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(b_use_curve_for_frequency, soundsystem_voicecontainers::CVoiceContainerShapedNoise, bool);
				MEMBER(fl_frequency, soundsystem_voicecontainers::CVoiceContainerShapedNoise, float);
				MEMBER(frequency_sweep, soundsystem_voicecontainers::CVoiceContainerShapedNoise, CPiecewiseCurve);
				MEMBER(b_use_curve_for_resonance, soundsystem_voicecontainers::CVoiceContainerShapedNoise, bool);
				MEMBER(fl_resonance, soundsystem_voicecontainers::CVoiceContainerShapedNoise, float);
				MEMBER(resonance_sweep, soundsystem_voicecontainers::CVoiceContainerShapedNoise, CPiecewiseCurve);
				MEMBER(b_use_curve_for_amplitude, soundsystem_voicecontainers::CVoiceContainerShapedNoise, bool);
				MEMBER(fl_gain_in_decibels, soundsystem_voicecontainers::CVoiceContainerShapedNoise, float);
				MEMBER(gain_sweep, soundsystem_voicecontainers::CVoiceContainerShapedNoise, CPiecewiseCurve);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerShapedNoise

			class CVoiceContainerStaticAdditiveSynth : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(tones, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth, cutl_vector<soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CTone>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerStaticAdditiveSynth

			class CVoiceContainerRealtimeFMSineWave : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(fl_carrier_frequency, soundsystem_voicecontainers::CVoiceContainerRealtimeFMSineWave, float);
				MEMBER(fl_modulator_frequency, soundsystem_voicecontainers::CVoiceContainerRealtimeFMSineWave, float);
				MEMBER(fl_modulator_amount, soundsystem_voicecontainers::CVoiceContainerRealtimeFMSineWave, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerRealtimeFMSineWave

			class CVoiceContainerNull : public soundsystem_voicecontainers::CVoiceContainerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerNull

			class CVoiceContainerDefault : public soundsystem_voicecontainers::CVoiceContainerBase {

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerDefault

			class CVoiceContainerRandomSampler : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(fl_amplitude, soundsystem_voicecontainers::CVoiceContainerRandomSampler, float);
				MEMBER(fl_amplitude_jitter, soundsystem_voicecontainers::CVoiceContainerRandomSampler, float);
				MEMBER(fl_time_jitter, soundsystem_voicecontainers::CVoiceContainerRandomSampler, float);
				MEMBER(fl_max_length, soundsystem_voicecontainers::CVoiceContainerRandomSampler, float);
				MEMBER(n_num_delay_variations, soundsystem_voicecontainers::CVoiceContainerRandomSampler, int32_t);
				MEMBER(grain_resources, soundsystem_voicecontainers::CVoiceContainerRandomSampler, cutl_vector<CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>>);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerRandomSampler

			class CVoiceContainerBlender : public soundsystem_voicecontainers::CVoiceContainerBase {
				MEMBER(first_sound, soundsystem_voicecontainers::CVoiceContainerBlender, soundsystem_voicecontainers::CSoundContainerReference);
				MEMBER(second_sound, soundsystem_voicecontainers::CVoiceContainerBlender, soundsystem_voicecontainers::CSoundContainerReference);
				MEMBER(fl_blend_factor, soundsystem_voicecontainers::CVoiceContainerBlender, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerBlender

			class CAudioMorphData {
				MEMBER(times, soundsystem_voicecontainers::CAudioMorphData, cutl_vector<float>);
				MEMBER(name_hash_codes, soundsystem_voicecontainers::CAudioMorphData, cutl_vector<uint32_t>);
				MEMBER(name_strings, soundsystem_voicecontainers::CAudioMorphData, cutl_vector<cutl_string>);
				MEMBER(samples, soundsystem_voicecontainers::CAudioMorphData, cutl_vector<cutl_vector<float>>);
				MEMBER(fl_ease_in, soundsystem_voicecontainers::CAudioMorphData, float);
				MEMBER(fl_ease_out, soundsystem_voicecontainers::CAudioMorphData, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CAudioMorphData

			class CVoiceContainerAnalysisBase {
				MEMBER(b_regenerate_curve_on_compile, soundsystem_voicecontainers::CVoiceContainerAnalysisBase, bool);
				MEMBER(curve, soundsystem_voicecontainers::CVoiceContainerAnalysisBase, CPiecewiseCurve);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerAnalysisBase

			class CVoiceContainerEnvelopeAnalyzer : public soundsystem_voicecontainers::CVoiceContainerAnalysisBase {
				MEMBER(mode, soundsystem_voicecontainers::CVoiceContainerEnvelopeAnalyzer, soundsystem_voicecontainers::EMode_t);
				MEMBER(n_samples, soundsystem_voicecontainers::CVoiceContainerEnvelopeAnalyzer, int32_t);
				MEMBER(fl_threshold, soundsystem_voicecontainers::CVoiceContainerEnvelopeAnalyzer, float);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerEnvelopeAnalyzer

			class CVSound {
				MEMBER(n_rate, soundsystem_voicecontainers::CVSound, int32_t);
				MEMBER(n_format, soundsystem_voicecontainers::CVSound, soundsystem_voicecontainers::CVSoundFormat_t);
				MEMBER(n_channels, soundsystem_voicecontainers::CVSound, uint32_t);
				MEMBER(n_loop_start, soundsystem_voicecontainers::CVSound, int32_t);
				MEMBER(n_sample_count, soundsystem_voicecontainers::CVSound, uint32_t);
				MEMBER(fl_duration, soundsystem_voicecontainers::CVSound, float);
				MEMBER(sentences, soundsystem_voicecontainers::CVSound, cutl_vector<soundsystem_voicecontainers::CAudioSentence>);
				MEMBER(n_streaming_size, soundsystem_voicecontainers::CVSound, uint32_t);
				MEMBER(n_seek_table, soundsystem_voicecontainers::CVSound, cutl_vector<int32_t>);
				MEMBER(n_loop_end, soundsystem_voicecontainers::CVSound, int32_t);
				MEMBER(encoded_header, soundsystem_voicecontainers::CVSound, CUtlBinaryBlock);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVSound

			class CVoiceContainerStaticAdditiveSynth_CTone {
				MEMBER(harmonics, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CTone, cutl_vector<soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic>);
				MEMBER(curve, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CTone, CPiecewiseCurve);
				MEMBER(b_sync_instances, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CTone, bool);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerStaticAdditiveSynth_CTone

			class CVoiceContainerStaticAdditiveSynth_CHarmonic {
				MEMBER(n_waveform, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, soundsystem_voicecontainers::EWaveform);
				MEMBER(n_fundamental, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, soundsystem_voicecontainers::EMidiNote);
				MEMBER(n_octave, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, int32_t);
				MEMBER(fl_cents, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, float);
				MEMBER(fl_phase, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, float);
				MEMBER(curve, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, CPiecewiseCurve);
				MEMBER(volume_scaling, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CHarmonic, soundsystem_voicecontainers::CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CVoiceContainerStaticAdditiveSynth_CHarmonic

			class CSoundContainerReference {
				MEMBER(b_use_reference, soundsystem_voicecontainers::CSoundContainerReference, bool);
				MEMBER(sound, soundsystem_voicecontainers::CSoundContainerReference, CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>);
				MEMBER(p_sound, soundsystem_voicecontainers::CSoundContainerReference, soundsystem_voicecontainers::CVoiceContainerBase*);

				// Method to cast to a specific type
				template <typename T>
				T* as() { return reinterpret_cast<T*>(this); }
			}; // class CSoundContainerReference

		} // namespace soundsystem_voicecontainers
	} // namespace schema
} // namespace sdk
#endif // SDK_SCHEMA_soundsystem_voicecontainers_H
