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

// Function: entry_001bdcd8
// Address: 0x1bdcd8 - 0x1bdce4
void entry_001bdcd8_0x1bdcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdcd8_0x1bdcd8");
#endif

    ctx->pc = 0x1bdcd8u;

    // 0x1bdcd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1bdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bdcdc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1BDCDCu;
    {
        const bool branch_taken_0x1bdcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCDCu;
        // 0x1bdce0: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcdc) {
            ctx->pc = 0x1BDD2Cu;
            return;
        }
    }
    ctx->pc = 0x1BDCE4u;
}
