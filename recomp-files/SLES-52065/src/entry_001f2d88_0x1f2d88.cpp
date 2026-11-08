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

// Function: entry_001f2d88
// Address: 0x1f2d88 - 0x1f2dbc
void entry_001f2d88_0x1f2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2d88_0x1f2d88");
#endif

    ctx->pc = 0x1f2d88u;

label_1f2d88:
    // 0x1f2d88: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1f2d88u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f2d8c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1f2d8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f2d90: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1f2d90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1f2d94: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1f2d94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1f2d98: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1f2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1f2d9c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1f2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1f2da0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1f2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1f2da4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1f2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1f2da8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1f2da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1f2dac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2db0: 0x0  nop
    ctx->pc = 0x1f2db0u;
    // NOP
    // 0x1f2db4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F2DB4u;
    {
        const bool branch_taken_0x1f2db4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2db4) {
            ctx->pc = 0x1F2D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2d88;
        }
    }
    ctx->pc = 0x1F2DBCu;
}
