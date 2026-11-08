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

// Function: entry_001487f0
// Address: 0x1487f0 - 0x14880c
void entry_001487f0_0x1487f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001487f0_0x1487f0");
#endif

    ctx->pc = 0x1487f0u;

    // 0x1487f0: 0x8dd00000  lw          $s0, 0x0($t6)
    ctx->pc = 0x1487f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1487f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1487f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1487f8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1487fc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148800: 0xadb00000  sw          $s0, 0x0($t5)
    ctx->pc = 0x148800u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 16));
    // 0x148804: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x148804u;
    {
        const bool branch_taken_0x148804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148804u;
        // 0x148808: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148804) {
            ctx->pc = 0x1488D0u;
            return;
        }
    }
    ctx->pc = 0x14880Cu;
}
