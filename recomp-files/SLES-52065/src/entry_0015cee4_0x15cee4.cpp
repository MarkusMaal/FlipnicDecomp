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

// Function: entry_0015cee4
// Address: 0x15cee4 - 0x15cf10
void entry_0015cee4_0x15cee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cee4_0x15cee4");
#endif

    switch (ctx->pc) {
        case 0x15cf00u: goto label_15cf00;
        default: break;
    }

    ctx->pc = 0x15cee4u;

label_15cee4:
    // 0x15cee4: 0x0  nop
    ctx->pc = 0x15cee4u;
    // NOP
label_15cee8:
    // 0x15cee8: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x15cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_15ceec:
    // 0x15ceec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15cef0:
    // 0x15cef0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15cef4:
    // 0x15cef4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_15cef8:
    // 0x15cef8: 0x320f809  jalr        $t9
label_15cefc:
    if (ctx->pc == 0x15CEFCu) {
        ctx->pc = 0x15CF00u;
        goto label_15cf00;
    }
    ctx->pc = 0x15CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CF00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEF8u, 0x15CF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CF00u;
label_15cf00:
    // 0x15cf00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15cf04:
    // 0x15cf04: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_15cf08:
    // 0x15cf08: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_15cf0c:
    if (ctx->pc == 0x15CF0Cu) {
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF10u;
        goto label_fallthrough_0x15cf08;
    }
    ctx->pc = 0x15CF08u;
    {
        const bool branch_taken_0x15cf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf08) {
            ctx->pc = 0x15CEE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cee4;
        }
    }
label_fallthrough_0x15cf08:
    ctx->pc = 0x15CF10u;
}
