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

// Function: entry_0011c58c
// Address: 0x11c58c - 0x11c5a0
void entry_0011c58c_0x11c58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c58c_0x11c58c");
#endif

    ctx->pc = 0x11c58cu;

    // 0x11c58c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x11c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11c590: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x11c590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x11c594: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C594u;
    {
        const bool branch_taken_0x11c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c594) {
            ctx->pc = 0x11C5E0u;
            return;
        }
    }
    ctx->pc = 0x11C59Cu;
    // 0x11c59c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x11c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    ctx->pc = 0x11c5a0u;
}
