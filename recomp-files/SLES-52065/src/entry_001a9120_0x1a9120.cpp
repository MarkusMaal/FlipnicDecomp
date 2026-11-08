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

// Function: entry_001a9120
// Address: 0x1a9120 - 0x1a912c
void entry_001a9120_0x1a9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9120_0x1a9120");
#endif

    ctx->pc = 0x1a9120u;

    // 0x1a9120: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1a9124: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A9124u;
    {
        const bool branch_taken_0x1a9124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9124u;
        // 0x1a9128: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9124) {
            ctx->pc = 0x1A90F4u;
            return;
        }
    }
    ctx->pc = 0x1A912Cu;
}
