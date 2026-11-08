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

// Function: entry_001f805c
// Address: 0x1f805c - 0x1f8070
void entry_001f805c_0x1f805c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f805c_0x1f805c");
#endif

    ctx->pc = 0x1f805cu;

    // 0x1f805c: 0x8e62bb10  lw          $v0, -0x44F0($s3)
    ctx->pc = 0x1f805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949648)));
    // 0x1f8060: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8060u;
    {
        const bool branch_taken_0x1f8060 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8060u;
        // 0x1f8064: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8060) {
            ctx->pc = 0x1F8070u;
            return;
        }
    }
    ctx->pc = 0x1F8068u;
    // 0x1f8068: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F8068u;
    SET_GPR_U32(ctx, 31, 0x1F8070u);
    ctx->pc = 0x1F806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8068u;
    // 0x1f806c: 0x24844818  addiu       $a0, $a0, 0x4818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F8068u, 0x1F8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8070u;
}
