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

// Function: entry_00189338
// Address: 0x189338 - 0x18936c
void entry_00189338_0x189338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189338_0x189338");
#endif

    ctx->pc = 0x189338u;

    // 0x189338: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x189338u;
    {
        const bool branch_taken_0x189338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189338) {
            ctx->pc = 0x1893A0u;
            return;
        }
    }
    ctx->pc = 0x189340u;
    // 0x189340: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x189340u;
    {
        const bool branch_taken_0x189340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189340u;
        // 0x189344: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189340) {
            ctx->pc = 0x189390u;
            return;
        }
    }
    ctx->pc = 0x189348u;
    // 0x189348: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x18934c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189350: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189354: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189358u;
    {
        const bool branch_taken_0x189358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189358u;
        // 0x18935c: 0x8e630058  lw          $v1, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189358) {
            ctx->pc = 0x18936Cu;
            return;
        }
    }
    ctx->pc = 0x189360u;
    // 0x189360: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189364: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189368: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x18936cu;
}
