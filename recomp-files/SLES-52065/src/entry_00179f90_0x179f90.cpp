#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00179f90
// Address: 0x179f90 - 0x17a050
void entry_00179f90_0x179f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f90_0x179f90");
#endif

    switch (ctx->pc) {
        case 0x179fdcu: goto label_179fdc;
        case 0x17a000u: goto label_17a000;
        case 0x17a01cu: goto label_17a01c;
        default: break;
    }

    ctx->pc = 0x179f90u;

    // 0x179f90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179f94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179f98: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x179f9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179fa0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x179fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179fa4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179fa8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x179fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x179fac: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x179facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x179fb0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x179fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x179fb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x179fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179fb8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x179fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179fbc: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x179fbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179fc0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x179fc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179fc4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179fc8: 0x4bc30868  vadd.xyz    $vf1, $vf1, $vf3
    ctx->pc = 0x179fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179fcc: 0x4bc40868  vadd.xyz    $vf1, $vf1, $vf4
    ctx->pc = 0x179fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179fd0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x179fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179fd4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179FD4u;
    SET_GPR_U32(ctx, 31, 0x179FDCu);
    ctx->pc = 0x179FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FD4u;
    // 0x179fd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179FD4u, 0x179FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179FDCu;
label_179fdc:
    // 0x179fdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x179fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x179fe0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x179fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x179fe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x179fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x179fe8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x179fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179fec: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x179fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x179ff0: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x179ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x179ff4: 0xc64c6004  lwc1        $f12, 0x6004($s2)
    ctx->pc = 0x179ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179ff8: 0xc07d360  jal         func_1F4D80
    ctx->pc = 0x179FF8u;
    SET_GPR_U32(ctx, 31, 0x17A000u);
    ctx->pc = 0x179FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FF8u;
    // 0x179ffc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D80u, 0x179FF8u, 0x17A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A000u;
label_17a000:
    // 0x17a000: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a004: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17a008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a00c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a010: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17a014: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17A014u;
    SET_GPR_U32(ctx, 31, 0x17A01Cu);
    ctx->pc = 0x17A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A014u;
    // 0x17a018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17A014u, 0x17A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A01Cu;
label_17a01c:
    // 0x17a01c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a020: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x17a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17a024: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17a024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17a028: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17a028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17a02c: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x17a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x17a030: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a034: 0xc6426004  lwc1        $f2, 0x6004($s2)
    ctx->pc = 0x17a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17a038: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a03c: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x17a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a040: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x17a040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x17a044: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x17a044u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x17a048: 0x4602a81c  madd.s      $f0, $f21, $f2
    ctx->pc = 0x17a048u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[2]));
    // 0x17a04c: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x17a04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    ctx->pc = 0x17a050u;
}
