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

// Function: entry_00108f4c
// Address: 0x108f4c - 0x108f60
void entry_00108f4c_0x108f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108f4c_0x108f4c");
#endif

    ctx->pc = 0x108f4cu;

    // 0x108f4c: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108f50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108F50u;
    {
        const bool branch_taken_0x108f50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F50u;
        // 0x108f54: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f50) {
            ctx->pc = 0x108F60u;
            return;
        }
    }
    ctx->pc = 0x108F58u;
    // 0x108f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108F58u;
    {
        const bool branch_taken_0x108f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F58u;
        // 0x108f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f58) {
            ctx->pc = 0x108F78u;
            return;
        }
    }
    ctx->pc = 0x108F60u;
}
