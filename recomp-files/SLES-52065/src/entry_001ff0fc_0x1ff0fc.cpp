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

// Function: entry_001ff0fc
// Address: 0x1ff0fc - 0x1ff120
void entry_001ff0fc_0x1ff0fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff0fc_0x1ff0fc");
#endif

    ctx->pc = 0x1ff0fcu;

    // 0x1ff0fc: 0xaca5000c  sw          $a1, 0xC($a1)
    ctx->pc = 0x1ff0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 5));
    // 0x1ff100: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF100u;
    {
        const bool branch_taken_0x1ff100 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1FF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF100u;
        // 0x1ff104: 0xaca50008  sw          $a1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff100) {
            ctx->pc = 0x1FF120u;
            return;
        }
    }
    ctx->pc = 0x1FF108u;
    // 0x1ff108: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1ff108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1ff10c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ff10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff110: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ff110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ff114: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ff114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ff118: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x1FF118u;
    {
        const bool branch_taken_0x1ff118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF118u;
        // 0x1ff11c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff118) {
            ctx->pc = 0x1FF614u;
            return;
        }
    }
    ctx->pc = 0x1FF120u;
}
