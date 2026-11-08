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

// Function: entry_001b8034
// Address: 0x1b8034 - 0x1b8054
void entry_001b8034_0x1b8034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8034_0x1b8034");
#endif

    ctx->pc = 0x1b8034u;

    // 0x1b8034: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1b8034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952952)));
    // 0x1b8038: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8038u;
    {
        const bool branch_taken_0x1b8038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8038u;
        // 0x1b803c: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8038) {
            ctx->pc = 0x1B8054u;
            return;
        }
    }
    ctx->pc = 0x1B8040u;
    // 0x1b8040: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b8040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b8044: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x1b8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x1b8048: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b804c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b804cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8050: 0x0  nop
    ctx->pc = 0x1b8050u;
    // NOP
    ctx->pc = 0x1b8054u;
}
