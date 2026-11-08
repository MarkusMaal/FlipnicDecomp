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

// Function: entry_001657e0
// Address: 0x1657e0 - 0x165858
void entry_001657e0_0x1657e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001657e0_0x1657e0");
#endif

    switch (ctx->pc) {
        case 0x16583cu: goto label_16583c;
        default: break;
    }

    ctx->pc = 0x1657e0u;

    // 0x1657e0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1657e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1657e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1657e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1657e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1657e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1657ec: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1657f0: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1657f4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1657f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1657f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1657fc: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1657fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x165800: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x165800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165804: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x165804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x165808: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x165808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x16580c: 0x24c800a0  addiu       $t0, $a2, 0xA0
    ctx->pc = 0x16580cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x165810: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x165810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x165814: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x165814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x165818: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x165818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16581c: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x16581cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x165820: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x165820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x165824: 0xf8e60000  sqc2        $vf6, 0x0($a3)
    ctx->pc = 0x165824u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x165828: 0xc4ad0200  lwc1        $f13, 0x200($a1)
    ctx->pc = 0x165828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16582c: 0xc48c0200  lwc1        $f12, 0x200($a0)
    ctx->pc = 0x16582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x165830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165834: 0xc054dc8  jal         func_153720
    ctx->pc = 0x165834u;
    SET_GPR_U32(ctx, 31, 0x16583Cu);
    ctx->pc = 0x165838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165834u;
    // 0x165838: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x165834u, 0x16583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16583Cu;
label_16583c:
    // 0x16583c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16583cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165840: 0x0  nop
    ctx->pc = 0x165840u;
    // NOP
    // 0x165844: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165848: 0x0  nop
    ctx->pc = 0x165848u;
    // NOP
    // 0x16584c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16584Cu;
    {
        const bool branch_taken_0x16584c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x165850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16584Cu;
        // 0x165850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16584c) {
            ctx->pc = 0x165858u;
            return;
        }
    }
    ctx->pc = 0x165854u;
    // 0x165854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x165858u;
}
