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

// Function: entry_001ae8c0
// Address: 0x1ae8c0 - 0x1ae8d8
void entry_001ae8c0_0x1ae8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae8c0_0x1ae8c0");
#endif

    switch (ctx->pc) {
        case 0x1ae8ccu: goto label_1ae8cc;
        default: break;
    }

    ctx->pc = 0x1ae8c0u;

    // 0x1ae8c0: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1ae8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1ae8c4: 0xc06bc68  jal         func_1AF1A0
    ctx->pc = 0x1AE8C4u;
    SET_GPR_U32(ctx, 31, 0x1AE8CCu);
    ctx->pc = 0x1AE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8C4u;
    // 0x1ae8c8: 0x24440670  addiu       $a0, $v0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF1A0u, 0x1AE8C4u, 0x1AE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8CCu;
label_1ae8cc:
    // 0x1ae8cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE8CCu;
    {
        const bool branch_taken_0x1ae8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae8cc) {
            ctx->pc = 0x1AE8D8u;
            return;
        }
    }
    ctx->pc = 0x1AE8D4u;
    // 0x1ae8d4: 0xae9106a8  sw          $s1, 0x6A8($s4)
    ctx->pc = 0x1ae8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 17));
    ctx->pc = 0x1ae8d8u;
}
