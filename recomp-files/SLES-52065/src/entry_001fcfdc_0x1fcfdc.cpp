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

// Function: entry_001fcfdc
// Address: 0x1fcfdc - 0x1fcfec
void entry_001fcfdc_0x1fcfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcfdc_0x1fcfdc");
#endif

    ctx->pc = 0x1fcfdcu;

    // 0x1fcfdc: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x1fcfdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1fcfe0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1fcfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcfe4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1FCFE4u;
    {
        const bool branch_taken_0x1fcfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFE4u;
        // 0x1fcfe8: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfe4) {
            ctx->pc = 0x1FD340u;
            return;
        }
    }
    ctx->pc = 0x1FCFECu;
}
