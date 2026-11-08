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

// Function: entry_00143124
// Address: 0x143124 - 0x143140
void entry_00143124_0x143124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143124_0x143124");
#endif

    switch (ctx->pc) {
        case 0x14312cu: goto label_14312c;
        case 0x143138u: goto label_143138;
        default: break;
    }

    ctx->pc = 0x143124u;

    // 0x143124: 0xc05077c  jal         func_141DF0
    ctx->pc = 0x143124u;
    SET_GPR_U32(ctx, 31, 0x14312Cu);
    ctx->pc = 0x143128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143124u;
    // 0x143128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DF0u, 0x143124u, 0x14312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14312Cu;
label_14312c:
    // 0x14312c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143130: 0xc050778  jal         func_141DE0
    ctx->pc = 0x143130u;
    SET_GPR_U32(ctx, 31, 0x143138u);
    ctx->pc = 0x143134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143130u;
    // 0x143134: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DE0u, 0x143130u, 0x143138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143138u;
label_143138:
    // 0x143138: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x143138u;
    {
        const bool branch_taken_0x143138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x143138) {
            ctx->pc = 0x14316Cu;
            return;
        }
    }
    ctx->pc = 0x143140u;
}
