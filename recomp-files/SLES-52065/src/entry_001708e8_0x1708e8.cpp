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

// Function: entry_001708e8
// Address: 0x1708e8 - 0x1708fc
void entry_001708e8_0x1708e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001708e8_0x1708e8");
#endif

    ctx->pc = 0x1708e8u;

    // 0x1708e8: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x1708e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1708ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1708ECu;
    {
        const bool branch_taken_0x1708ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708ECu;
        // 0x1708f0: 0x3c070022  lui         $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708ec) {
            ctx->pc = 0x1708FCu;
            return;
        }
    }
    ctx->pc = 0x1708F4u;
    // 0x1708f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1708F4u;
    {
        const bool branch_taken_0x1708f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708F4u;
        // 0x1708f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708f4) {
            ctx->pc = 0x170900u;
            return;
        }
    }
    ctx->pc = 0x1708FCu;
}
