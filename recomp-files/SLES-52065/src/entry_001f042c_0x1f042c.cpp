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

// Function: entry_001f042c
// Address: 0x1f042c - 0x1f0440
void entry_001f042c_0x1f042c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f042c_0x1f042c");
#endif

    ctx->pc = 0x1f042cu;

    // 0x1f042c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F042Cu;
    {
        const bool branch_taken_0x1f042c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F042Cu;
        // 0x1f0430: 0x8e83e1c8  lw          $v1, -0x1E38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f042c) {
            ctx->pc = 0x1F0440u;
            return;
        }
    }
    ctx->pc = 0x1F0434u;
    // 0x1f0434: 0x8e82e1c8  lw          $v0, -0x1E38($s4)
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294959560)));
    // 0x1f0438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0438u;
    {
        const bool branch_taken_0x1f0438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0438u;
        // 0x1f043c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0438) {
            ctx->pc = 0x1F0448u;
            return;
        }
    }
    ctx->pc = 0x1F0440u;
}
