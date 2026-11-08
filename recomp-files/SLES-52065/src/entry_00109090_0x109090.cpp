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

// Function: entry_00109090
// Address: 0x109090 - 0x109120
void entry_00109090_0x109090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109090_0x109090");
#endif

    switch (ctx->pc) {
        case 0x1090b8u: goto label_1090b8;
        case 0x1090d4u: goto label_1090d4;
        default: break;
    }

    ctx->pc = 0x109090u;

    // 0x109090: 0xc4410348  lwc1        $f1, 0x348($v0)
    ctx->pc = 0x109090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x109094: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x109094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x109098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x109098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10909c: 0x0  nop
    ctx->pc = 0x10909cu;
    // NOP
    // 0x1090a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1090a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1090a4: 0x0  nop
    ctx->pc = 0x1090a4u;
    // NOP
    // 0x1090a8: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x1090A8u;
    {
        const bool branch_taken_0x1090a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1090ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090A8u;
        // 0x1090ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1090a8) {
            ctx->pc = 0x10929Cu;
            return;
        }
    }
    ctx->pc = 0x1090B0u;
    // 0x1090b0: 0xc054754  jal         func_151D50
    ctx->pc = 0x1090B0u;
    SET_GPR_U32(ctx, 31, 0x1090B8u);
    ctx->pc = 0x1090B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090B0u;
    // 0x1090b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151D50u, 0x1090B0u, 0x1090B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090B8u;
label_1090b8:
    // 0x1090b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1090b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090bc: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1090BCu;
    {
        const bool branch_taken_0x1090bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090bc) {
            ctx->pc = 0x10929Cu;
            return;
        }
    }
    ctx->pc = 0x1090C4u;
    // 0x1090c4: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1090c8: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x1090c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1090cc: 0xc057040  jal         func_15C100
    ctx->pc = 0x1090CCu;
    SET_GPR_U32(ctx, 31, 0x1090D4u);
    ctx->pc = 0x1090D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090CCu;
    // 0x1090d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1090CCu, 0x1090D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090D4u;
label_1090d4:
    // 0x1090d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1090d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1090d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1090dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1090dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1090e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1090e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1090e8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1090e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1090ec: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1090f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1090f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1090f4: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x1090f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1090f8: 0x8c4201f0  lw          $v0, 0x1F0($v0)
    ctx->pc = 0x1090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1090fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1090fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109100: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x109100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109104: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x109104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x109108: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x109108u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x10910c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x10910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109110: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109110u;
    {
        const bool branch_taken_0x109110 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x109110) {
            ctx->pc = 0x109120u;
            return;
        }
    }
    ctx->pc = 0x109118u;
    // 0x109118: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109118u;
    {
        const bool branch_taken_0x109118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109118u;
        // 0x10911c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109118) {
            ctx->pc = 0x10913Cu;
            return;
        }
    }
    ctx->pc = 0x109120u;
}
