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

// Function: entry_001888c4
// Address: 0x1888c4 - 0x1888e4
void entry_001888c4_0x1888c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001888c4_0x1888c4");
#endif

    ctx->pc = 0x1888c4u;

    // 0x1888c4: 0x0  nop
    ctx->pc = 0x1888c4u;
    // NOP
    // 0x1888c8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1888c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1888cc: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x1888ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1888d0: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1888D0u;
    {
        const bool branch_taken_0x1888d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888d0) {
            ctx->pc = 0x188858u;
            return;
        }
    }
    ctx->pc = 0x1888D8u;
    // 0x1888d8: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x1888d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1888dc: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1888DCu;
    {
        const bool branch_taken_0x1888dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888dc) {
            ctx->pc = 0x188858u;
            return;
        }
    }
    ctx->pc = 0x1888E4u;
}
