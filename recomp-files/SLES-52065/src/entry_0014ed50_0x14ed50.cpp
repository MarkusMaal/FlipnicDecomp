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

// Function: entry_0014ed50
// Address: 0x14ed50 - 0x14ed58
void entry_0014ed50_0x14ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed50_0x14ed50");
#endif

    ctx->pc = 0x14ed50u;

    // 0x14ed50: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14ED50u;
    {
        const bool branch_taken_0x14ed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED50u;
        // 0x14ed54: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed50) {
            ctx->pc = 0x14EE98u;
            return;
        }
    }
    ctx->pc = 0x14ED58u;
}
