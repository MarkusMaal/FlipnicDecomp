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

// Function: entry_00117b84
// Address: 0x117b84 - 0x117ba0
void entry_00117b84_0x117b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b84_0x117b84");
#endif

    ctx->pc = 0x117b84u;

    // 0x117b84: 0x8382837c  lb          $v0, -0x7C84($gp)
    ctx->pc = 0x117b84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935420)));
    // 0x117b88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117B88u;
    {
        const bool branch_taken_0x117b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B88u;
        // 0x117b8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b88) {
            ctx->pc = 0x117BA0u;
            return;
        }
    }
    ctx->pc = 0x117B90u;
    // 0x117b90: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x117b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x117b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117b98: 0xaf838378  sw          $v1, -0x7C88($gp)
    ctx->pc = 0x117b98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935416), GPR_U32(ctx, 3));
    // 0x117b9c: 0xa382837c  sb          $v0, -0x7C84($gp)
    ctx->pc = 0x117b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935420), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117ba0u;
}
