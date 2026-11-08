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

// Function: entry_0014da44
// Address: 0x14da44 - 0x14da64
void entry_0014da44_0x14da44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da44_0x14da44");
#endif

    ctx->pc = 0x14da44u;

    // 0x14da44: 0x0  nop
    ctx->pc = 0x14da44u;
    // NOP
    // 0x14da48: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14da4c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14da4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14da50: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14da54: 0xd3082b  sltu        $at, $a2, $s3
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14da58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14da58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14da5c: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DA5Cu;
    {
        const bool branch_taken_0x14da5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA5Cu;
        // 0x14da60: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da5c) {
            ctx->pc = 0x14DA34u;
            return;
        }
    }
    ctx->pc = 0x14DA64u;
}
