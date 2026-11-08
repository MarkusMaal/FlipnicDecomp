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

// Function: entry_001104c8
// Address: 0x1104c8 - 0x1104e8
void entry_001104c8_0x1104c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001104c8_0x1104c8");
#endif

    ctx->pc = 0x1104c8u;

    // 0x1104c8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1104c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1104cc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1104ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1104d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1104D0u;
    {
        const bool branch_taken_0x1104d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1104d0) {
            ctx->pc = 0x1104A0u;
            return;
        }
    }
    ctx->pc = 0x1104D8u;
    // 0x1104d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1104d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1104dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1104dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1104e0: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x1104E0u;
    {
        const bool branch_taken_0x1104e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1104E0u;
        // 0x1104e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1104e0) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x1104E8u;
}
