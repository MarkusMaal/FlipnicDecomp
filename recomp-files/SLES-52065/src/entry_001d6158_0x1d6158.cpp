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

// Function: entry_001d6158
// Address: 0x1d6158 - 0x1d6168
void entry_001d6158_0x1d6158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6158_0x1d6158");
#endif

    ctx->pc = 0x1d6158u;

    // 0x1d6158: 0x52c00004  beql        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6158u;
    {
        const bool branch_taken_0x1d6158 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6158) {
            ctx->pc = 0x1D615Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6158u;
            // 0x1d615c: 0xdfb000d0  ld          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D616Cu;
            return;
        }
    }
    ctx->pc = 0x1D6160u;
    // 0x1d6160: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D6160u;
    SET_GPR_U32(ctx, 31, 0x1D6168u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D6160u, 0x1D6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6168u;
}
