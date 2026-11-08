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

// Function: entry_001997f4
// Address: 0x1997f4 - 0x199814
void entry_001997f4_0x1997f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001997f4_0x1997f4");
#endif

    ctx->pc = 0x1997f4u;

    // 0x1997f4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1997f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1997fc: 0x8c830710  lw          $v1, 0x710($a0)
    ctx->pc = 0x1997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1808)));
    // 0x199800: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199800u;
    {
        const bool branch_taken_0x199800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x199800) {
            ctx->pc = 0x199814u;
            return;
        }
    }
    ctx->pc = 0x199808u;
    // 0x199808: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x199808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19980c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19980Cu;
    {
        const bool branch_taken_0x19980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19980Cu;
        // 0x199810: 0xac820710  sw          $v0, 0x710($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19980c) {
            ctx->pc = 0x19982Cu;
            return;
        }
    }
    ctx->pc = 0x199814u;
}
