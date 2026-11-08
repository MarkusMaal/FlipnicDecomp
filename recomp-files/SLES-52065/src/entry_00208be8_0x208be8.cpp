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

// Function: entry_00208be8
// Address: 0x208be8 - 0x208bfc
void entry_00208be8_0x208be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208be8_0x208be8");
#endif

    ctx->pc = 0x208be8u;

    // 0x208be8: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x208BE8u;
    {
        const bool branch_taken_0x208be8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x208BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE8u;
        // 0x208bec: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208be8) {
            ctx->pc = 0x208C74u;
            return;
        }
    }
    ctx->pc = 0x208BF0u;
    // 0x208bf0: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x208BF0u;
    {
        const bool branch_taken_0x208bf0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x208BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BF0u;
        // 0x208bf4: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bf0) {
            ctx->pc = 0x208BFCu;
            return;
        }
    }
    ctx->pc = 0x208BF8u;
    // 0x208bf8: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x208bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    ctx->pc = 0x208bfcu;
}
