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

// Function: entry_0014fed0
// Address: 0x14fed0 - 0x14ff14
void entry_0014fed0_0x14fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fed0_0x14fed0");
#endif

    switch (ctx->pc) {
        case 0x14ff04u: goto label_14ff04;
        case 0x14ff10u: goto label_14ff10;
        default: break;
    }

    ctx->pc = 0x14fed0u;

label_14fed0:
    // 0x14fed0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x14fed0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fed4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14fed8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x14fed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14fedc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14fee0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x14fee4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x14fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x14fee8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14FEE8u;
    {
        const bool branch_taken_0x14fee8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE8u;
        // 0x14feec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fee8) {
            ctx->pc = 0x14FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fed0;
        }
    }
    ctx->pc = 0x14FEF0u;
    // 0x14fef0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14FEF0u;
    {
        const bool branch_taken_0x14fef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEF0u;
        // 0x14fef4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fef0) {
            ctx->pc = 0x14FF14u;
            return;
        }
    }
    ctx->pc = 0x14FEF8u;
    // 0x14fef8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14fefc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14FEFCu;
    SET_GPR_U32(ctx, 31, 0x14FF04u);
    ctx->pc = 0x14FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEFCu;
    // 0x14ff00: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14FEFCu, 0x14FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF04u;
label_14ff04:
    // 0x14ff04: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14ff08: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14FF08u;
    SET_GPR_U32(ctx, 31, 0x14FF10u);
    ctx->pc = 0x14FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF08u;
    // 0x14ff0c: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14FF08u, 0x14FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF10u;
label_14ff10:
    // 0x14ff10: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->pc = 0x14ff14u;
}
