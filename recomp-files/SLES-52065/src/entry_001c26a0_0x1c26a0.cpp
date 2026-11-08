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

// Function: entry_001c26a0
// Address: 0x1c26a0 - 0x1c26b8
void entry_001c26a0_0x1c26a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c26a0_0x1c26a0");
#endif

    ctx->pc = 0x1c26a0u;

    // 0x1c26a0: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x1c26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1c26a4: 0x2861fff6  slti        $at, $v1, -0xA
    ctx->pc = 0x1c26a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x1c26a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26A8u;
    {
        const bool branch_taken_0x1c26a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26A8u;
        // 0x1c26ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26a8) {
            ctx->pc = 0x1C26B8u;
            return;
        }
    }
    ctx->pc = 0x1C26B0u;
    // 0x1c26b0: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x1C26B0u;
    {
        const bool branch_taken_0x1c26b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26B0u;
        // 0x1c26b4: 0xae240248  sw          $a0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26b0) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C26B8u;
}
