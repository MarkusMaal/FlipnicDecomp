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

// Function: FUN_001732b0
// Address: 0x1732b0 - 0x173350
void FUN_001732b0_0x1732b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001732b0_0x1732b0");
#endif

    switch (ctx->pc) {
        case 0x1732c8u: goto label_1732c8;
        default: break;
    }

    ctx->pc = 0x1732b0u;

    // 0x1732b0: 0x24881480  addiu       $t0, $a0, 0x1480
    ctx->pc = 0x1732b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
    // 0x1732b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1732b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1732b8: 0xf9000000  sqc2        $vf0, 0x0($t0)
    ctx->pc = 0x1732b8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1732bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1732bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1732C0u;
    {
        const bool branch_taken_0x1732c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732C0u;
        // 0x1732c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732c0) {
            ctx->pc = 0x1732FCu;
            goto label_1732fc;
        }
    }
    ctx->pc = 0x1732C8u;
label_1732c8:
    // 0x1732c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1732c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1732cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1732d0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1732d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1732d4: 0x8ca300a0  lw          $v1, 0xA0($a1)
    ctx->pc = 0x1732d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x1732d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1732D8u;
    {
        const bool branch_taken_0x1732d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732D8u;
        // 0x1732dc: 0x24a30060  addiu       $v1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732d8) {
            ctx->pc = 0x1732F4u;
            goto label_1732f4;
        }
    }
    ctx->pc = 0x1732E0u;
    // 0x1732e0: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1732e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1732e4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1732e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1732e8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1732e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1732ec: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1732ecu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1732f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1732f4:
    // 0x1732f4: 0x0  nop
    ctx->pc = 0x1732f4u;
    // NOP
    // 0x1732f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1732fc:
    // 0x1732fc: 0x0  nop
    ctx->pc = 0x1732fcu;
    // NOP
    // 0x173300: 0x28e30040  slti        $v1, $a3, 0x40
    ctx->pc = 0x173300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x173304: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x173304u;
    {
        const bool branch_taken_0x173304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173304u;
        // 0x173308: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173304) {
            ctx->pc = 0x1732C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1732c8;
        }
    }
    ctx->pc = 0x17330Cu;
    // 0x17330c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17330cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x173314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173318: 0x24841480  addiu       $a0, $a0, 0x1480
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
    // 0x17331c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17331cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x173320: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x173324: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x173324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x173328: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x173328u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17332c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x173330: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x173330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x173334: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x173334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x173338: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x173338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17333c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17333cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173340: 0x4bc2086a  vmul.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x173340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x173344: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x173344u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x173348: 0x3e00008  jr          $ra
    ctx->pc = 0x173348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173348u;
        // 0x17334c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173350u;
}
