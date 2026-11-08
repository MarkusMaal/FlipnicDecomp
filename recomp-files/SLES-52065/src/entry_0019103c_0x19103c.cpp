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

// Function: entry_0019103c
// Address: 0x19103c - 0x191060
void entry_0019103c_0x19103c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019103c_0x19103c");
#endif

    ctx->pc = 0x19103cu;

    // 0x19103c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x19103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x191040: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x191040u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191044: 0x11040194  beq         $t0, $a0, . + 4 + (0x194 << 2)
    ctx->pc = 0x191044u;
    {
        const bool branch_taken_0x191044 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x191044) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19104Cu;
    // 0x19104c: 0x8c622c10  lw          $v0, 0x2C10($v1)
    ctx->pc = 0x19104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x191050: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191050u;
    {
        const bool branch_taken_0x191050 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x191050) {
            ctx->pc = 0x191060u;
            return;
        }
    }
    ctx->pc = 0x191058u;
    // 0x191058: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x191058u;
    {
        const bool branch_taken_0x191058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191058u;
        // 0x19105c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191058) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191060u;
}
