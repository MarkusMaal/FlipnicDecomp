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

// Function: entry_001b170c
// Address: 0x1b170c - 0x1b1744
void entry_001b170c_0x1b170c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b170c_0x1b170c");
#endif

    ctx->pc = 0x1b170cu;

    // 0x1b170c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1b170cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1710: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b1710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b1714: 0x26840018  addiu       $a0, $s4, 0x18
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1b1718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b1718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b171c: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x1b171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x1b1720: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x1b1720u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1728: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1b1728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x1b172c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b172cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1734: 0x3c093fc0  lui         $t1, 0x3FC0
    ctx->pc = 0x1b1734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16320 << 16));
    // 0x1b1738: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1b1738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x1b173c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B173Cu;
    {
        const bool branch_taken_0x1b173c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B173Cu;
        // 0x1b1740: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b173c) {
            ctx->pc = 0x1B17E8u;
            return;
        }
    }
    ctx->pc = 0x1B1744u;
}
