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

// Function: entry_001379c4
// Address: 0x1379c4 - 0x1379d4
void entry_001379c4_0x1379c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001379c4_0x1379c4");
#endif

    switch (ctx->pc) {
        case 0x1379ccu: goto label_1379cc;
        default: break;
    }

    ctx->pc = 0x1379c4u;

    // 0x1379c4: 0xc04e9f8  jal         func_13A7E0
    ctx->pc = 0x1379C4u;
    SET_GPR_U32(ctx, 31, 0x1379CCu);
    ctx->pc = 0x1379C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379C4u;
    // 0x1379c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7E0u, 0x1379C4u, 0x1379CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379CCu;
label_1379cc:
    // 0x1379cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1379CCu;
    {
        const bool branch_taken_0x1379cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1379D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379CCu;
        // 0x1379d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379cc) {
            ctx->pc = 0x137A00u;
            return;
        }
    }
    ctx->pc = 0x1379D4u;
}
