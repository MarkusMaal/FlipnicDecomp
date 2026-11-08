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

// Function: entry_001ab888
// Address: 0x1ab888 - 0x1ab8a8
void entry_001ab888_0x1ab888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab888_0x1ab888");
#endif

    ctx->pc = 0x1ab888u;

    // 0x1ab888: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1ab888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ab88c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB88Cu;
    {
        const bool branch_taken_0x1ab88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab88c) {
            ctx->pc = 0x1AB8A8u;
            return;
        }
    }
    ctx->pc = 0x1AB894u;
    // 0x1ab894: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ab894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ab898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ab898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ab89c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB89Cu;
    {
        const bool branch_taken_0x1ab89c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1AB8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB89Cu;
        // 0x1ab8a0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab89c) {
            ctx->pc = 0x1AB8A8u;
            return;
        }
    }
    ctx->pc = 0x1AB8A4u;
    // 0x1ab8a4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ab8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x1ab8a8u;
}
