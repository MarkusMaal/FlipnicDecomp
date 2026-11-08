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

// Function: entry_001a9910
// Address: 0x1a9910 - 0x1a9920
void entry_001a9910_0x1a9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9910_0x1a9910");
#endif

    ctx->pc = 0x1a9910u;

    // 0x1a9910: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9910u;
    {
        const bool branch_taken_0x1a9910 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9910u;
        // 0x1a9914: 0x112883  sra         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9910) {
            ctx->pc = 0x1A9920u;
            return;
        }
    }
    ctx->pc = 0x1A9918u;
    // 0x1a9918: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a9918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a991c: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x1a991cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
    ctx->pc = 0x1a9920u;
}
