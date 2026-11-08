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

// Function: entry_001eed90
// Address: 0x1eed90 - 0x1eedb4
void entry_001eed90_0x1eed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eed90_0x1eed90");
#endif

    ctx->pc = 0x1eed90u;

    // 0x1eed90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eed90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eed94: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EED94u;
    {
        const bool branch_taken_0x1eed94 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1EED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EED94u;
        // 0x1eed98: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed94) {
            ctx->pc = 0x1EEDB4u;
            return;
        }
    }
    ctx->pc = 0x1EED9Cu;
    // 0x1eed9c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1eed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1eeda0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1eeda0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeda4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1eeda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x1eeda8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1eeda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1eedac: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1eedacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x1eedb0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1eedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1eedb4u;
}
