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

// Function: entry_002002c0
// Address: 0x2002c0 - 0x2002e4
void entry_002002c0_0x2002c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002002c0_0x2002c0");
#endif

    ctx->pc = 0x2002c0u;

label_2002c0:
    // 0x2002c0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2002c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2002c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2002c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2002c8: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x2002c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2002cc: 0x0  nop
    ctx->pc = 0x2002ccu;
    // NOP
    // 0x2002d0: 0x0  nop
    ctx->pc = 0x2002d0u;
    // NOP
    // 0x2002d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2002D4u;
    {
        const bool branch_taken_0x2002d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2002d4) {
            ctx->pc = 0x2002C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2002c0;
        }
    }
    ctx->pc = 0x2002DCu;
    // 0x2002dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2002DCu;
    {
        const bool branch_taken_0x2002dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2002dc) {
            ctx->pc = 0x2002ECu;
            return;
        }
    }
    ctx->pc = 0x2002E4u;
}
