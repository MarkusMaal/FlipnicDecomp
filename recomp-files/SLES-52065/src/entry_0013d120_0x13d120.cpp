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

// Function: entry_0013d120
// Address: 0x13d120 - 0x13d140
void entry_0013d120_0x13d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d120_0x13d120");
#endif

    ctx->pc = 0x13d120u;

    // 0x13d120: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13d124: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D124u;
    {
        const bool branch_taken_0x13d124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D124u;
        // 0x13d128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d124) {
            ctx->pc = 0x13D140u;
            return;
        }
    }
    ctx->pc = 0x13D12Cu;
    // 0x13d12c: 0x8c83017c  lw          $v1, 0x17C($a0)
    ctx->pc = 0x13d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13d130: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d134: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D134u;
    {
        const bool branch_taken_0x13d134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d134) {
            ctx->pc = 0x13D148u;
            return;
        }
    }
    ctx->pc = 0x13D13Cu;
    // 0x13d13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x13d140u;
}
