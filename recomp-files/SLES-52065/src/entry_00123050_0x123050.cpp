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

// Function: entry_00123050
// Address: 0x123050 - 0x12306c
void entry_00123050_0x123050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123050_0x123050");
#endif

    ctx->pc = 0x123050u;

    // 0x123050: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x123050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123054: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123058: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x12305c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x12305cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123060: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123060u;
    {
        const bool branch_taken_0x123060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x123060) {
            ctx->pc = 0x12304Cu;
            return;
        }
    }
    ctx->pc = 0x123068u;
    // 0x123068: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12306cu;
}
