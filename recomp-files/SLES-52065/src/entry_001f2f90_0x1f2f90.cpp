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

// Function: entry_001f2f90
// Address: 0x1f2f90 - 0x1f2fc4
void entry_001f2f90_0x1f2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2f90_0x1f2f90");
#endif

    ctx->pc = 0x1f2f90u;

label_1f2f90:
    // 0x1f2f90: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1f2f90u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f2f94: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1f2f94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1f2f98: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1f2f98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1f2f9c: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1f2f9cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1f2fa0: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1f2fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1f2fa4: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1f2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1f2fa8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1f2fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1f2fac: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1f2facu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1f2fb0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1f2fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1f2fb4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2fb8: 0x0  nop
    ctx->pc = 0x1f2fb8u;
    // NOP
    // 0x1f2fbc: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F2FBCu;
    {
        const bool branch_taken_0x1f2fbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2fbc) {
            ctx->pc = 0x1F2F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2f90;
        }
    }
    ctx->pc = 0x1F2FC4u;
}
