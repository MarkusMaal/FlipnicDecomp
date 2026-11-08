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

// Function: entry_0012c30c
// Address: 0x12c30c - 0x12c324
void entry_0012c30c_0x12c30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c30c_0x12c30c");
#endif

    ctx->pc = 0x12c30cu;

    // 0x12c30c: 0x0  nop
    ctx->pc = 0x12c30cu;
    // NOP
    // 0x12c310: 0x10450013  beq         $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C310u;
    {
        const bool branch_taken_0x12c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12c310) {
            ctx->pc = 0x12C360u;
            return;
        }
    }
    ctx->pc = 0x12C318u;
    // 0x12c318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c31c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12C31Cu;
    {
        const bool branch_taken_0x12c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C31Cu;
        // 0x12c320: 0xa5420000  sh          $v0, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c31c) {
            ctx->pc = 0x12C360u;
            return;
        }
    }
    ctx->pc = 0x12C324u;
}
