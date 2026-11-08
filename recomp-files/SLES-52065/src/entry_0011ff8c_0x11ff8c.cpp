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

// Function: entry_0011ff8c
// Address: 0x11ff8c - 0x11ffa8
void entry_0011ff8c_0x11ff8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ff8c_0x11ff8c");
#endif

    ctx->pc = 0x11ff8cu;

    // 0x11ff8c: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FF8Cu;
    {
        const bool branch_taken_0x11ff8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff8c) {
            ctx->pc = 0x11FFA8u;
            return;
        }
    }
    ctx->pc = 0x11FF94u;
    // 0x11ff94: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FF94u;
    {
        const bool branch_taken_0x11ff94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ff94) {
            ctx->pc = 0x11FFA8u;
            return;
        }
    }
    ctx->pc = 0x11FF9Cu;
    // 0x11ff9c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11ffa0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11ffa4: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x11ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    ctx->pc = 0x11ffa8u;
}
