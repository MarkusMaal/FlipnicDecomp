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

// Function: entry_0014e484
// Address: 0x14e484 - 0x14e4b0
void entry_0014e484_0x14e484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e484_0x14e484");
#endif

    ctx->pc = 0x14e484u;

    // 0x14e484: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x14e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x14e488: 0x27b600b4  addiu       $s6, $sp, 0xB4
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x14e48c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14e490: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14e494: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14e494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14e498: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e49c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x14e49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e4a0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4A0u;
    {
        const bool branch_taken_0x14e4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A0u;
        // 0x14e4a4: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4a0) {
            ctx->pc = 0x14E4B0u;
            return;
        }
    }
    ctx->pc = 0x14E4A8u;
    // 0x14e4a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4A8u;
    {
        const bool branch_taken_0x14e4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A8u;
        // 0x14e4ac: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4a8) {
            ctx->pc = 0x14E4B8u;
            return;
        }
    }
    ctx->pc = 0x14E4B0u;
}
