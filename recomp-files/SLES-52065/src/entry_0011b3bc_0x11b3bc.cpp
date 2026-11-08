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

// Function: entry_0011b3bc
// Address: 0x11b3bc - 0x11b3ec
void entry_0011b3bc_0x11b3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b3bc_0x11b3bc");
#endif

    ctx->pc = 0x11b3bcu;

    // 0x11b3bc: 0x0  nop
    ctx->pc = 0x11b3bcu;
    // NOP
    // 0x11b3c0: 0x10863c  dsll32      $s0, $s0, 24
    ctx->pc = 0x11b3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
    // 0x11b3c4: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x11b3c4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x11b3c8: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B3C8u;
    {
        const bool branch_taken_0x11b3c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x11b3c8) {
            ctx->pc = 0x11B3ECu;
            return;
        }
    }
    ctx->pc = 0x11B3D0u;
    // 0x11b3d0: 0x120e0006  beq         $s0, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B3D0u;
    {
        const bool branch_taken_0x11b3d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        if (branch_taken_0x11b3d0) {
            ctx->pc = 0x11B3ECu;
            return;
        }
    }
    ctx->pc = 0x11B3D8u;
    // 0x11b3d8: 0x8c890534  lw          $t1, 0x534($a0)
    ctx->pc = 0x11b3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1332)));
    // 0x11b3dc: 0x152d0008  bne         $t1, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B3DCu;
    {
        const bool branch_taken_0x11b3dc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        if (branch_taken_0x11b3dc) {
            ctx->pc = 0x11B400u;
            return;
        }
    }
    ctx->pc = 0x11B3E4u;
    // 0x11b3e4: 0x160c0006  bne         $s0, $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B3E4u;
    {
        const bool branch_taken_0x11b3e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 12));
        if (branch_taken_0x11b3e4) {
            ctx->pc = 0x11B400u;
            return;
        }
    }
    ctx->pc = 0x11B3ECu;
}
