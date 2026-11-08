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

// Function: entry_001ec3c8
// Address: 0x1ec3c8 - 0x1ec3d8
void entry_001ec3c8_0x1ec3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec3c8_0x1ec3c8");
#endif

    switch (ctx->pc) {
        case 0x1ec3d0u: goto label_1ec3d0;
        default: break;
    }

    ctx->pc = 0x1ec3c8u;

    // 0x1ec3c8: 0xc07ad34  jal         func_1EB4D0
    ctx->pc = 0x1EC3C8u;
    SET_GPR_U32(ctx, 31, 0x1EC3D0u);
    ctx->pc = 0x1EC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC3C8u;
    // 0x1ec3cc: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4D0u, 0x1EC3C8u, 0x1EC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3D0u;
label_1ec3d0:
    // 0x1ec3d0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1EC3D0u;
    {
        const bool branch_taken_0x1ec3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec3d0) {
            ctx->pc = 0x1EC360u;
            return;
        }
    }
    ctx->pc = 0x1EC3D8u;
}
