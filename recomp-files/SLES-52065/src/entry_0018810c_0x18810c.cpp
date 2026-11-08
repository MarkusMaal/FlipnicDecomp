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

// Function: entry_0018810c
// Address: 0x18810c - 0x188120
void entry_0018810c_0x18810c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018810c_0x18810c");
#endif

    ctx->pc = 0x18810cu;

    // 0x18810c: 0x0  nop
    ctx->pc = 0x18810cu;
    // NOP
    // 0x188110: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x188110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x188114: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188114u;
    {
        const bool branch_taken_0x188114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188114) {
            ctx->pc = 0x18812Cu;
            return;
        }
    }
    ctx->pc = 0x18811Cu;
    // 0x18811c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18811cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x188120u;
}
