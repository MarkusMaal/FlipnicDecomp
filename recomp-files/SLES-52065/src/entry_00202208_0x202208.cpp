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

// Function: entry_00202208
// Address: 0x202208 - 0x202228
void entry_00202208_0x202208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202208_0x202208");
#endif

    ctx->pc = 0x202208u;

label_202208:
    // 0x202208: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x202208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20220c: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202210: 0x10c0fff5  beqz        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x202210u;
    {
        const bool branch_taken_0x202210 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x202214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202210u;
        // 0x202214: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202210) {
            ctx->pc = 0x2021E8u;
            return;
        }
    }
    ctx->pc = 0x202218u;
    // 0x202218: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x202218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20221c: 0x50c3fffa  beql        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20221Cu;
    {
        const bool branch_taken_0x20221c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x20221c) {
            ctx->pc = 0x202220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20221Cu;
            // 0x202220: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202208;
        }
    }
    ctx->pc = 0x202224u;
    // 0x202224: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x202224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x202228u;
}
