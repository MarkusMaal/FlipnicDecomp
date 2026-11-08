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

// Function: entry_00123128
// Address: 0x123128 - 0x123150
void entry_00123128_0x123128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123128_0x123128");
#endif

    ctx->pc = 0x123128u;

    // 0x123128: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x123128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12312c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x12312cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x123130: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x123130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123134: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123134u;
    {
        const bool branch_taken_0x123134 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x123134) {
            ctx->pc = 0x123150u;
            return;
        }
    }
    ctx->pc = 0x12313Cu;
    // 0x12313c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x12313cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x123140: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x123140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123144: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x123144u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x123148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123148u;
    {
        const bool branch_taken_0x123148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123148u;
        // 0x12314c: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123148) {
            ctx->pc = 0x123154u;
            return;
        }
    }
    ctx->pc = 0x123150u;
}
