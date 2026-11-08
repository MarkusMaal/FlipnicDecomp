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

// Function: entry_001497cc
// Address: 0x1497cc - 0x1497e4
void entry_001497cc_0x1497cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001497cc_0x1497cc");
#endif

    ctx->pc = 0x1497ccu;

    // 0x1497cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1497d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1497d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1497D4u;
    {
        const bool branch_taken_0x1497d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497D4u;
        // 0x1497d8: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497d4) {
            ctx->pc = 0x1497E4u;
            return;
        }
    }
    ctx->pc = 0x1497DCu;
    // 0x1497dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1497e0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1497e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x1497e4u;
}
