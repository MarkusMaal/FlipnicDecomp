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

// Function: entry_001fc760
// Address: 0x1fc760 - 0x1fc774
void entry_001fc760_0x1fc760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc760_0x1fc760");
#endif

    switch (ctx->pc) {
        case 0x1fc76cu: goto label_1fc76c;
        default: break;
    }

    ctx->pc = 0x1fc760u;

    // 0x1fc760: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc764: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1FC764u;
    SET_GPR_U32(ctx, 31, 0x1FC76Cu);
    ctx->pc = 0x1FC768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC764u;
    // 0x1fc768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1FC764u, 0x1FC76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC76Cu;
label_1fc76c:
    // 0x1fc76c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC76Cu;
    {
        const bool branch_taken_0x1fc76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC76Cu;
        // 0x1fc770: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc76c) {
            ctx->pc = 0x1FC7D8u;
            return;
        }
    }
    ctx->pc = 0x1FC774u;
}
