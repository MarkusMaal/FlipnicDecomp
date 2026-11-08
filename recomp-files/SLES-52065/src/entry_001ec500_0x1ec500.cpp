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

// Function: entry_001ec500
// Address: 0x1ec500 - 0x1ec514
void entry_001ec500_0x1ec500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec500_0x1ec500");
#endif

    ctx->pc = 0x1ec500u;

    // 0x1ec500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC500u;
    {
        const bool branch_taken_0x1ec500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC500u;
        // 0x1ec504: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec500) {
            ctx->pc = 0x1EC514u;
            return;
        }
    }
    ctx->pc = 0x1EC508u;
    // 0x1ec508: 0x8c43a3b8  lw          $v1, -0x5C48($v0)
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943672)));
    // 0x1ec50c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC50Cu;
    {
        const bool branch_taken_0x1ec50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC50Cu;
        // 0x1ec510: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec50c) {
            ctx->pc = 0x1EC51Cu;
            return;
        }
    }
    ctx->pc = 0x1EC514u;
}
