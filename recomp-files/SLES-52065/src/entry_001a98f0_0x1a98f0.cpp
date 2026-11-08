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

// Function: entry_001a98f0
// Address: 0x1a98f0 - 0x1a9900
void entry_001a98f0_0x1a98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a98f0_0x1a98f0");
#endif

    ctx->pc = 0x1a98f0u;

    // 0x1a98f0: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x1a98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x1a98f4: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1a98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    // 0x1a98f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A98F8u;
    {
        const bool branch_taken_0x1a98f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98F8u;
        // 0x1a98fc: 0x26d60024  addiu       $s6, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98f8) {
            ctx->pc = 0x1A996Cu;
            return;
        }
    }
    ctx->pc = 0x1A9900u;
}
