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

// Function: entry_001949b4
// Address: 0x1949b4 - 0x1949c8
void entry_001949b4_0x1949b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001949b4_0x1949b4");
#endif

    ctx->pc = 0x1949b4u;

    // 0x1949b4: 0x0  nop
    ctx->pc = 0x1949b4u;
    // NOP
    // 0x1949b8: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1949B8u;
    {
        const bool branch_taken_0x1949b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1949b8) {
            ctx->pc = 0x1949ECu;
            return;
        }
    }
    ctx->pc = 0x1949C0u;
    // 0x1949c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1949C0u;
    {
        const bool branch_taken_0x1949c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949C0u;
        // 0x1949c4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949c0) {
            ctx->pc = 0x1949ECu;
            return;
        }
    }
    ctx->pc = 0x1949C8u;
}
