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

// Function: entry_001493e8
// Address: 0x1493e8 - 0x14942c
void entry_001493e8_0x1493e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001493e8_0x1493e8");
#endif

    ctx->pc = 0x1493e8u;

    // 0x1493e8: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1493ec: 0x27b60280  addiu       $s6, $sp, 0x280
    ctx->pc = 0x1493ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1493f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1493f4: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x1493f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x1493f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1493fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1493fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x149400: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x149400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x149404: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x149404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149408: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x149408u;
    {
        const bool branch_taken_0x149408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149408u;
        // 0x14940c: 0x27b30278  addiu       $s3, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149408) {
            ctx->pc = 0x14944Cu;
            return;
        }
    }
    ctx->pc = 0x149410u;
    // 0x149410: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x149410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x149414: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149418: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x149418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14941c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14941Cu;
    {
        const bool branch_taken_0x14941c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x149420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14941Cu;
        // 0x149420: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14941c) {
            ctx->pc = 0x14942Cu;
            return;
        }
    }
    ctx->pc = 0x149424u;
    // 0x149424: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x149428: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x149428u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14942cu;
}
