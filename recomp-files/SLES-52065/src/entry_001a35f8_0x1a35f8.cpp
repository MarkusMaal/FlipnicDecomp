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

// Function: entry_001a35f8
// Address: 0x1a35f8 - 0x1a3600
void entry_001a35f8_0x1a35f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a35f8_0x1a35f8");
#endif

    ctx->pc = 0x1a35f8u;

    // 0x1a35f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A35F8u;
    {
        const bool branch_taken_0x1a35f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F8u;
        // 0x1a35fc: 0xae320688  sw          $s2, 0x688($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1672), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35f8) {
            ctx->pc = 0x1A366Cu;
            return;
        }
    }
    ctx->pc = 0x1A3600u;
}
