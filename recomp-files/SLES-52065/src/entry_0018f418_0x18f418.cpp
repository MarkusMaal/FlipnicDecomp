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

// Function: entry_0018f418
// Address: 0x18f418 - 0x18f430
void entry_0018f418_0x18f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f418_0x18f418");
#endif

    ctx->pc = 0x18f418u;

    // 0x18f418: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x18f418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18f41c: 0x8c6303d0  lw          $v1, 0x3D0($v1)
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
    // 0x18f420: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F420u;
    {
        const bool branch_taken_0x18f420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f420) {
            ctx->pc = 0x18F430u;
            return;
        }
    }
    ctx->pc = 0x18F428u;
    // 0x18f428: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F428u;
    {
        const bool branch_taken_0x18f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F428u;
        // 0x18f42c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f428) {
            ctx->pc = 0x18F440u;
            return;
        }
    }
    ctx->pc = 0x18F430u;
}
