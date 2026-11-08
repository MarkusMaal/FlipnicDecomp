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

// Function: entry_001c1f08
// Address: 0x1c1f08 - 0x1c1f34
void entry_001c1f08_0x1c1f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1f08_0x1c1f08");
#endif

    ctx->pc = 0x1c1f08u;

    // 0x1c1f08: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1c1f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c1f0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1f10: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1F10u;
    {
        const bool branch_taken_0x1c1f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1f10) {
            ctx->pc = 0x1C1F68u;
            return;
        }
    }
    ctx->pc = 0x1C1F18u;
    // 0x1c1f18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1f1c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C1F1Cu;
    {
        const bool branch_taken_0x1c1f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1f1c) {
            ctx->pc = 0x1C1F5Cu;
            return;
        }
    }
    ctx->pc = 0x1C1F24u;
    // 0x1c1f24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1F24u;
    {
        const bool branch_taken_0x1c1f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f24) {
            ctx->pc = 0x1C1F34u;
            return;
        }
    }
    ctx->pc = 0x1C1F2Cu;
    // 0x1c1f2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C1F2Cu;
    {
        const bool branch_taken_0x1c1f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f2c) {
            ctx->pc = 0x1C1F6Cu;
            return;
        }
    }
    ctx->pc = 0x1C1F34u;
}
