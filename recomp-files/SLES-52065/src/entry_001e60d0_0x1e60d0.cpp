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

// Function: entry_001e60d0
// Address: 0x1e60d0 - 0x1e6134
void entry_001e60d0_0x1e60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e60d0_0x1e60d0");
#endif

    ctx->pc = 0x1e60d0u;

    // 0x1e60d0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e60d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e60d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e60dc: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E60DCu;
    {
        const bool branch_taken_0x1e60dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60DCu;
        // 0x1e60e0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60dc) {
            ctx->pc = 0x1E6160u;
            return;
        }
    }
    ctx->pc = 0x1E60E4u;
    // 0x1e60e4: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e60e8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e60ec: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e60f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e60f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e60f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e60f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e60f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E60F8u;
    {
        const bool branch_taken_0x1e60f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60F8u;
        // 0x1e60fc: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60f8) {
            ctx->pc = 0x1E6144u;
            return;
        }
    }
    ctx->pc = 0x1E6100u;
    // 0x1e6100: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6104: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e6108: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e6108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e610c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6110: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e6110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e6114: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e6114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e6118: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e611c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e611cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6120: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6120u;
    {
        const bool branch_taken_0x1e6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6120u;
        // 0x1e6124: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6120) {
            ctx->pc = 0x1E6134u;
            return;
        }
    }
    ctx->pc = 0x1E6128u;
    // 0x1e6128: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e6128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e612c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E612Cu;
    {
        const bool branch_taken_0x1e612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E612Cu;
        // 0x1e6130: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e612c) {
            ctx->pc = 0x1E613Cu;
            return;
        }
    }
    ctx->pc = 0x1E6134u;
}
