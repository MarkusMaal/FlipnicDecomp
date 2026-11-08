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

// Function: entry_0018eef0
// Address: 0x18eef0 - 0x18ef00
void entry_0018eef0_0x18eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eef0_0x18eef0");
#endif

    ctx->pc = 0x18eef0u;

    // 0x18eef0: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EEF0u;
    {
        const bool branch_taken_0x18eef0 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x18EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EEF0u;
        // 0x18eef4: 0x161043  sra         $v0, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eef0) {
            ctx->pc = 0x18EF00u;
            return;
        }
    }
    ctx->pc = 0x18EEF8u;
    // 0x18eef8: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x18eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x18eefc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x18eefcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x18ef00u;
}
