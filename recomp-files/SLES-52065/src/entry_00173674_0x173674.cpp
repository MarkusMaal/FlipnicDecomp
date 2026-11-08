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

// Function: entry_00173674
// Address: 0x173674 - 0x1736a0
void entry_00173674_0x173674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173674_0x173674");
#endif

    ctx->pc = 0x173674u;

    // 0x173674: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x173674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x173678: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17367c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x17367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173680: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173688: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17368c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x173690: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x173690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x173694: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x173698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17369c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17369cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1736a0u;
}
