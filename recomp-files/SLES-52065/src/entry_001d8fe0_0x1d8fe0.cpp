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

// Function: entry_001d8fe0
// Address: 0x1d8fe0 - 0x1d901c
void entry_001d8fe0_0x1d8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8fe0_0x1d8fe0");
#endif

    ctx->pc = 0x1d8fe0u;

    // 0x1d8fe0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1d8fe4: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8FE4u;
    {
        const bool branch_taken_0x1d8fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d8fe4) {
            ctx->pc = 0x1D8FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FE4u;
            // 0x1d8fe8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D901Cu;
            return;
        }
    }
    ctx->pc = 0x1D8FECu;
    // 0x1d8fec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8ff0: 0x5445000a  bnel        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8FF0u;
    {
        const bool branch_taken_0x1d8ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d8ff0) {
            ctx->pc = 0x1D8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FF0u;
            // 0x1d8ff4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D901Cu;
            return;
        }
    }
    ctx->pc = 0x1D8FF8u;
    // 0x1d8ff8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d8ffc: 0x54460007  bnel        $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8FFCu;
    {
        const bool branch_taken_0x1d8ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1d8ffc) {
            ctx->pc = 0x1D9000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8FFCu;
            // 0x1d9000: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D901Cu;
            return;
        }
    }
    ctx->pc = 0x1D9004u;
    // 0x1d9004: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1d9008: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d900c: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x1d900cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x1d9010: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x1d9010u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x1d9014: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1d9018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x1d901cu;
}
