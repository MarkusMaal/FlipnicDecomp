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

// Function: entry_001ec3b8
// Address: 0x1ec3b8 - 0x1ec3c8
void entry_001ec3b8_0x1ec3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec3b8_0x1ec3b8");
#endif

    switch (ctx->pc) {
        case 0x1ec3c0u: goto label_1ec3c0;
        default: break;
    }

    ctx->pc = 0x1ec3b8u;

    // 0x1ec3b8: 0xc07ad54  jal         func_1EB550
    ctx->pc = 0x1EC3B8u;
    SET_GPR_U32(ctx, 31, 0x1EC3C0u);
    ctx->pc = 0x1EC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3B8u;
    // 0x1ec3bc: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB550u, 0x1EC3B8u, 0x1EC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3C0u;
label_1ec3c0:
    // 0x1ec3c0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1EC3C0u;
    {
        const bool branch_taken_0x1ec3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3c0) {
            ctx->pc = 0x1EC360u;
            return;
        }
    }
    ctx->pc = 0x1EC3C8u;
}
