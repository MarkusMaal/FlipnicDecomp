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

// Function: entry_0011b6b0
// Address: 0x11b6b0 - 0x11b6d4
void entry_0011b6b0_0x11b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b6b0_0x11b6b0");
#endif

    ctx->pc = 0x11b6b0u;

    // 0x11b6b0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x11b6b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x11b6b4: 0x91e3c  dsll32      $v1, $t1, 24
    ctx->pc = 0x11b6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 24));
    // 0x11b6b8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x11b6b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x11b6bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x11b6bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x11b6c0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B6C0u;
    {
        const bool branch_taken_0x11b6c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b6c0) {
            ctx->pc = 0x11B6E4u;
            return;
        }
    }
    ctx->pc = 0x11B6C8u;
    // 0x11b6c8: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B6C8u;
    {
        const bool branch_taken_0x11b6c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b6c8) {
            ctx->pc = 0x11B6D4u;
            return;
        }
    }
    ctx->pc = 0x11B6D0u;
    // 0x11b6d0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x11b6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b6d4u;
}
