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

// Function: entry_001bc454
// Address: 0x1bc454 - 0x1bc484
void entry_001bc454_0x1bc454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc454_0x1bc454");
#endif

    switch (ctx->pc) {
        case 0x1bc45cu: goto label_1bc45c;
        case 0x1bc46cu: goto label_1bc46c;
        case 0x1bc47cu: goto label_1bc47c;
        default: break;
    }

    ctx->pc = 0x1bc454u;

    // 0x1bc454: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BC454u;
    SET_GPR_U32(ctx, 31, 0x1BC45Cu);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BC454u, 0x1BC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC45Cu;
label_1bc45c:
    // 0x1bc45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc464: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BC464u;
    SET_GPR_U32(ctx, 31, 0x1BC46Cu);
    ctx->pc = 0x1BC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC464u;
    // 0x1bc468: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BC464u, 0x1BC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC46Cu;
label_1bc46c:
    // 0x1bc46c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bc46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bc470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc474: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BC474u;
    SET_GPR_U32(ctx, 31, 0x1BC47Cu);
    ctx->pc = 0x1BC478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC474u;
    // 0x1bc478: 0x24a53030  addiu       $a1, $a1, 0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BC474u, 0x1BC47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC47Cu;
label_1bc47c:
    // 0x1bc47c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BC47Cu;
    {
        const bool branch_taken_0x1bc47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc47c) {
            ctx->pc = 0x1BC4E8u;
            return;
        }
    }
    ctx->pc = 0x1BC484u;
}
