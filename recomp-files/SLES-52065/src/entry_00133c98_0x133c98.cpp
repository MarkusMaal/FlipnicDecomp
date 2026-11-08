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

// Function: entry_00133c98
// Address: 0x133c98 - 0x133ca8
void entry_00133c98_0x133c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133c98_0x133c98");
#endif

    switch (ctx->pc) {
        case 0x133ca4u: goto label_133ca4;
        default: break;
    }

    ctx->pc = 0x133c98u;

    // 0x133c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133c9c: 0xc080702  jal         func_201C08
    ctx->pc = 0x133C9Cu;
    SET_GPR_U32(ctx, 31, 0x133CA4u);
    ctx->pc = 0x133CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133C9Cu;
    // 0x133ca0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x133C9Cu, 0x133CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CA4u;
label_133ca4:
    // 0x133ca4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x133ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->pc = 0x133ca8u;
}
