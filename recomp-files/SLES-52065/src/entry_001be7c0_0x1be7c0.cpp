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

// Function: entry_001be7c0
// Address: 0x1be7c0 - 0x1be7dc
void entry_001be7c0_0x1be7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be7c0_0x1be7c0");
#endif

    ctx->pc = 0x1be7c0u;

    // 0x1be7c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1be7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1be7c4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1be7c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1be7c8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE7C8u;
    {
        const bool branch_taken_0x1be7c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7C8u;
        // 0x1be7cc: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7c8) {
            ctx->pc = 0x1BE7DCu;
            return;
        }
    }
    ctx->pc = 0x1BE7D0u;
    // 0x1be7d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1be7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be7d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7D4u;
        // 0x1be7d8: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7ECu;
            return;
        }
    }
    ctx->pc = 0x1BE7DCu;
}
