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

// Function: entry_0014a830
// Address: 0x14a830 - 0x14a840
void entry_0014a830_0x14a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a830_0x14a830");
#endif

    ctx->pc = 0x14a830u;

    // 0x14a830: 0x16340003  bne         $s1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A830u;
    {
        const bool branch_taken_0x14a830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x14A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A830u;
        // 0x14a834: 0x27a40860  addiu       $a0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a830) {
            ctx->pc = 0x14A840u;
            return;
        }
    }
    ctx->pc = 0x14A838u;
    // 0x14a838: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14A838u;
    {
        const bool branch_taken_0x14a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A838u;
        // 0x14a83c: 0x27a801a0  addiu       $t0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a838) {
            ctx->pc = 0x14A898u;
            return;
        }
    }
    ctx->pc = 0x14A840u;
}
