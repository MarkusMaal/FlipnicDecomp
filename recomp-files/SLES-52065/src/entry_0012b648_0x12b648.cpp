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

// Function: entry_0012b648
// Address: 0x12b648 - 0x12b660
void entry_0012b648_0x12b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b648_0x12b648");
#endif

    switch (ctx->pc) {
        case 0x12b654u: goto label_12b654;
        default: break;
    }

    ctx->pc = 0x12b648u;

    // 0x12b648: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x12b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x12b64c: 0xc04aa64  jal         func_12A990
    ctx->pc = 0x12B64Cu;
    SET_GPR_U32(ctx, 31, 0x12B654u);
    ctx->pc = 0x12B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B64Cu;
    // 0x12b650: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A990u, 0x12B64Cu, 0x12B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B654u;
label_12b654:
    // 0x12b654: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12B654u;
    {
        const bool branch_taken_0x12b654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b654) {
            ctx->pc = 0x12B660u;
            return;
        }
    }
    ctx->pc = 0x12B65Cu;
    // 0x12b65c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x12b660u;
}
