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

// Function: entry_00199f24
// Address: 0x199f24 - 0x199f38
void entry_00199f24_0x199f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199f24_0x199f24");
#endif

    switch (ctx->pc) {
        case 0x199f2cu: goto label_199f2c;
        default: break;
    }

    ctx->pc = 0x199f24u;

    // 0x199f24: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x199F24u;
    SET_GPR_U32(ctx, 31, 0x199F2Cu);
    ctx->pc = 0x199F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F24u;
    // 0x199f28: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x199F24u, 0x199F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199F2Cu;
label_199f2c:
    // 0x199f2c: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x199f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x199f30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x199f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199f38u;
}
