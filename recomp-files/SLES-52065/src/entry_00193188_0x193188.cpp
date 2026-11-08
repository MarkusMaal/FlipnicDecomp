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

// Function: entry_00193188
// Address: 0x193188 - 0x1931a0
void entry_00193188_0x193188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193188_0x193188");
#endif

    switch (ctx->pc) {
        case 0x193198u: goto label_193198;
        default: break;
    }

    ctx->pc = 0x193188u;

label_193188:
    // 0x193188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19318c:
    // 0x19318c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193190:
    // 0x193190: 0x320f809  jalr        $t9
label_193194:
    if (ctx->pc == 0x193194u) {
        ctx->pc = 0x193194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193190u;
        // 0x193194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193198u;
        goto label_193198;
    }
    ctx->pc = 0x193190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193198u);
        ctx->pc = 0x193194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193190u;
        // 0x193194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193190u, 0x193198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193198u;
label_193198:
    // 0x193198: 0x1000000b  b           . + 4 + (0xB << 2)
label_19319c:
    if (ctx->pc == 0x19319Cu) {
        ctx->pc = 0x1931A0u;
        goto label_fallthrough_0x193198;
    }
    ctx->pc = 0x193198u;
    {
        const bool branch_taken_0x193198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193198) {
            ctx->pc = 0x1931C8u;
            return;
        }
    }
label_fallthrough_0x193198:
    ctx->pc = 0x1931A0u;
}
