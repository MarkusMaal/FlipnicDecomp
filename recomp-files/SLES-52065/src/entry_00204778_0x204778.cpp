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

// Function: entry_00204778
// Address: 0x204778 - 0x20479c
void entry_00204778_0x204778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204778_0x204778");
#endif

    ctx->pc = 0x204778u;

    // 0x204778: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x20477c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204780: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x204780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x204784: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x204784u;
    {
        const bool branch_taken_0x204784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204784) {
            ctx->pc = 0x204788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204784u;
            // 0x204788: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20479Cu;
            return;
        }
    }
    ctx->pc = 0x20478Cu;
    // 0x20478c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x20478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x204790: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x204790u;
    {
        const bool branch_taken_0x204790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204790u;
        // 0x204794: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204790) {
            ctx->pc = 0x204E48u;
            return;
        }
    }
    ctx->pc = 0x204798u;
    // 0x204798: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x204798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x20479cu;
}
