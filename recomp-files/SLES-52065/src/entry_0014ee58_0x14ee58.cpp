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

// Function: entry_0014ee58
// Address: 0x14ee58 - 0x14ee6c
void entry_0014ee58_0x14ee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee58_0x14ee58");
#endif

    ctx->pc = 0x14ee58u;

    // 0x14ee58: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x14ee58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x14ee5c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x14ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x14ee60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x14ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x14ee64: 0x1251000c  beq         $s2, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EE64u;
    {
        const bool branch_taken_0x14ee64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x14EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE64u;
        // 0x14ee68: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee64) {
            ctx->pc = 0x14EE98u;
            return;
        }
    }
    ctx->pc = 0x14EE6Cu;
}
