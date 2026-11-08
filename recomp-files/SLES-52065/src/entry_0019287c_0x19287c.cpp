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

// Function: entry_0019287c
// Address: 0x19287c - 0x19288c
void entry_0019287c_0x19287c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019287c_0x19287c");
#endif

    ctx->pc = 0x19287cu;

    // 0x19287c: 0x0  nop
    ctx->pc = 0x19287cu;
    // NOP
    // 0x192880: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x192884: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x192884u;
    {
        const bool branch_taken_0x192884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192884u;
        // 0x192888: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192884) {
            ctx->pc = 0x192838u;
            return;
        }
    }
    ctx->pc = 0x19288Cu;
}
