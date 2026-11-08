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

// Function: entry_001114d4
// Address: 0x1114d4 - 0x1114f8
void entry_001114d4_0x1114d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001114d4_0x1114d4");
#endif

    ctx->pc = 0x1114d4u;

    // 0x1114d4: 0x0  nop
    ctx->pc = 0x1114d4u;
    // NOP
    // 0x1114d8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1114d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1114dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1114dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1114e0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1114E0u;
    {
        const bool branch_taken_0x1114e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114e0) {
            ctx->pc = 0x1114ACu;
            return;
        }
    }
    ctx->pc = 0x1114E8u;
    // 0x1114e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1114e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1114ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1114ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1114f0: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1114F0u;
    {
        const bool branch_taken_0x1114f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114F0u;
        // 0x1114f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114f0) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x1114F8u;
}
