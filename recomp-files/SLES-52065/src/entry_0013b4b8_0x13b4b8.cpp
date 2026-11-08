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

// Function: entry_0013b4b8
// Address: 0x13b4b8 - 0x13b4f4
void entry_0013b4b8_0x13b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b4b8_0x13b4b8");
#endif

    ctx->pc = 0x13b4b8u;

label_13b4b8:
    // 0x13b4b8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x13b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13b4bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13b4c0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13b4c4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x13b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x13b4c8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x13b4cc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x13b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x13b4d0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13B4D0u;
    {
        const bool branch_taken_0x13b4d0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x13B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4D0u;
        // 0x13b4d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4d0) {
            ctx->pc = 0x13B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b4b8;
        }
    }
    ctx->pc = 0x13B4D8u;
    // 0x13b4d8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x13b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x13b4dc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x13b4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x13b4e0: 0xae830050  sw          $v1, 0x50($s4)
    ctx->pc = 0x13b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
    // 0x13b4e4: 0x1660ffea  bnez        $s3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x13B4E4u;
    {
        const bool branch_taken_0x13b4e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4E4u;
        // 0x13b4e8: 0x26940060  addiu       $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4e4) {
            ctx->pc = 0x13B490u;
            return;
        }
    }
    ctx->pc = 0x13B4ECu;
    // 0x13b4ec: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x13B4ECu;
    {
        const bool branch_taken_0x13b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B4ECu;
        // 0x13b4f0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4ec) {
            ctx->pc = 0x13B73Cu;
            return;
        }
    }
    ctx->pc = 0x13B4F4u;
}
