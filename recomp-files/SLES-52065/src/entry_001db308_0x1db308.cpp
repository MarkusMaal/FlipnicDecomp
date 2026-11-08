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

// Function: entry_001db308
// Address: 0x1db308 - 0x1db350
void entry_001db308_0x1db308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db308_0x1db308");
#endif

    ctx->pc = 0x1db308u;

    // 0x1db308: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x1db308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1db30c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db310: 0x5473000f  bnel        $v1, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1DB310u;
    {
        const bool branch_taken_0x1db310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1db310) {
            ctx->pc = 0x1DB314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB310u;
            // 0x1db314: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB350u;
            return;
        }
    }
    ctx->pc = 0x1DB318u;
    // 0x1db318: 0x25030008  addiu       $v1, $t0, 0x8
    ctx->pc = 0x1db318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1db31c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1db31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1db320: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1db320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db324: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1db324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1db328: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1db328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1db32c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB32Cu;
    {
        const bool branch_taken_0x1db32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db32c) {
            ctx->pc = 0x1DB330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB32Cu;
            // 0x1db330: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB350u;
            return;
        }
    }
    ctx->pc = 0x1DB334u;
    // 0x1db334: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1db334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db338: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1db338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1db33c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB33Cu;
    {
        const bool branch_taken_0x1db33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db33c) {
            ctx->pc = 0x1DB340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB33Cu;
            // 0x1db340: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB350u;
            return;
        }
    }
    ctx->pc = 0x1DB344u;
    // 0x1db344: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1db344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db348: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1db348u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db34c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1db34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1db350u;
}
