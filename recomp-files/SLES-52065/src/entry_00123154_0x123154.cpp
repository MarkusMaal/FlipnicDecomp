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

// Function: entry_00123154
// Address: 0x123154 - 0x12317c
void entry_00123154_0x123154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123154_0x123154");
#endif

    ctx->pc = 0x123154u;

    // 0x123154: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x123154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123158: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x123158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x12315c: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x12315cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123160: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123160u;
    {
        const bool branch_taken_0x123160 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x123160) {
            ctx->pc = 0x12317Cu;
            return;
        }
    }
    ctx->pc = 0x123168u;
    // 0x123168: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x123168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12316c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x12316cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123170: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x123170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x123174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123174u;
    {
        const bool branch_taken_0x123174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123174u;
        // 0x123178: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123174) {
            ctx->pc = 0x123180u;
            return;
        }
    }
    ctx->pc = 0x12317Cu;
}
