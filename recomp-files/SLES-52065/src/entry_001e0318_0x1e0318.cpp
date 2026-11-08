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

// Function: entry_001e0318
// Address: 0x1e0318 - 0x1e0378
void entry_001e0318_0x1e0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0318_0x1e0318");
#endif

    ctx->pc = 0x1e0318u;

    // 0x1e0318: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1e0318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1e031c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e031cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e0320: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0324: 0x2467ab14  addiu       $a3, $v1, -0x54EC
    ctx->pc = 0x1e0324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945556));
    // 0x1e0328: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1e0328u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x38AB14u));
    // 0x1e032c: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1e032cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0334: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0338: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e0338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e033c: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x1e033cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0340: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e0340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e0344: 0x90840068  lbu         $a0, 0x68($a0)
    ctx->pc = 0x1e0344u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1e0348: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0348u;
    {
        const bool branch_taken_0x1e0348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0348u;
        // 0x1e034c: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0348) {
            ctx->pc = 0x1E0378u;
            return;
        }
    }
    ctx->pc = 0x1E0350u;
    // 0x1e0350: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1e0350u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1e0354: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e0354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e0358: 0x24a3ab10  addiu       $v1, $a1, -0x54F0
    ctx->pc = 0x1e0358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e035c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e035cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB10u));
    // 0x1e0360: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e0360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e0364: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e0364u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1e0368: 0xa024a310  sb          $a0, -0x5CF0($at)
    ctx->pc = 0x1e0368u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943504), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e036c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0370u;
    {
        const bool branch_taken_0x1e0370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0370u;
        // 0x1e0374: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0370) {
            ctx->pc = 0x1E037Cu;
            return;
        }
    }
    ctx->pc = 0x1E0378u;
}
