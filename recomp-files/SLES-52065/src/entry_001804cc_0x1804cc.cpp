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

// Function: entry_001804cc
// Address: 0x1804cc - 0x1804dc
void entry_001804cc_0x1804cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001804cc_0x1804cc");
#endif

    ctx->pc = 0x1804ccu;

    // 0x1804cc: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1804d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1804d4: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1804D4u;
    {
        const bool branch_taken_0x1804d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1804D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804D4u;
        // 0x1804d8: 0xae430068  sw          $v1, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804d4) {
            ctx->pc = 0x180A0Cu;
            return;
        }
    }
    ctx->pc = 0x1804DCu;
}
