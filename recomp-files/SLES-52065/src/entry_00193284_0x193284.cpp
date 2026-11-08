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

// Function: entry_00193284
// Address: 0x193284 - 0x193294
void entry_00193284_0x193284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193284_0x193284");
#endif

    ctx->pc = 0x193284u;

label_193284:
    // 0x193284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193288:
    // 0x193288: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_19328c:
    // 0x19328c: 0x320f809  jalr        $t9
label_193290:
    if (ctx->pc == 0x193290u) {
        ctx->pc = 0x193290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19328Cu;
        // 0x193290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193294u;
        goto label_fallthrough_0x19328c;
    }
    ctx->pc = 0x19328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193294u);
        ctx->pc = 0x193290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19328Cu;
        // 0x193290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19328Cu, 0x193294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x19328c:
    ctx->pc = 0x193294u;
}
