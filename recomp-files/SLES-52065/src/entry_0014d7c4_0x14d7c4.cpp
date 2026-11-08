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

// Function: entry_0014d7c4
// Address: 0x14d7c4 - 0x14d7e0
void entry_0014d7c4_0x14d7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d7c4_0x14d7c4");
#endif

    switch (ctx->pc) {
        case 0x14d7ccu: goto label_14d7cc;
        default: break;
    }

    ctx->pc = 0x14d7c4u;

    // 0x14d7c4: 0xc05379c  jal         func_14DE70
    ctx->pc = 0x14D7C4u;
    SET_GPR_U32(ctx, 31, 0x14D7CCu);
    ctx->pc = 0x14D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7C4u;
    // 0x14d7c8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE70u, 0x14D7C4u, 0x14D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7CCu;
label_14d7cc:
    // 0x14d7cc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x14d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14d7d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D7D0u;
    {
        const bool branch_taken_0x14d7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7d0) {
            ctx->pc = 0x14D7E0u;
            return;
        }
    }
    ctx->pc = 0x14D7D8u;
    // 0x14d7d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14D7D8u;
    SET_GPR_U32(ctx, 31, 0x14D7E0u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14D7D8u, 0x14D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7E0u;
}
