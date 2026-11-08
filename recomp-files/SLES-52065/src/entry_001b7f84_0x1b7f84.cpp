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

// Function: entry_001b7f84
// Address: 0x1b7f84 - 0x1b7fa4
void entry_001b7f84_0x1b7f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7f84_0x1b7f84");
#endif

    ctx->pc = 0x1b7f84u;

    // 0x1b7f84: 0x9022c7f8  lbu         $v0, -0x3808($at)
    ctx->pc = 0x1b7f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952952)));
    // 0x1b7f88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7F88u;
    {
        const bool branch_taken_0x1b7f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F88u;
        // 0x1b7f8c: 0x8c83004c  lw          $v1, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f88) {
            ctx->pc = 0x1B7FA4u;
            return;
        }
    }
    ctx->pc = 0x1B7F90u;
    // 0x1b7f90: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b7f94: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
    // 0x1b7f98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b7f9c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b7f9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7fa0: 0x0  nop
    ctx->pc = 0x1b7fa0u;
    // NOP
    ctx->pc = 0x1b7fa4u;
}
