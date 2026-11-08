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

// Function: entry_001111a8
// Address: 0x1111a8 - 0x1111cc
void entry_001111a8_0x1111a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001111a8_0x1111a8");
#endif

    ctx->pc = 0x1111a8u;

    // 0x1111a8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1111ac: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x1111acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1111b0: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1111B0u;
    {
        const bool branch_taken_0x1111b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1111b0) {
            ctx->pc = 0x11112Cu;
            return;
        }
    }
    ctx->pc = 0x1111B8u;
    // 0x1111b8: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x1111b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1111bc: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1111bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1111c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1111C0u;
    {
        const bool branch_taken_0x1111c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111C0u;
        // 0x1111c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111c0) {
            ctx->pc = 0x111210u;
            return;
        }
    }
    ctx->pc = 0x1111C8u;
    // 0x1111c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1111c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1111ccu;
}
