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

// Function: entry_0013e540
// Address: 0x13e540 - 0x13e550
void entry_0013e540_0x13e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e540_0x13e540");
#endif

    switch (ctx->pc) {
        case 0x13e54cu: goto label_13e54c;
        default: break;
    }

    ctx->pc = 0x13e540u;

    // 0x13e540: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x13e544: 0xc04bb10  jal         func_12EC40
    ctx->pc = 0x13E544u;
    SET_GPR_U32(ctx, 31, 0x13E54Cu);
    ctx->pc = 0x13E548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E544u;
    // 0x13e548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC40u, 0x13E544u, 0x13E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E54Cu;
label_13e54c:
    // 0x13e54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13e550u;
}
