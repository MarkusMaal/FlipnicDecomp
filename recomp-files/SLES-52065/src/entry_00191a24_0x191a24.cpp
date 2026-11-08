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

// Function: entry_00191a24
// Address: 0x191a24 - 0x191a40
void entry_00191a24_0x191a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a24_0x191a24");
#endif

    ctx->pc = 0x191a24u;

    // 0x191a24: 0x0  nop
    ctx->pc = 0x191a24u;
    // NOP
    // 0x191a28: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x191a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
    // 0x191a2c: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x191a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x191a30: 0x24a4002c  addiu       $a0, $a1, 0x2C
    ctx->pc = 0x191a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x191a34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191a34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x191A38u;
    {
        const bool branch_taken_0x191a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A38u;
        // 0x191a3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a38) {
            ctx->pc = 0x191A7Cu;
            return;
        }
    }
    ctx->pc = 0x191A40u;
}
