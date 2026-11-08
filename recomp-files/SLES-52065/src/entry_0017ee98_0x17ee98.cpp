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

// Function: entry_0017ee98
// Address: 0x17ee98 - 0x17eeb4
void entry_0017ee98_0x17ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee98_0x17ee98");
#endif

    ctx->pc = 0x17ee98u;

label_17ee98:
    // 0x17ee98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17ee9c:
    // 0x17ee9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_17eea0:
    if (ctx->pc == 0x17EEA0u) {
        ctx->pc = 0x17EEA4u;
        goto label_17eea4;
    }
    ctx->pc = 0x17EE9Cu;
    {
        const bool branch_taken_0x17ee9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee9c) {
            ctx->pc = 0x17EEB4u;
            return;
        }
    }
    ctx->pc = 0x17EEA4u;
label_17eea4:
    // 0x17eea4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17eea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17eea8:
    // 0x17eea8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17eeac:
    // 0x17eeac: 0x320f809  jalr        $t9
label_17eeb0:
    if (ctx->pc == 0x17EEB0u) {
        ctx->pc = 0x17EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEACu;
        // 0x17eeb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EEB4u;
        goto label_fallthrough_0x17eeac;
    }
    ctx->pc = 0x17EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17EEB4u);
        ctx->pc = 0x17EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EEACu;
        // 0x17eeb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EEACu, 0x17EEB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17eeac:
    ctx->pc = 0x17EEB4u;
}
