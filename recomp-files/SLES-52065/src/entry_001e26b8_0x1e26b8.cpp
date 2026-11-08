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

// Function: entry_001e26b8
// Address: 0x1e26b8 - 0x1e26dc
void entry_001e26b8_0x1e26b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e26b8_0x1e26b8");
#endif

    ctx->pc = 0x1e26b8u;

    // 0x1e26b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e26bc: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E26BCu;
    {
        const bool branch_taken_0x1e26bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e26bc) {
            ctx->pc = 0x1E26ECu;
            return;
        }
    }
    ctx->pc = 0x1E26C4u;
    // 0x1e26c4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1e26c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e26c8: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e26c8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x1e26cc: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e26ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e26d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e26d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e26d4: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e26d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1e26d8: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e26d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    ctx->pc = 0x1e26dcu;
}
