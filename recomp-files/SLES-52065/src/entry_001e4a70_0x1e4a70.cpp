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

// Function: entry_001e4a70
// Address: 0x1e4a70 - 0x1e4ad0
void entry_001e4a70_0x1e4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4a70_0x1e4a70");
#endif

    ctx->pc = 0x1e4a70u;

    // 0x1e4a70: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4a74: 0x96530000  lhu         $s3, 0x0($s2)
    ctx->pc = 0x1e4a74u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e4a78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e4a7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e4a80: 0x441001b  bgez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4A80u;
    {
        const bool branch_taken_0x1e4a80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A80u;
        // 0x1e4a84: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a80) {
            ctx->pc = 0x1E4AF0u;
            return;
        }
    }
    ctx->pc = 0x1E4A88u;
    // 0x1e4a88: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4a8c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e4a90: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e4a94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e4a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4a98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e4a9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E4A9Cu;
    {
        const bool branch_taken_0x1e4a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a9c) {
            ctx->pc = 0x1E4AE0u;
            return;
        }
    }
    ctx->pc = 0x1E4AA4u;
    // 0x1e4aa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4aa8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4aac: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x1e4aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1e4ab0: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e4ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e4ab4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4ab8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e4ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4abc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4ABCu;
    {
        const bool branch_taken_0x1e4abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ABCu;
        // 0x1e4ac0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4abc) {
            ctx->pc = 0x1E4AD0u;
            return;
        }
    }
    ctx->pc = 0x1E4AC4u;
    // 0x1e4ac4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e4ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4AC8u;
    {
        const bool branch_taken_0x1e4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AC8u;
        // 0x1e4acc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ac8) {
            ctx->pc = 0x1E4AD8u;
            return;
        }
    }
    ctx->pc = 0x1E4AD0u;
}
