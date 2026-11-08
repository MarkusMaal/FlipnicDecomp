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

// Function: entry_001e65a8
// Address: 0x1e65a8 - 0x1e660c
void entry_001e65a8_0x1e65a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e65a8_0x1e65a8");
#endif

    ctx->pc = 0x1e65a8u;

    // 0x1e65a8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e65a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e65ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e65acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e65b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e65b4: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E65B4u;
    {
        const bool branch_taken_0x1e65b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E65B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65B4u;
        // 0x1e65b8: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65b4) {
            ctx->pc = 0x1E6638u;
            return;
        }
    }
    ctx->pc = 0x1E65BCu;
    // 0x1e65bc: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e65c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e65c4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1e65c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e65c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e65cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e65ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e65d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E65D0u;
    {
        const bool branch_taken_0x1e65d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e65d0) {
            ctx->pc = 0x1E661Cu;
            return;
        }
    }
    ctx->pc = 0x1E65D8u;
    // 0x1e65d8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1e65d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e65dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e65e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e65e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e65e8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e65ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e65ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e65f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e65f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e65f4: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E65F4u;
    {
        const bool branch_taken_0x1e65f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E65F4u;
        // 0x1e65f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65f4) {
            ctx->pc = 0x1E660Cu;
            return;
        }
    }
    ctx->pc = 0x1E65FCu;
    // 0x1e65fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e6600: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e6600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e6604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6604u;
    {
        const bool branch_taken_0x1e6604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6604u;
        // 0x1e6608: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6604) {
            ctx->pc = 0x1E6614u;
            return;
        }
    }
    ctx->pc = 0x1E660Cu;
}
