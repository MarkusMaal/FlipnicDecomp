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

// Function: entry_001084cc
// Address: 0x1084cc - 0x1084e8
void entry_001084cc_0x1084cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001084cc_0x1084cc");
#endif

    ctx->pc = 0x1084ccu;

    // 0x1084cc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1084ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1084d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1084d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1084d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1084D8u;
    {
        const bool branch_taken_0x1084d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1084DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084D8u;
        // 0x1084dc: 0x27b10058  addiu       $s1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084d8) {
            ctx->pc = 0x1084E8u;
            return;
        }
    }
    ctx->pc = 0x1084E0u;
    // 0x1084e0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1084E0u;
    {
        const bool branch_taken_0x1084e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084E0u;
        // 0x1084e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084e0) {
            ctx->pc = 0x1086C0u;
            return;
        }
    }
    ctx->pc = 0x1084E8u;
}
