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

// Function: entry_001a98e0
// Address: 0x1a98e0 - 0x1a98f0
void entry_001a98e0_0x1a98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a98e0_0x1a98e0");
#endif

    ctx->pc = 0x1a98e0u;

    // 0x1a98e0: 0x2b71821  addu        $v1, $s5, $s7
    ctx->pc = 0x1a98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
    // 0x1a98e4: 0xac62067c  sw          $v0, 0x67C($v1)
    ctx->pc = 0x1a98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1660), GPR_U32(ctx, 2));
    // 0x1a98e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A98E8u;
    {
        const bool branch_taken_0x1a98e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98E8u;
        // 0x1a98ec: 0x26f70024  addiu       $s7, $s7, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98e8) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A98F0u;
}
