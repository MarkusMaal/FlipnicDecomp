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

// Function: entry_00117a34
// Address: 0x117a34 - 0x117a50
void entry_00117a34_0x117a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a34_0x117a34");
#endif

    ctx->pc = 0x117a34u;

    // 0x117a34: 0x8382836c  lb          $v0, -0x7C94($gp)
    ctx->pc = 0x117a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935404)));
    // 0x117a38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117A38u;
    {
        const bool branch_taken_0x117a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A38u;
        // 0x117a3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a38) {
            ctx->pc = 0x117A50u;
            return;
        }
    }
    ctx->pc = 0x117A40u;
    // 0x117a40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x117a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x117a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117a48: 0xaf838368  sw          $v1, -0x7C98($gp)
    ctx->pc = 0x117a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935400), GPR_U32(ctx, 3));
    // 0x117a4c: 0xa382836c  sb          $v0, -0x7C94($gp)
    ctx->pc = 0x117a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935404), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117a50u;
}
