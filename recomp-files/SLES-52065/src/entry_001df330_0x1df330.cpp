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

// Function: entry_001df330
// Address: 0x1df330 - 0x1df340
void entry_001df330_0x1df330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df330_0x1df330");
#endif

    ctx->pc = 0x1df330u;

    // 0x1df330: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1df330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1df334: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1df334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1df338: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DF338u;
    {
        const bool branch_taken_0x1df338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df338) {
            ctx->pc = 0x1DF33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF338u;
            // 0x1df33c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF320u;
            return;
        }
    }
    ctx->pc = 0x1DF340u;
}
