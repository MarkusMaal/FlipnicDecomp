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

// Function: entry_00124a04
// Address: 0x124a04 - 0x124a1c
void entry_00124a04_0x124a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124a04_0x124a04");
#endif

    ctx->pc = 0x124a04u;

    // 0x124a04: 0x0  nop
    ctx->pc = 0x124a04u;
    // NOP
    // 0x124a08: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x124a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x124a0c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124A0Cu;
    {
        const bool branch_taken_0x124a0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x124a0c) {
            ctx->pc = 0x124A1Cu;
            return;
        }
    }
    ctx->pc = 0x124A14u;
    // 0x124a14: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x124A14u;
    {
        const bool branch_taken_0x124a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x124a14) {
            ctx->pc = 0x1249FCu;
            return;
        }
    }
    ctx->pc = 0x124A1Cu;
}
