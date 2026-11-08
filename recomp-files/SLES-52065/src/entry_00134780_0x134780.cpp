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

// Function: entry_00134780
// Address: 0x134780 - 0x134788
void entry_00134780_0x134780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134780_0x134780");
#endif

    ctx->pc = 0x134780u;

    // 0x134780: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x134780u;
    {
        const bool branch_taken_0x134780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0xae920008  sw          $s2, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134780) {
            ctx->pc = 0x13482Cu;
            return;
        }
    }
    ctx->pc = 0x134788u;
}
