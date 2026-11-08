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

// Function: entry_001ebda8
// Address: 0x1ebda8 - 0x1ebdb4
void entry_001ebda8_0x1ebda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebda8_0x1ebda8");
#endif

    ctx->pc = 0x1ebda8u;

    // 0x1ebda8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBDA8u;
    {
        const bool branch_taken_0x1ebda8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBDA8u;
        // 0x1ebdac: 0xae50a3b4  sw          $s0, -0x5C4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294943668), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebda8) {
            ctx->pc = 0x1EBDB4u;
            return;
        }
    }
    ctx->pc = 0x1EBDB0u;
    // 0x1ebdb0: 0x42000038  ei
    ctx->pc = 0x1ebdb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1ebdb4u;
}
