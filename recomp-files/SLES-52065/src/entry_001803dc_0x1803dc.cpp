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

// Function: entry_001803dc
// Address: 0x1803dc - 0x1803e4
void entry_001803dc_0x1803dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001803dc_0x1803dc");
#endif

    ctx->pc = 0x1803dcu;

    // 0x1803dc: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x1803DCu;
    {
        const bool branch_taken_0x1803dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803DCu;
        // 0x1803e0: 0xaf838670  sw          $v1, -0x7990($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803dc) {
            ctx->pc = 0x180A0Cu;
            return;
        }
    }
    ctx->pc = 0x1803E4u;
}
