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

// Function: entry_00141654
// Address: 0x141654 - 0x141668
void entry_00141654_0x141654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141654_0x141654");
#endif

    ctx->pc = 0x141654u;

    // 0x141654: 0x0  nop
    ctx->pc = 0x141654u;
    // NOP
    // 0x141658: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x141658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14165c: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x14165cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x141660: 0x14e6ffea  bne         $a3, $a2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x141660u;
    {
        const bool branch_taken_0x141660 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x141660) {
            ctx->pc = 0x14160Cu;
            return;
        }
    }
    ctx->pc = 0x141668u;
}
