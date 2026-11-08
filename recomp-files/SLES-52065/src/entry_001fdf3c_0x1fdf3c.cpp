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

// Function: entry_001fdf3c
// Address: 0x1fdf3c - 0x1fdf4c
void entry_001fdf3c_0x1fdf3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf3c_0x1fdf3c");
#endif

    ctx->pc = 0x1fdf3cu;

    // 0x1fdf3c: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDF3Cu;
    {
        const bool branch_taken_0x1fdf3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf3c) {
            ctx->pc = 0x1FDF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF3Cu;
            // 0x1fdf40: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF4Cu;
            return;
        }
    }
    ctx->pc = 0x1FDF44u;
    // 0x1fdf44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDF44u;
    {
        const bool branch_taken_0x1fdf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF44u;
        // 0x1fdf48: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf44) {
            ctx->pc = 0x1FDF64u;
            return;
        }
    }
    ctx->pc = 0x1FDF4Cu;
}
