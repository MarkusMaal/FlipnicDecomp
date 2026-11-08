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

// Function: entry_001cb044
// Address: 0x1cb044 - 0x1cb058
void entry_001cb044_0x1cb044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb044_0x1cb044");
#endif

    switch (ctx->pc) {
        case 0x1cb050u: goto label_1cb050;
        default: break;
    }

    ctx->pc = 0x1cb044u;

    // 0x1cb044: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb048: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB048u;
    SET_GPR_U32(ctx, 31, 0x1CB050u);
    ctx->pc = 0x1CB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB048u;
    // 0x1cb04c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB048u, 0x1CB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB050u;
label_1cb050:
    // 0x1cb050: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CB050u;
    SET_GPR_U32(ctx, 31, 0x1CB058u);
    ctx->pc = 0x1CB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB050u;
    // 0x1cb054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CB050u, 0x1CB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB058u;
}
