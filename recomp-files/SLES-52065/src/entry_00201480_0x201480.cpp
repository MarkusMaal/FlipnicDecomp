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

// Function: entry_00201480
// Address: 0x201480 - 0x2014a0
void entry_00201480_0x201480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201480_0x201480");
#endif

    switch (ctx->pc) {
        case 0x201488u: goto label_201488;
        case 0x201498u: goto label_201498;
        default: break;
    }

    ctx->pc = 0x201480u;

    // 0x201480: 0xc0805a6  jal         func_201698
    ctx->pc = 0x201480u;
    SET_GPR_U32(ctx, 31, 0x201488u);
    ctx->pc = 0x201484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201480u;
    // 0x201484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201698u, 0x201480u, 0x201488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201488u;
label_201488:
    // 0x201488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20148c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201490: 0xc08058e  jal         func_201638
    ctx->pc = 0x201490u;
    SET_GPR_U32(ctx, 31, 0x201498u);
    ctx->pc = 0x201494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201490u;
    // 0x201494: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201638u, 0x201490u, 0x201498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201498u;
label_201498:
    // 0x201498: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x201498u;
    {
        const bool branch_taken_0x201498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201498u;
        // 0x20149c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201498) {
            ctx->pc = 0x2014C4u;
            return;
        }
    }
    ctx->pc = 0x2014A0u;
}
