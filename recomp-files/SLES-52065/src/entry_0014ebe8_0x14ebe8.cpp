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

// Function: entry_0014ebe8
// Address: 0x14ebe8 - 0x14ebf8
void entry_0014ebe8_0x14ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ebe8_0x14ebe8");
#endif

    ctx->pc = 0x14ebe8u;

    // 0x14ebe8: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x14ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x14ebec: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x14ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x14ebf0: 0x1251000b  beq         $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x14EBF0u;
    {
        const bool branch_taken_0x14ebf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x14EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF0u;
        // 0x14ebf4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebf0) {
            ctx->pc = 0x14EC20u;
            return;
        }
    }
    ctx->pc = 0x14EBF8u;
}
