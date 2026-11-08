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

// Function: entry_0010e34c
// Address: 0x10e34c - 0x10e35c
void entry_0010e34c_0x10e34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e34c_0x10e34c");
#endif

    ctx->pc = 0x10e34cu;

    // 0x10e34c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10e34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e350: 0x1490000f  bne         $a0, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x10E350u;
    {
        const bool branch_taken_0x10e350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x10e350) {
            ctx->pc = 0x10E390u;
            return;
        }
    }
    ctx->pc = 0x10E358u;
    // 0x10e358: 0x9383848c  lbu         $v1, -0x7B74($gp)
    ctx->pc = 0x10e358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
    ctx->pc = 0x10e35cu;
}
