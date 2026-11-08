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

// Function: entry_0011bd68
// Address: 0x11bd68 - 0x11bd7c
void entry_0011bd68_0x11bd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd68_0x11bd68");
#endif

    ctx->pc = 0x11bd68u;

label_11bd68:
    // 0x11bd68: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11bd6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BD6Cu;
    {
        const bool branch_taken_0x11bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd6c) {
            ctx->pc = 0x11BD7Cu;
            return;
        }
    }
    ctx->pc = 0x11BD74u;
    // 0x11bd74: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x11BD74u;
    {
        const bool branch_taken_0x11bd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD74u;
        // 0x11bd78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd74) {
            ctx->pc = 0x11BD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bd68;
        }
    }
    ctx->pc = 0x11BD7Cu;
}
