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

// Function: entry_0018af54
// Address: 0x18af54 - 0x18af8c
void entry_0018af54_0x18af54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018af54_0x18af54");
#endif

    switch (ctx->pc) {
        case 0x18af5cu: goto label_18af5c;
        case 0x18af7cu: goto label_18af7c;
        default: break;
    }

    ctx->pc = 0x18af54u;

    // 0x18af54: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x18AF54u;
    SET_GPR_U32(ctx, 31, 0x18AF5Cu);
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x18AF54u, 0x18AF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF5Cu;
label_18af5c:
    // 0x18af5c: 0x0  nop
    ctx->pc = 0x18af5cu;
    // NOP
    // 0x18af60: 0x0  nop
    ctx->pc = 0x18af60u;
    // NOP
    // 0x18af64: 0x0  nop
    ctx->pc = 0x18af64u;
    // NOP
    // 0x18af68: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18AF68u;
    {
        const bool branch_taken_0x18af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af68) {
            ctx->pc = 0x18AF50u;
            return;
        }
    }
    ctx->pc = 0x18AF70u;
    // 0x18af70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af74: 0xc047988  jal         func_11E620
    ctx->pc = 0x18AF74u;
    SET_GPR_U32(ctx, 31, 0x18AF7Cu);
    ctx->pc = 0x18AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF74u;
    // 0x18af78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x18AF74u, 0x18AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF7Cu;
label_18af7c:
    // 0x18af7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AF7Cu;
    {
        const bool branch_taken_0x18af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af7c) {
            ctx->pc = 0x18AF8Cu;
            return;
        }
    }
    ctx->pc = 0x18AF84u;
    // 0x18af84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18AF84u;
    {
        const bool branch_taken_0x18af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF84u;
        // 0x18af88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af84) {
            ctx->pc = 0x18B00Cu;
            return;
        }
    }
    ctx->pc = 0x18AF8Cu;
}
