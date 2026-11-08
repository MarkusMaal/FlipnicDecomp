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

// Function: entry_0019c054
// Address: 0x19c054 - 0x19c068
void entry_0019c054_0x19c054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c054_0x19c054");
#endif

    switch (ctx->pc) {
        case 0x19c05cu: goto label_19c05c;
        default: break;
    }

    ctx->pc = 0x19c054u;

    // 0x19c054: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19C054u;
    SET_GPR_U32(ctx, 31, 0x19C05Cu);
    ctx->pc = 0x19C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C054u;
    // 0x19c058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19C054u, 0x19C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C05Cu;
label_19c05c:
    // 0x19c05c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C05Cu;
    {
        const bool branch_taken_0x19c05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c05c) {
            ctx->pc = 0x19C078u;
            return;
        }
    }
    ctx->pc = 0x19C064u;
    // 0x19c064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19c068u;
}
