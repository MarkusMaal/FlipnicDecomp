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

// Function: entry_001bbfdc
// Address: 0x1bbfdc - 0x1bbfe4
void entry_001bbfdc_0x1bbfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbfdc_0x1bbfdc");
#endif

    ctx->pc = 0x1bbfdcu;

    // 0x1bbfdc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBFDCu;
    {
        const bool branch_taken_0x1bbfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFDCu;
        // 0x1bbfe0: 0xae550000  sw          $s5, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfdc) {
            ctx->pc = 0x1BC040u;
            return;
        }
    }
    ctx->pc = 0x1BBFE4u;
}
