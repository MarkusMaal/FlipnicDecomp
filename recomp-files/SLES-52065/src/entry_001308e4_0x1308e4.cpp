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

// Function: entry_001308e4
// Address: 0x1308e4 - 0x1308f0
void entry_001308e4_0x1308e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001308e4_0x1308e4");
#endif

    ctx->pc = 0x1308e4u;

    // 0x1308e4: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1308e8: 0x1672fff5  bne         $s3, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x1308E8u;
    {
        const bool branch_taken_0x1308e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x1308ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308E8u;
        // 0x1308ec: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1308e8) {
            ctx->pc = 0x1308C0u;
            return;
        }
    }
    ctx->pc = 0x1308F0u;
}
