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

// Function: entry_00114c74
// Address: 0x114c74 - 0x114c94
void entry_00114c74_0x114c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c74_0x114c74");
#endif

    ctx->pc = 0x114c74u;

    // 0x114c74: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x114c78: 0x24430044  addiu       $v1, $v0, 0x44
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x114c7c: 0x90420085  lbu         $v0, 0x85($v0)
    ctx->pc = 0x114c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 133)));
    // 0x114c80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114C80u;
    {
        const bool branch_taken_0x114c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c80) {
            ctx->pc = 0x114C94u;
            return;
        }
    }
    ctx->pc = 0x114C88u;
    // 0x114c88: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x114c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x114c8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114c90: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x114c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x114c94u;
}
