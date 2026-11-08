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

// Function: entry_00151a4c
// Address: 0x151a4c - 0x151a64
void entry_00151a4c_0x151a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151a4c_0x151a4c");
#endif

    ctx->pc = 0x151a4cu;

    // 0x151a4c: 0x0  nop
    ctx->pc = 0x151a4cu;
    // NOP
    // 0x151a50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x151a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151a54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151A54u;
    {
        const bool branch_taken_0x151a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a54) {
            ctx->pc = 0x151A64u;
            return;
        }
    }
    ctx->pc = 0x151A5Cu;
    // 0x151a5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x151a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151a60: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x151a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x151a64u;
}
