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

// Function: entry_001b6944
// Address: 0x1b6944 - 0x1b6950
void entry_001b6944_0x1b6944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6944_0x1b6944");
#endif

    ctx->pc = 0x1b6944u;

    // 0x1b6944: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b6944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6948: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6948u;
    {
        const bool branch_taken_0x1b6948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6948u;
        // 0x1b694c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6948) {
            ctx->pc = 0x1B6954u;
            return;
        }
    }
    ctx->pc = 0x1B6950u;
}
