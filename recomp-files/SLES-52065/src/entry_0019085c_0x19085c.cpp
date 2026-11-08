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

// Function: entry_0019085c
// Address: 0x19085c - 0x19087c
void entry_0019085c_0x19085c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019085c_0x19085c");
#endif

    ctx->pc = 0x19085cu;

    // 0x19085c: 0x0  nop
    ctx->pc = 0x19085cu;
    // NOP
    // 0x190860: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x190860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x190864: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x190864u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x190868: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190868) {
            ctx->pc = 0x19084Cu;
            return;
        }
    }
    ctx->pc = 0x190870u;
    // 0x190870: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x190870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x190874: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x190874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x190878: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x190878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x19087cu;
}
