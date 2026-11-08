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

// Function: entry_0013b458
// Address: 0x13b458 - 0x13b488
void entry_0013b458_0x13b458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b458_0x13b458");
#endif

    ctx->pc = 0x13b458u;

label_13b458:
    // 0x13b458: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x13b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13b45c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13b45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13b460: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x13b460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x13b464: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x13b464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x13b468: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x13b468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x13b46c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x13b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x13b470: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B470u;
    {
        const bool branch_taken_0x13b470 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x13B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B470u;
        // 0x13b474: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b470) {
            ctx->pc = 0x13B458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b458;
        }
    }
    ctx->pc = 0x13B478u;
    // 0x13b478: 0x8d230050  lw          $v1, 0x50($t1)
    ctx->pc = 0x13b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x13b47c: 0x289082b  sltu        $at, $s4, $t1
    ctx->pc = 0x13b47cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x13b480: 0x1420ffe9  bnez        $at, . + 4 + (-0x17 << 2)
    ctx->pc = 0x13B480u;
    {
        const bool branch_taken_0x13b480 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B480u;
        // 0x13b484: 0xac830050  sw          $v1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b480) {
            ctx->pc = 0x13B428u;
            return;
        }
    }
    ctx->pc = 0x13B488u;
}
