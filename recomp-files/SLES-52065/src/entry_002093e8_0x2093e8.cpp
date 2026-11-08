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

// Function: entry_002093e8
// Address: 0x2093e8 - 0x209400
void entry_002093e8_0x2093e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002093e8_0x2093e8");
#endif

    ctx->pc = 0x2093e8u;

    // 0x2093e8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2093E8u;
    {
        const bool branch_taken_0x2093e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2093e8) {
            ctx->pc = 0x2093ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093E8u;
            // 0x2093ec: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209400u;
            return;
        }
    }
    ctx->pc = 0x2093F0u;
    // 0x2093f0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2093f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2093f4: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x2093f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x2093f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2093F8u;
    {
        const bool branch_taken_0x2093f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F8u;
        // 0x2093fc: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093f8) {
            ctx->pc = 0x20940Cu;
            return;
        }
    }
    ctx->pc = 0x209400u;
}
