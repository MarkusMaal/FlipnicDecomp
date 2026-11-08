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

// Function: entry_00119cd4
// Address: 0x119cd4 - 0x119d0c
void entry_00119cd4_0x119cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119cd4_0x119cd4");
#endif

    switch (ctx->pc) {
        case 0x119cf4u: goto label_119cf4;
        default: break;
    }

    ctx->pc = 0x119cd4u;

label_119cd4:
    // 0x119cd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_119cd8:
    // 0x119cd8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x119cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_119cdc:
    // 0x119cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119ce0:
    // 0x119ce0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119ce4:
    // 0x119ce4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119ce8:
    // 0x119ce8: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_119cec:
    // 0x119cec: 0x320f809  jalr        $t9
label_119cf0:
    if (ctx->pc == 0x119CF0u) {
        ctx->pc = 0x119CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CECu;
        // 0x119cf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x119CF4u;
        goto label_119cf4;
    }
    ctx->pc = 0x119CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119CF4u);
        ctx->pc = 0x119CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CECu;
        // 0x119cf0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CECu, 0x119CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119CF4u;
label_119cf4:
    // 0x119cf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119cf8:
    // 0x119cf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x119cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_119cfc:
    // 0x119cfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x119cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119d00:
    // 0x119d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119d04:
    // 0x119d04: 0x3e00008  jr          $ra
label_119d08:
    if (ctx->pc == 0x119D08u) {
        ctx->pc = 0x119D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D04u;
        // 0x119d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119D0Cu;
        goto label_fallthrough_0x119d04;
    }
    ctx->pc = 0x119D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D04u;
        // 0x119d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119d04:
    ctx->pc = 0x119D0Cu;
}
