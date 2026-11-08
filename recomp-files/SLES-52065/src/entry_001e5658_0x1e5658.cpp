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

// Function: entry_001e5658
// Address: 0x1e5658 - 0x1e56bc
void entry_001e5658_0x1e5658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5658_0x1e5658");
#endif

    ctx->pc = 0x1e5658u;

    // 0x1e5658: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e565c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e5660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5664: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E5664u;
    {
        const bool branch_taken_0x1e5664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5664u;
        // 0x1e5668: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5664) {
            ctx->pc = 0x1E56E8u;
            return;
        }
    }
    ctx->pc = 0x1E566Cu;
    // 0x1e566c: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e5670: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e5670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e5674: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e5678: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e5678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e567c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e5680: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E5680u;
    {
        const bool branch_taken_0x1e5680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5680) {
            ctx->pc = 0x1E56CCu;
            return;
        }
    }
    ctx->pc = 0x1E5688u;
    // 0x1e5688: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e5688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e568c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e5690: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5694: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e5694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5698: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e5698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e569c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e56a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e56a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e56a4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E56A4u;
    {
        const bool branch_taken_0x1e56a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56A4u;
        // 0x1e56a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56a4) {
            ctx->pc = 0x1E56BCu;
            return;
        }
    }
    ctx->pc = 0x1E56ACu;
    // 0x1e56ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e56acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e56b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e56b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E56B4u;
    {
        const bool branch_taken_0x1e56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E56B4u;
        // 0x1e56b8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e56b4) {
            ctx->pc = 0x1E56C4u;
            return;
        }
    }
    ctx->pc = 0x1E56BCu;
}
