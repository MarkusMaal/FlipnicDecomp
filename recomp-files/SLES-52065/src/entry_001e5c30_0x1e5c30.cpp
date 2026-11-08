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

// Function: entry_001e5c30
// Address: 0x1e5c30 - 0x1e5c94
void entry_001e5c30_0x1e5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5c30_0x1e5c30");
#endif

    ctx->pc = 0x1e5c30u;

    // 0x1e5c30: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5c34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5c38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5c3c: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E5C3Cu;
    {
        const bool branch_taken_0x1e5c3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C3Cu;
        // 0x1e5c40: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c3c) {
            ctx->pc = 0x1E5CC0u;
            return;
        }
    }
    ctx->pc = 0x1E5C44u;
    // 0x1e5c44: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5c48: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5c4c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e5c50: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e5c54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e5c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e5c58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E5C58u;
    {
        const bool branch_taken_0x1e5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C58u;
        // 0x1e5c5c: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c58) {
            ctx->pc = 0x1E5CA4u;
            return;
        }
    }
    ctx->pc = 0x1E5C60u;
    // 0x1e5c60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5c64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e5c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e5c68: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e5c6c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e5c6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5c70: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e5c70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5c74: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5c78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5c7c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e5c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5c80: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5C80u;
    {
        const bool branch_taken_0x1e5c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C80u;
        // 0x1e5c84: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c80) {
            ctx->pc = 0x1E5C94u;
            return;
        }
    }
    ctx->pc = 0x1E5C88u;
    // 0x1e5c88: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e5c8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5C8Cu;
    {
        const bool branch_taken_0x1e5c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C8Cu;
        // 0x1e5c90: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c8c) {
            ctx->pc = 0x1E5C9Cu;
            return;
        }
    }
    ctx->pc = 0x1E5C94u;
}
