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

// Function: entry_00200ff0
// Address: 0x200ff0 - 0x201004
void entry_00200ff0_0x200ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200ff0_0x200ff0");
#endif

    switch (ctx->pc) {
        case 0x200ffcu: goto label_200ffc;
        default: break;
    }

    ctx->pc = 0x200ff0u;

    // 0x200ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ff4: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x200FF4u;
    SET_GPR_U32(ctx, 31, 0x200FFCu);
    ctx->pc = 0x200FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FF4u;
    // 0x200ff8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x200FF4u, 0x200FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FFCu;
label_200ffc:
    // 0x200ffc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x200FFCu;
    {
        const bool branch_taken_0x200ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FFCu;
        // 0x201000: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ffc) {
            ctx->pc = 0x20106Cu;
            return;
        }
    }
    ctx->pc = 0x201004u;
}
