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

// Function: entry_0013e6d0
// Address: 0x13e6d0 - 0x13e6f4
void entry_0013e6d0_0x13e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e6d0_0x13e6d0");
#endif

    ctx->pc = 0x13e6d0u;

    // 0x13e6d0: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13e6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13e6d4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E6D4u;
    {
        const bool branch_taken_0x13e6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D4u;
        // 0x13e6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6d4) {
            ctx->pc = 0x13E6F8u;
            return;
        }
    }
    ctx->pc = 0x13E6DCu;
    // 0x13e6dc: 0x8c83017c  lw          $v1, 0x17C($a0)
    ctx->pc = 0x13e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13e6e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e6e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E6E4u;
    {
        const bool branch_taken_0x13e6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e6e4) {
            ctx->pc = 0x13E6F4u;
            return;
        }
    }
    ctx->pc = 0x13E6ECu;
    // 0x13e6ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13E6ECu;
    {
        const bool branch_taken_0x13e6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6ECu;
        // 0x13e6f0: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6ec) {
            ctx->pc = 0x13E6F8u;
            return;
        }
    }
    ctx->pc = 0x13E6F4u;
}
