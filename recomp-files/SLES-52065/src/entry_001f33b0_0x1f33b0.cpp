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

// Function: entry_001f33b0
// Address: 0x1f33b0 - 0x1f33e4
void entry_001f33b0_0x1f33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f33b0_0x1f33b0");
#endif

    ctx->pc = 0x1f33b0u;

label_1f33b0:
    // 0x1f33b0: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1f33b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f33b4: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1f33b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f33b8: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1f33b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f33bc: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1f33bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f33c0: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1f33c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1f33c4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1f33c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1f33c8: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1f33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1f33cc: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1f33ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1f33d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f33d4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f33d8: 0x0  nop
    ctx->pc = 0x1f33d8u;
    // NOP
    // 0x1f33dc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F33DCu;
    {
        const bool branch_taken_0x1f33dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f33dc) {
            ctx->pc = 0x1F33B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f33b0;
        }
    }
    ctx->pc = 0x1F33E4u;
}
