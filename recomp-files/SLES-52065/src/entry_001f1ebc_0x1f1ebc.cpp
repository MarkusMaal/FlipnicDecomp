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

// Function: entry_001f1ebc
// Address: 0x1f1ebc - 0x1f1ecc
void entry_001f1ebc_0x1f1ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1ebc_0x1f1ebc");
#endif

    switch (ctx->pc) {
        case 0x1f1ec4u: goto label_1f1ec4;
        default: break;
    }

    ctx->pc = 0x1f1ebcu;

    // 0x1f1ebc: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F1EBCu;
    SET_GPR_U32(ctx, 31, 0x1F1EC4u);
    ctx->pc = 0x1F1EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EBCu;
    // 0x1f1ec0: 0x8e84a46c  lw          $a0, -0x5B94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F1EBCu, 0x1F1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EC4u;
label_1f1ec4:
    // 0x1f1ec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1EC4u;
    {
        const bool branch_taken_0x1f1ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EC4u;
        // 0x1f1ec8: 0x2610ee40  addiu       $s0, $s0, -0x11C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ec4) {
            ctx->pc = 0x1F1ED8u;
            return;
        }
    }
    ctx->pc = 0x1F1ECCu;
}
