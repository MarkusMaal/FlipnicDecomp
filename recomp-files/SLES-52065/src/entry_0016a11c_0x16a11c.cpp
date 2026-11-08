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

// Function: entry_0016a11c
// Address: 0x16a11c - 0x16a130
void entry_0016a11c_0x16a11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a11c_0x16a11c");
#endif

    ctx->pc = 0x16a11cu;

    // 0x16a11c: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x16a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16a120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A120u;
    {
        const bool branch_taken_0x16a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A120u;
        // 0x16a124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a120) {
            ctx->pc = 0x16A130u;
            return;
        }
    }
    ctx->pc = 0x16A128u;
    // 0x16a128: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x16A128u;
    {
        const bool branch_taken_0x16a128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A128u;
        // 0x16a12c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a128) {
            ctx->pc = 0x16A360u;
            return;
        }
    }
    ctx->pc = 0x16A130u;
}
