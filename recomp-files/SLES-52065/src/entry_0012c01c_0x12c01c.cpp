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

// Function: entry_0012c01c
// Address: 0x12c01c - 0x12c02c
void entry_0012c01c_0x12c01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c01c_0x12c01c");
#endif

    ctx->pc = 0x12c01cu;

    // 0x12c01c: 0x0  nop
    ctx->pc = 0x12c01cu;
    // NOP
    // 0x12c020: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x12c020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12c024: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12C024u;
    {
        const bool branch_taken_0x12c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C024u;
        // 0x12c028: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c024) {
            ctx->pc = 0x12BFE8u;
            return;
        }
    }
    ctx->pc = 0x12C02Cu;
}
