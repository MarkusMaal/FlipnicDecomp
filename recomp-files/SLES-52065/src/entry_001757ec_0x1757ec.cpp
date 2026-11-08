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

// Function: entry_001757ec
// Address: 0x1757ec - 0x175808
void entry_001757ec_0x1757ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001757ec_0x1757ec");
#endif

    ctx->pc = 0x1757ecu;

    // 0x1757ec: 0x0  nop
    ctx->pc = 0x1757ecu;
    // NOP
    // 0x1757f0: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1757f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1757f8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1757F8u;
    {
        const bool branch_taken_0x1757f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1757f8) {
            ctx->pc = 0x175680u;
            return;
        }
    }
    ctx->pc = 0x175800u;
    // 0x175800: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175800u;
    {
        const bool branch_taken_0x175800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175800u;
        // 0x175804: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175800) {
            ctx->pc = 0x175974u;
            return;
        }
    }
    ctx->pc = 0x175808u;
}
