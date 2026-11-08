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

// Function: entry_001b187c
// Address: 0x1b187c - 0x1b1890
void entry_001b187c_0x1b187c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b187c_0x1b187c");
#endif

    ctx->pc = 0x1b187cu;

    // 0x1b187c: 0x831004  sllv        $v0, $v1, $a0
    ctx->pc = 0x1b187cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b1880: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1b1880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1b1884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1884u;
    {
        const bool branch_taken_0x1b1884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1884u;
        // 0x1b1888: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1884) {
            ctx->pc = 0x1B1890u;
            return;
        }
    }
    ctx->pc = 0x1B188Cu;
    // 0x1b188c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1b188cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1b1890u;
}
