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

// Function: entry_001e2b60
// Address: 0x1e2b60 - 0x1e2b84
void entry_001e2b60_0x1e2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2b60_0x1e2b60");
#endif

    ctx->pc = 0x1e2b60u;

    // 0x1e2b60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2b64: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2B64u;
    {
        const bool branch_taken_0x1e2b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2b64) {
            ctx->pc = 0x1E2B94u;
            return;
        }
    }
    ctx->pc = 0x1E2B6Cu;
    // 0x1e2b6c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e2b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e2b70: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e2b70u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x1e2b74: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2b74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2b78: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1e2b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e2b7c: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e2b7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1e2b80: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x1e2b84u;
}
