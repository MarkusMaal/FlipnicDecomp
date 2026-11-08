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

// Function: FUN_00171010
// Address: 0x171010 - 0x1710cc
void FUN_00171010_0x171010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00171010_0x171010");
#endif

    switch (ctx->pc) {
        case 0x1710bcu: goto label_1710bc;
        default: break;
    }

    ctx->pc = 0x171010u;

    // 0x171010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171014: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x171014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x171018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17101c: 0xa0800262  sb          $zero, 0x262($a0)
    ctx->pc = 0x17101cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 610), (uint8_t)GPR_U32(ctx, 0));
    // 0x171020: 0x84a301e8  lh          $v1, 0x1E8($a1)
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x171024: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171024u;
    {
        const bool branch_taken_0x171024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x171028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171024u;
        // 0x171028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171024) {
            ctx->pc = 0x171034u;
            goto label_171034;
        }
    }
    ctx->pc = 0x17102Cu;
    // 0x17102c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17102Cu;
    {
        const bool branch_taken_0x17102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17102Cu;
        // 0x171030: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17102c) {
            ctx->pc = 0x1710C0u;
            goto label_1710c0;
        }
    }
    ctx->pc = 0x171034u;
label_171034:
    // 0x171034: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171034u;
    {
        const bool branch_taken_0x171034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x171034) {
            ctx->pc = 0x171044u;
            goto label_171044;
        }
    }
    ctx->pc = 0x17103Cu;
    // 0x17103c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17103Cu;
    {
        const bool branch_taken_0x17103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17103Cu;
        // 0x171040: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17103c) {
            ctx->pc = 0x1710C0u;
            goto label_1710c0;
        }
    }
    ctx->pc = 0x171044u;
label_171044:
    // 0x171044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171048: 0xa0820262  sb          $v0, 0x262($a0)
    ctx->pc = 0x171048u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 610), (uint8_t)GPR_U32(ctx, 2));
    // 0x17104c: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x171050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171050u;
    {
        const bool branch_taken_0x171050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171050u;
        // 0x171054: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171050) {
            ctx->pc = 0x171060u;
            goto label_171060;
        }
    }
    ctx->pc = 0x171058u;
    // 0x171058: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x171058u;
    {
        const bool branch_taken_0x171058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171058u;
        // 0x17105c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171058) {
            ctx->pc = 0x1710C0u;
            goto label_1710c0;
        }
    }
    ctx->pc = 0x171060u;
label_171060:
    // 0x171060: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x171060u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171064: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171064u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x171068: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x171068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x17106c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17106Cu;
    {
        const bool branch_taken_0x17106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17106Cu;
        // 0x171070: 0xc4800250  lwc1        $f0, 0x250($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17106c) {
            ctx->pc = 0x171080u;
            goto label_171080;
        }
    }
    ctx->pc = 0x171074u;
    // 0x171074: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x171074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x171078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x171078u;
    {
        const bool branch_taken_0x171078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171078u;
        // 0x17107c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171078) {
            ctx->pc = 0x1710B0u;
            goto label_1710b0;
        }
    }
    ctx->pc = 0x171080u;
label_171080:
    // 0x171080: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x171084: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171084u;
    {
        const bool branch_taken_0x171084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171084) {
            ctx->pc = 0x17109Cu;
            goto label_17109c;
        }
    }
    ctx->pc = 0x17108Cu;
    // 0x17108c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17108cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x171090: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x171090u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x171094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171094u;
    {
        const bool branch_taken_0x171094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171094u;
        // 0x171098: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171094) {
            ctx->pc = 0x1710B0u;
            goto label_1710b0;
        }
    }
    ctx->pc = 0x17109Cu;
label_17109c:
    // 0x17109c: 0x8c82022c  lw          $v0, 0x22C($a0)
    ctx->pc = 0x17109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1710a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1710A0u;
    {
        const bool branch_taken_0x1710a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1710a0) {
            ctx->pc = 0x1710B0u;
            goto label_1710b0;
        }
    }
    ctx->pc = 0x1710A8u;
    // 0x1710a8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1710a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1710ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1710acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1710b0:
    // 0x1710b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1710b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710b4: 0xc055b20  jal         func_156C80
    ctx->pc = 0x1710B4u;
    SET_GPR_U32(ctx, 31, 0x1710BCu);
    ctx->pc = 0x1710B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710B4u;
    // 0x1710b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156C80u, 0x1710B4u, 0x1710BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710BCu;
label_1710bc:
    // 0x1710bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1710bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1710c0:
    // 0x1710c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1710c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1710c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1710C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710C4u;
        // 0x1710c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1710C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710CCu;
}
