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

// Function: entry_0010ffe0
// Address: 0x10ffe0 - 0x110000
void entry_0010ffe0_0x10ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffe0_0x10ffe0");
#endif

    ctx->pc = 0x10ffe0u;

    // 0x10ffe0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x10ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x10ffe4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10ffe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10ffe8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10FFE8u;
    {
        const bool branch_taken_0x10ffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ffe8) {
            ctx->pc = 0x10FFB8u;
            return;
        }
    }
    ctx->pc = 0x10FFF0u;
    // 0x10fff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10fff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10fff8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x10FFF8u;
    {
        const bool branch_taken_0x10fff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFF8u;
        // 0x10fffc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fff8) {
            ctx->pc = 0x1102A4u;
            return;
        }
    }
    ctx->pc = 0x110000u;
}
