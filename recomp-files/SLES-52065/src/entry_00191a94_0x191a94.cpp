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

// Function: entry_00191a94
// Address: 0x191a94 - 0x191ab0
void entry_00191a94_0x191a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a94_0x191a94");
#endif

    ctx->pc = 0x191a94u;

    // 0x191a94: 0x0  nop
    ctx->pc = 0x191a94u;
    // NOP
    // 0x191a98: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x191a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
    // 0x191a9c: 0x8f8885f4  lw          $t0, -0x7A0C($gp)
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191aa0: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x191aa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191aa8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x191AA8u;
    {
        const bool branch_taken_0x191aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA8u;
        // 0x191aac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191aa8) {
            ctx->pc = 0x191B14u;
            return;
        }
    }
    ctx->pc = 0x191AB0u;
}
