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

// Function: entry_0011b564
// Address: 0x11b564 - 0x11b580
void entry_0011b564_0x11b564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b564_0x11b564");
#endif

    ctx->pc = 0x11b564u;

    // 0x11b564: 0x0  nop
    ctx->pc = 0x11b564u;
    // NOP
    // 0x11b568: 0x15ec0005  bne         $t7, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B568u;
    {
        const bool branch_taken_0x11b568 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 12));
        if (branch_taken_0x11b568) {
            ctx->pc = 0x11B580u;
            return;
        }
    }
    ctx->pc = 0x11B570u;
    // 0x11b570: 0x14e40003  bne         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B570u;
    {
        const bool branch_taken_0x11b570 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x11b570) {
            ctx->pc = 0x11B580u;
            return;
        }
    }
    ctx->pc = 0x11B578u;
    // 0x11b578: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11b578u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b57c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b580u;
}
