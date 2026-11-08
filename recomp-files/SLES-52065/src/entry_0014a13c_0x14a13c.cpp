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

// Function: entry_0014a13c
// Address: 0x14a13c - 0x14a180
void entry_0014a13c_0x14a13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a13c_0x14a13c");
#endif

    ctx->pc = 0x14a13cu;

    // 0x14a13c: 0x0  nop
    ctx->pc = 0x14a13cu;
    // NOP
    // 0x14a140: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a144: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a148: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a148u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x14a14c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a150: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14a150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14a154: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a158: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a15c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A15Cu;
    {
        const bool branch_taken_0x14a15c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A15Cu;
        // 0x14a160: 0x27b70548  addiu       $s7, $sp, 0x548 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a15c) {
            ctx->pc = 0x14A1A0u;
            return;
        }
    }
    ctx->pc = 0x14A164u;
    // 0x14a164: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a168: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a16c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a170: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A170u;
    {
        const bool branch_taken_0x14a170 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A170u;
        // 0x14a174: 0x28083  sra         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a170) {
            ctx->pc = 0x14A180u;
            return;
        }
    }
    ctx->pc = 0x14A178u;
    // 0x14a178: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14a17c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x14a17cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14a180u;
}
