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

// Function: entry_00130f28
// Address: 0x130f28 - 0x130f40
void entry_00130f28_0x130f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f28_0x130f28");
#endif

    switch (ctx->pc) {
        case 0x130f30u: goto label_130f30;
        case 0x130f38u: goto label_130f38;
        default: break;
    }

    ctx->pc = 0x130f28u;

    // 0x130f28: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130F28u;
    SET_GPR_U32(ctx, 31, 0x130F30u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130F28u, 0x130F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F30u;
label_130f30:
    // 0x130f30: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130F30u;
    SET_GPR_U32(ctx, 31, 0x130F38u);
    ctx->pc = 0x130F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F30u;
    // 0x130f34: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130F30u, 0x130F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130F38u;
    SET_GPR_U32(ctx, 31, 0x130F40u);
    ctx->pc = 0x130F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F38u;
    // 0x130f3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130F38u, 0x130F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F40u;
}
