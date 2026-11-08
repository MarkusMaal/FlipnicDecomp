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

// Function: entry_0019695c
// Address: 0x19695c - 0x19698c
void entry_0019695c_0x19695c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019695c_0x19695c");
#endif

    ctx->pc = 0x19695cu;

    // 0x19695c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19695cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196960: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x196964: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x196964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x196968: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x19696c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19696cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196970: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x196970u;
    {
        const bool branch_taken_0x196970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196970) {
            ctx->pc = 0x196B00u;
            return;
        }
    }
    ctx->pc = 0x196978u;
    // 0x196978: 0x8cb72c10  lw          $s7, 0x2C10($a1)
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
    // 0x19697c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19697cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196980: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x196980u;
    {
        const bool branch_taken_0x196980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196980u;
        // 0x196984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196980) {
            ctx->pc = 0x196A58u;
            return;
        }
    }
    ctx->pc = 0x196988u;
    // 0x196988: 0x2b09021  addu        $s2, $s5, $s0
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x19698cu;
}
