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

// Function: FUN_0013da80
// Address: 0x13da80 - 0x13dae4
void FUN_0013da80_0x13da80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013da80_0x13da80");
#endif

    switch (ctx->pc) {
        case 0x13da80u: goto label_13da80;
        case 0x13da84u: goto label_13da84;
        case 0x13da88u: goto label_13da88;
        case 0x13da8cu: goto label_13da8c;
        case 0x13da90u: goto label_13da90;
        case 0x13da94u: goto label_13da94;
        case 0x13da98u: goto label_13da98;
        case 0x13da9cu: goto label_13da9c;
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa4u: goto label_13daa4;
        case 0x13daa8u: goto label_13daa8;
        case 0x13daacu: goto label_13daac;
        case 0x13dab0u: goto label_13dab0;
        case 0x13dab4u: goto label_13dab4;
        case 0x13dab8u: goto label_13dab8;
        case 0x13dabcu: goto label_13dabc;
        case 0x13dac0u: goto label_13dac0;
        case 0x13dac4u: goto label_13dac4;
        case 0x13dac8u: goto label_13dac8;
        case 0x13daccu: goto label_13dacc;
        case 0x13dad0u: goto label_13dad0;
        case 0x13dad4u: goto label_13dad4;
        case 0x13dad8u: goto label_13dad8;
        case 0x13dadcu: goto label_13dadc;
        case 0x13dae0u: goto label_13dae0;
        default: break;
    }

    ctx->pc = 0x13da80u;

label_13da80:
    // 0x13da80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13da80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13da84:
    // 0x13da84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13da88:
    // 0x13da88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13da88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13da8c:
    // 0x13da8c: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13da8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13da90:
    // 0x13da90: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_13da94:
    if (ctx->pc == 0x13DA94u) {
        ctx->pc = 0x13DA98u;
        goto label_13da98;
    }
    ctx->pc = 0x13DA90u;
    {
        const bool branch_taken_0x13da90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13da90) {
            ctx->pc = 0x13DAC0u;
            goto label_13dac0;
        }
    }
    ctx->pc = 0x13DA98u;
label_13da98:
    // 0x13da98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13da9c:
    // 0x13da9c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13da9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13daa0:
    // 0x13daa0: 0x320f809  jalr        $t9
label_13daa4:
    if (ctx->pc == 0x13DAA4u) {
        ctx->pc = 0x13DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAA0u;
        // 0x13daa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAA8u;
        goto label_13daa8;
    }
    ctx->pc = 0x13DAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DAA8u);
        ctx->pc = 0x13DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAA0u;
        // 0x13daa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DAA0u, 0x13DAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DAA8u;
label_13daa8:
    // 0x13daa8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13daac:
    // 0x13daac: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_13dab0:
    // 0x13dab0: 0x320f809  jalr        $t9
label_13dab4:
    if (ctx->pc == 0x13DAB4u) {
        ctx->pc = 0x13DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAB0u;
        // 0x13dab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAB8u;
        goto label_13dab8;
    }
    ctx->pc = 0x13DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DAB8u);
        ctx->pc = 0x13DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAB0u;
        // 0x13dab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DAB0u, 0x13DAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DAB8u;
label_13dab8:
    // 0x13dab8: 0x10000008  b           . + 4 + (0x8 << 2)
label_13dabc:
    if (ctx->pc == 0x13DABCu) {
        ctx->pc = 0x13DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAB8u;
        // 0x13dabc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAC0u;
        goto label_13dac0;
    }
    ctx->pc = 0x13DAB8u;
    {
        const bool branch_taken_0x13dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAB8u;
        // 0x13dabc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dab8) {
            ctx->pc = 0x13DADCu;
            goto label_13dadc;
        }
    }
    ctx->pc = 0x13DAC0u;
label_13dac0:
    // 0x13dac0: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x13dac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
label_13dac4:
    // 0x13dac4: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x13dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_13dac8:
    // 0x13dac8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_13dacc:
    // 0x13dacc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13daccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13dad0:
    // 0x13dad0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13dad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13dad4:
    // 0x13dad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13dad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_13dad8:
    // 0x13dad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13dadc:
    // 0x13dadc: 0x3e00008  jr          $ra
label_13dae0:
    if (ctx->pc == 0x13DAE0u) {
        ctx->pc = 0x13DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DADCu;
        // 0x13dae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DAE4u;
        goto label_fallthrough_0x13dadc;
    }
    ctx->pc = 0x13DADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DADCu;
        // 0x13dae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13dadc:
    ctx->pc = 0x13DAE4u;
}
