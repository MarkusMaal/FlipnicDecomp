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

// Function: entry_00112194
// Address: 0x112194 - 0x1121b8
void entry_00112194_0x112194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112194_0x112194");
#endif

    ctx->pc = 0x112194u;

    // 0x112194: 0x0  nop
    ctx->pc = 0x112194u;
    // NOP
    // 0x112198: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x112198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11219c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11219cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1121a0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1121A0u;
    {
        const bool branch_taken_0x1121a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1121a0) {
            ctx->pc = 0x11216Cu;
            return;
        }
    }
    ctx->pc = 0x1121A8u;
    // 0x1121a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1121a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1121ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1121acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1121b0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1121B0u;
    {
        const bool branch_taken_0x1121b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121B0u;
        // 0x1121b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121b0) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x1121B8u;
}
