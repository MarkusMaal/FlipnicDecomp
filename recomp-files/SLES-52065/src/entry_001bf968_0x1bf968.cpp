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

// Function: entry_001bf968
// Address: 0x1bf968 - 0x1bf980
void entry_001bf968_0x1bf968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf968_0x1bf968");
#endif

    switch (ctx->pc) {
        case 0x1bf974u: goto label_1bf974;
        default: break;
    }

    ctx->pc = 0x1bf968u;

    // 0x1bf968: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf96c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF96Cu;
    SET_GPR_U32(ctx, 31, 0x1BF974u);
    ctx->pc = 0x1BF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF96Cu;
    // 0x1bf970: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF96Cu, 0x1BF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF974u;
label_1bf974:
    // 0x1bf974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bf974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf978: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BF978u;
    SET_GPR_U32(ctx, 31, 0x1BF980u);
    ctx->pc = 0x1BF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF978u;
    // 0x1bf97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BF978u, 0x1BF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF980u;
}
