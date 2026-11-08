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

// Function: entry_00197388
// Address: 0x197388 - 0x1973b8
void entry_00197388_0x197388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197388_0x197388");
#endif

    ctx->pc = 0x197388u;

    // 0x197388: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19738c: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x197390: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x197394: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x197394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x197398: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x197398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19739c: 0x102000b0  beqz        $at, . + 4 + (0xB0 << 2)
    ctx->pc = 0x19739Cu;
    {
        const bool branch_taken_0x19739c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19739c) {
            ctx->pc = 0x197660u;
            return;
        }
    }
    ctx->pc = 0x1973A4u;
    // 0x1973a4: 0x8c9e2c10  lw          $fp, 0x2C10($a0)
    ctx->pc = 0x1973a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11280)));
    // 0x1973a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1973a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973ac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1973ACu;
    {
        const bool branch_taken_0x1973ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973ACu;
        // 0x1973b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973ac) {
            ctx->pc = 0x197510u;
            return;
        }
    }
    ctx->pc = 0x1973B4u;
    // 0x1973b4: 0x2b09021  addu        $s2, $s5, $s0
    ctx->pc = 0x1973b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x1973b8u;
}
