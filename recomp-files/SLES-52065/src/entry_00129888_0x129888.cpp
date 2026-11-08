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

// Function: entry_00129888
// Address: 0x129888 - 0x12989c
void entry_00129888_0x129888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129888_0x129888");
#endif

    switch (ctx->pc) {
        case 0x129890u: goto label_129890;
        default: break;
    }

    ctx->pc = 0x129888u;

    // 0x129888: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129888u;
    SET_GPR_U32(ctx, 31, 0x129890u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129888u, 0x129890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129890u;
label_129890:
    // 0x129890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129894: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x129894u;
    SET_GPR_U32(ctx, 31, 0x12989Cu);
    ctx->pc = 0x129898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129894u;
    // 0x129898: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x129894u, 0x12989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12989Cu;
}
