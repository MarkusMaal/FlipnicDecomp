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

// Function: entry_001b745c
// Address: 0x1b745c - 0x1b7470
void entry_001b745c_0x1b745c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b745c_0x1b745c");
#endif

    ctx->pc = 0x1b745cu;

    // 0x1b745c: 0x0  nop
    ctx->pc = 0x1b745cu;
    // NOP
    // 0x1b7460: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b7464: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1b7464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7468: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B7468u;
    {
        const bool branch_taken_0x1b7468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7468u;
        // 0x1b746c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7468) {
            ctx->pc = 0x1B73DCu;
            return;
        }
    }
    ctx->pc = 0x1B7470u;
}
