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

// Function: entry_00197d44
// Address: 0x197d44 - 0x197d58
void entry_00197d44_0x197d44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197d44_0x197d44");
#endif

    ctx->pc = 0x197d44u;

    // 0x197d44: 0x0  nop
    ctx->pc = 0x197d44u;
    // NOP
    // 0x197d48: 0x8ea306a4  lw          $v1, 0x6A4($s5)
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
    // 0x197d4c: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197D4Cu;
    {
        const bool branch_taken_0x197d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x197d4c) {
            ctx->pc = 0x197D58u;
            return;
        }
    }
    ctx->pc = 0x197D54u;
    // 0x197d54: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x197d58u;
}
