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

// Function: entry_0014e284
// Address: 0x14e284 - 0x14e2a4
void entry_0014e284_0x14e284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e284_0x14e284");
#endif

    ctx->pc = 0x14e284u;

    // 0x14e284: 0x0  nop
    ctx->pc = 0x14e284u;
    // NOP
    // 0x14e288: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e28c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14e290: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e294: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14e294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14e29c: 0x1420ffe5  bnez        $at, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E29Cu;
    {
        const bool branch_taken_0x14e29c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E29Cu;
        // 0x14e2a0: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e29c) {
            ctx->pc = 0x14E234u;
            return;
        }
    }
    ctx->pc = 0x14E2A4u;
}
