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

// Function: entry_001d5498
// Address: 0x1d5498 - 0x1d54a0
void entry_001d5498_0x1d5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5498_0x1d5498");
#endif

    ctx->pc = 0x1d5498u;

    // 0x1d5498: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D5498u;
    {
        const bool branch_taken_0x1d5498 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d5498) {
            ctx->pc = 0x1D549Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5498u;
            // 0x1d549c: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D54A0u;
            return;
        }
    }
    ctx->pc = 0x1D54A0u;
}
