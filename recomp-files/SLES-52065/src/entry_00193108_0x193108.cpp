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

// Function: entry_00193108
// Address: 0x193108 - 0x193118
void entry_00193108_0x193108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193108_0x193108");
#endif

    ctx->pc = 0x193108u;

label_193108:
    // 0x193108: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x193108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19310c:
    // 0x19310c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_193110:
    // 0x193110: 0x320f809  jalr        $t9
label_193114:
    if (ctx->pc == 0x193114u) {
        ctx->pc = 0x193114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193110u;
        // 0x193114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193118u;
        goto label_fallthrough_0x193110;
    }
    ctx->pc = 0x193110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193118u);
        ctx->pc = 0x193114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193110u;
        // 0x193114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193110u, 0x193118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x193110:
    ctx->pc = 0x193118u;
}
