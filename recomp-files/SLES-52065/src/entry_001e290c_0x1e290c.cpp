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

// Function: entry_001e290c
// Address: 0x1e290c - 0x1e292c
void entry_001e290c_0x1e290c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e290c_0x1e290c");
#endif

    ctx->pc = 0x1e290cu;

    // 0x1e290c: 0x0  nop
    ctx->pc = 0x1e290cu;
    // NOP
    // 0x1e2910: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e2910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2914: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2914u;
    {
        const bool branch_taken_0x1e2914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2914) {
            ctx->pc = 0x1E293Cu;
            return;
        }
    }
    ctx->pc = 0x1E291Cu;
    // 0x1e291c: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e291cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2920: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e2920u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x1e2924: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e2924u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1e2928: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e2928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x1e292cu;
}
