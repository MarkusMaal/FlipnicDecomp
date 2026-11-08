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

// Function: entry_001ed8f8
// Address: 0x1ed8f8 - 0x1ed918
void entry_001ed8f8_0x1ed8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed8f8_0x1ed8f8");
#endif

    switch (ctx->pc) {
        case 0x1ed914u: goto label_1ed914;
        default: break;
    }

    ctx->pc = 0x1ed8f8u;

    // 0x1ed8f8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1ed8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1ed8fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ed8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed900: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1ed900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1ed904: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED904u;
    {
        const bool branch_taken_0x1ed904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED904u;
        // 0x1ed908: 0x3c05001f  lui         $a1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed904) {
            ctx->pc = 0x1ED918u;
            return;
        }
    }
    ctx->pc = 0x1ED90Cu;
    // 0x1ed90c: 0xc07ae80  jal         func_1EBA00
    ctx->pc = 0x1ED90Cu;
    SET_GPR_U32(ctx, 31, 0x1ED914u);
    ctx->pc = 0x1EBA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA00u, 0x1ED90Cu, 0x1ED914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ed914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x1ed918u;
}
