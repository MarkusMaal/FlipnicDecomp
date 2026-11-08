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

// Function: entry_00205be8
// Address: 0x205be8 - 0x205c10
void entry_00205be8_0x205be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205be8_0x205be8");
#endif

    ctx->pc = 0x205be8u;

    // 0x205be8: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x205be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x205bec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x205becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x205bf0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x205bf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205bf8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205BF8u;
    {
        const bool branch_taken_0x205bf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205BF8u;
        // 0x205bfc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205bf8) {
            ctx->pc = 0x205C10u;
            return;
        }
    }
    ctx->pc = 0x205C00u;
    // 0x205c00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205C08u;
    {
        const bool branch_taken_0x205c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C08u;
        // 0x205c0c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c08) {
            ctx->pc = 0x205C20u;
            return;
        }
    }
    ctx->pc = 0x205C10u;
}
