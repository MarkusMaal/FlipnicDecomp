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

// Function: entry_0014a3f0
// Address: 0x14a3f0 - 0x14a430
void entry_0014a3f0_0x14a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a3f0_0x14a3f0");
#endif

    ctx->pc = 0x14a3f0u;

    // 0x14a3f0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x14a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a3f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a3f8: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x14a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x14a3fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a400: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a404: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a408: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a40c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A40Cu;
    {
        const bool branch_taken_0x14a40c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A40Cu;
        // 0x14a410: 0x27be05c8  addiu       $fp, $sp, 0x5C8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a40c) {
            ctx->pc = 0x14A450u;
            return;
        }
    }
    ctx->pc = 0x14A414u;
    // 0x14a414: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x14a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a418: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a41c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a420: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A420u;
    {
        const bool branch_taken_0x14a420 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A420u;
        // 0x14a424: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a420) {
            ctx->pc = 0x14A430u;
            return;
        }
    }
    ctx->pc = 0x14A428u;
    // 0x14a428: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a42c: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x14a42cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14a430u;
}
