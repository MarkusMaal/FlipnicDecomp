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

// Function: entry_0012e864
// Address: 0x12e864 - 0x12e884
void entry_0012e864_0x12e864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e864_0x12e864");
#endif

    ctx->pc = 0x12e864u;

    // 0x12e864: 0x0  nop
    ctx->pc = 0x12e864u;
    // NOP
    // 0x12e868: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x12e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e86c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e870: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x12e870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x12e874: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x12e874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12e878: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12e87c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E87Cu;
    {
        const bool branch_taken_0x12e87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E87Cu;
        // 0x12e880: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e87c) {
            ctx->pc = 0x12E81Cu;
            return;
        }
    }
    ctx->pc = 0x12E884u;
}
