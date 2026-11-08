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

// Function: entry_002035b8
// Address: 0x2035b8 - 0x2035d4
void entry_002035b8_0x2035b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035b8_0x2035b8");
#endif

    ctx->pc = 0x2035b8u;

    // 0x2035b8: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2035B8u;
    {
        const bool branch_taken_0x2035b8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2035BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035B8u;
        // 0x2035bc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b8) {
            ctx->pc = 0x2035D4u;
            return;
        }
    }
    ctx->pc = 0x2035C0u;
    // 0x2035c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2035c4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2035c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2035c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2035cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2035CCu;
    {
        const bool branch_taken_0x2035cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035CCu;
        // 0x2035d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035cc) {
            ctx->pc = 0x2035DCu;
            return;
        }
    }
    ctx->pc = 0x2035D4u;
}
