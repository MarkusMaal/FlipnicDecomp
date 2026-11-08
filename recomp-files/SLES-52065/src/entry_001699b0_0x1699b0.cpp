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

// Function: entry_001699b0
// Address: 0x1699b0 - 0x1699c0
void entry_001699b0_0x1699b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699b0_0x1699b0");
#endif

    ctx->pc = 0x1699b0u;

    // 0x1699b0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699B0u;
    {
        const bool branch_taken_0x1699b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1699b0) {
            ctx->pc = 0x1699C0u;
            return;
        }
    }
    ctx->pc = 0x1699B8u;
    // 0x1699b8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1699B8u;
    {
        const bool branch_taken_0x1699b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699B8u;
        // 0x1699bc: 0xa08001d3  sb          $zero, 0x1D3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699b8) {
            ctx->pc = 0x1699F4u;
            return;
        }
    }
    ctx->pc = 0x1699C0u;
}
