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

// Function: entry_001a0c84
// Address: 0x1a0c84 - 0x1a0d28
void entry_001a0c84_0x1a0c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0c84_0x1a0c84");
#endif

    ctx->pc = 0x1a0c84u;

label_1a0c84:
    // 0x1a0c84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c88: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1a0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1a0c8c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1a0c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a0c90: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0c94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0c98: 0xac6409e4  sw          $a0, 0x9E4($v1)
    ctx->pc = 0x1a0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2532), GPR_U32(ctx, 4));
    // 0x1a0c9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0ca0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0ca4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0ca8: 0xac640a14  sw          $a0, 0xA14($v1)
    ctx->pc = 0x1a0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2580), GPR_U32(ctx, 4));
    // 0x1a0cac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cb0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cb8: 0xac640a44  sw          $a0, 0xA44($v1)
    ctx->pc = 0x1a0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2628), GPR_U32(ctx, 4));
    // 0x1a0cbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cc0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cc8: 0xac640a74  sw          $a0, 0xA74($v1)
    ctx->pc = 0x1a0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2676), GPR_U32(ctx, 4));
    // 0x1a0ccc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cd0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cd8: 0xac640aa4  sw          $a0, 0xAA4($v1)
    ctx->pc = 0x1a0cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2724), GPR_U32(ctx, 4));
    // 0x1a0cdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0ce0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0ce4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0ce8: 0xac640ad4  sw          $a0, 0xAD4($v1)
    ctx->pc = 0x1a0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2772), GPR_U32(ctx, 4));
    // 0x1a0cec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0cf0: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0cf4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0cf8: 0xac640b04  sw          $a0, 0xB04($v1)
    ctx->pc = 0x1a0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2820), GPR_U32(ctx, 4));
    // 0x1a0cfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0d00: 0x24640800  addiu       $a0, $v1, 0x800
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1a0d04: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a0d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a0d08: 0xac640b34  sw          $a0, 0xB34($v1)
    ctx->pc = 0x1a0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2868), GPR_U32(ctx, 4));
    // 0x1a0d0c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A0D0Cu;
    {
        const bool branch_taken_0x1a0d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D0Cu;
        // 0x1a0d10: 0x24c60180  addiu       $a2, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d0c) {
            ctx->pc = 0x1A0C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0c84;
        }
    }
    ctx->pc = 0x1A0D14u;
    // 0x1a0d14: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x1a0d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a0d18: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D18u;
        // 0x1a0d1c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0D48u;
            return;
        }
    }
    ctx->pc = 0x1A0D20u;
    // 0x1a0d20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0d24: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1a0d28u;
}
