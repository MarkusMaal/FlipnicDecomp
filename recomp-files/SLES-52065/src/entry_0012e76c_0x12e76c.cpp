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

// Function: entry_0012e76c
// Address: 0x12e76c - 0x12e78c
void entry_0012e76c_0x12e76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e76c_0x12e76c");
#endif

    ctx->pc = 0x12e76cu;

    // 0x12e76c: 0x0  nop
    ctx->pc = 0x12e76cu;
    // NOP
    // 0x12e770: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x12e770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x12e774: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12e774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12e778: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12e778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12e77c: 0xb3082b  sltu        $at, $a1, $s3
    ctx->pc = 0x12e77cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x12e780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12e780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12e784: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E784u;
    {
        const bool branch_taken_0x12e784 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E784u;
        // 0x12e788: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e784) {
            ctx->pc = 0x12E724u;
            return;
        }
    }
    ctx->pc = 0x12E78Cu;
}
