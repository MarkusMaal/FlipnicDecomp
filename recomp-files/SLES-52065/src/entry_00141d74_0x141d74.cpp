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

// Function: entry_00141d74
// Address: 0x141d74 - 0x141d94
void entry_00141d74_0x141d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d74_0x141d74");
#endif

    switch (ctx->pc) {
        case 0x141d7cu: goto label_141d7c;
        case 0x141d88u: goto label_141d88;
        default: break;
    }

    ctx->pc = 0x141d74u;

    // 0x141d74: 0xc05077c  jal         func_141DF0
    ctx->pc = 0x141D74u;
    SET_GPR_U32(ctx, 31, 0x141D7Cu);
    ctx->pc = 0x141D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D74u;
    // 0x141d78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DF0u, 0x141D74u, 0x141D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D7Cu;
label_141d7c:
    // 0x141d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d80: 0xc050778  jal         func_141DE0
    ctx->pc = 0x141D80u;
    SET_GPR_U32(ctx, 31, 0x141D88u);
    ctx->pc = 0x141D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141D80u;
    // 0x141d84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DE0u, 0x141D80u, 0x141D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D88u;
label_141d88:
    // 0x141d88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x141d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141d8c: 0x1272000a  beq         $s3, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x141D8Cu;
    {
        const bool branch_taken_0x141d8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x141d8c) {
            ctx->pc = 0x141DB8u;
            return;
        }
    }
    ctx->pc = 0x141D94u;
}
