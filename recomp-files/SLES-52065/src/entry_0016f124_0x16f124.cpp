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

// Function: entry_0016f124
// Address: 0x16f124 - 0x16f144
void entry_0016f124_0x16f124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f124_0x16f124");
#endif

    switch (ctx->pc) {
        case 0x16f138u: goto label_16f138;
        default: break;
    }

    ctx->pc = 0x16f124u;

label_16f124:
    // 0x16f124: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16f128:
    // 0x16f128: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16f128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16f12c:
    // 0x16f12c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f130:
    // 0x16f130: 0x320f809  jalr        $t9
label_16f134:
    if (ctx->pc == 0x16F134u) {
        ctx->pc = 0x16F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F130u;
        // 0x16f134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F138u;
        goto label_16f138;
    }
    ctx->pc = 0x16F130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F138u);
        ctx->pc = 0x16F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F130u;
        // 0x16f134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F130u, 0x16F138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16F138u;
label_16f138:
    // 0x16f138: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16f13c:
    // 0x16f13c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_16f140:
    // 0x16f140: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x16f144u;
}
