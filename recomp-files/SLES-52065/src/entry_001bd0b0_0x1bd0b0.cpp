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

// Function: entry_001bd0b0
// Address: 0x1bd0b0 - 0x1bd0c0
void entry_001bd0b0_0x1bd0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd0b0_0x1bd0b0");
#endif

    ctx->pc = 0x1bd0b0u;

    // 0x1bd0b0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD0B0u;
    {
        const bool branch_taken_0x1bd0b0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1BD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0B0u;
        // 0x1bd0b4: 0x121103  sra         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0b0) {
            ctx->pc = 0x1BD0C0u;
            return;
        }
    }
    ctx->pc = 0x1BD0B8u;
    // 0x1bd0b8: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1bd0bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bd0bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    ctx->pc = 0x1bd0c0u;
}
