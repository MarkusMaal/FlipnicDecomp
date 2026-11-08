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

// Function: entry_001b7fb4
// Address: 0x1b7fb4 - 0x1b7fd0
void entry_001b7fb4_0x1b7fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7fb4_0x1b7fb4");
#endif

    ctx->pc = 0x1b7fb4u;

    // 0x1b7fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7fbc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x1b7fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b7fc0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FC0u;
    {
        const bool branch_taken_0x1b7fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b7fc0) {
            ctx->pc = 0x1B7FD0u;
            return;
        }
    }
    ctx->pc = 0x1B7FC8u;
    // 0x1b7fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7FC8u;
    {
        const bool branch_taken_0x1b7fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC8u;
        // 0x1b7fcc: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fc8) {
            ctx->pc = 0x1B7FD8u;
            return;
        }
    }
    ctx->pc = 0x1B7FD0u;
}
