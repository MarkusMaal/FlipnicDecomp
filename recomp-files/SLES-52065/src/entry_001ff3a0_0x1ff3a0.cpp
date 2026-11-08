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

// Function: entry_001ff3a0
// Address: 0x1ff3a0 - 0x1ff3b0
void entry_001ff3a0_0x1ff3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff3a0_0x1ff3a0");
#endif

    ctx->pc = 0x1ff3a0u;

    // 0x1ff3a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF3A0u;
    {
        const bool branch_taken_0x1ff3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF3A0u;
        // 0x1ff3a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff3a0) {
            ctx->pc = 0x1FF3B0u;
            return;
        }
    }
    ctx->pc = 0x1FF3A8u;
    // 0x1ff3a8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ff3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ff3ac: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ff3acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x1ff3b0u;
}
