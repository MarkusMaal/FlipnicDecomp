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

// Function: entry_0011cd40
// Address: 0x11cd40 - 0x11cd5c
void entry_0011cd40_0x11cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd40_0x11cd40");
#endif

    ctx->pc = 0x11cd40u;

    // 0x11cd40: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x11cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x11cd44: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x11cd48: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CD48u;
    {
        const bool branch_taken_0x11cd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD48u;
        // 0x11cd4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd48) {
            ctx->pc = 0x11CD5Cu;
            return;
        }
    }
    ctx->pc = 0x11CD50u;
    // 0x11cd50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CD50u;
    {
        const bool branch_taken_0x11cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD50u;
        // 0x11cd54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd50) {
            ctx->pc = 0x11CD5Cu;
            return;
        }
    }
    ctx->pc = 0x11CD58u;
    // 0x11cd58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11cd58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11cd5cu;
}
