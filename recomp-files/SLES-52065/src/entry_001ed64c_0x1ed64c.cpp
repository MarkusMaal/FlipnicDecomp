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

// Function: entry_001ed64c
// Address: 0x1ed64c - 0x1ed660
void entry_001ed64c_0x1ed64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed64c_0x1ed64c");
#endif

    switch (ctx->pc) {
        case 0x1ed65cu: goto label_1ed65c;
        default: break;
    }

    ctx->pc = 0x1ed64cu;

    // 0x1ed64c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED64Cu;
    {
        const bool branch_taken_0x1ed64c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED64Cu;
        // 0x1ed650: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed64c) {
            ctx->pc = 0x1ED660u;
            return;
        }
    }
    ctx->pc = 0x1ED654u;
    // 0x1ed654: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ED654u;
    SET_GPR_U32(ctx, 31, 0x1ED65Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ED654u, 0x1ED65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED65Cu;
label_1ed65c:
    // 0x1ed65c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ed65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x1ed660u;
}
