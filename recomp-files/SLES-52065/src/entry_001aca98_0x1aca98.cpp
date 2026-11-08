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

// Function: entry_001aca98
// Address: 0x1aca98 - 0x1acab8
void entry_001aca98_0x1aca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aca98_0x1aca98");
#endif

    ctx->pc = 0x1aca98u;

    // 0x1aca98: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1aca98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1aca9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACA9Cu;
    {
        const bool branch_taken_0x1aca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aca9c) {
            ctx->pc = 0x1ACAB8u;
            return;
        }
    }
    ctx->pc = 0x1ACAA4u;
    // 0x1acaa4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1acaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1acaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1acaac: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ACAACu;
    {
        const bool branch_taken_0x1acaac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1ACAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAACu;
        // 0x1acab0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaac) {
            ctx->pc = 0x1ACAB8u;
            return;
        }
    }
    ctx->pc = 0x1ACAB4u;
    // 0x1acab4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1acab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x1acab8u;
}
