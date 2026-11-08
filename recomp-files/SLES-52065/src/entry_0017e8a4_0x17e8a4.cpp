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

// Function: entry_0017e8a4
// Address: 0x17e8a4 - 0x17e8b8
void entry_0017e8a4_0x17e8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e8a4_0x17e8a4");
#endif

    ctx->pc = 0x17e8a4u;

    // 0x17e8a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e8a8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E8A8u;
    {
        const bool branch_taken_0x17e8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e8a8) {
            ctx->pc = 0x17E8B8u;
            return;
        }
    }
    ctx->pc = 0x17E8B0u;
    // 0x17e8b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17E8B0u;
    {
        const bool branch_taken_0x17e8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8B0u;
        // 0x17e8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8b0) {
            ctx->pc = 0x17E8CCu;
            return;
        }
    }
    ctx->pc = 0x17E8B8u;
}
