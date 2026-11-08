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

// Function: entry_0018cd88
// Address: 0x18cd88 - 0x18cdb0
void entry_0018cd88_0x18cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd88_0x18cd88");
#endif

    ctx->pc = 0x18cd88u;

    // 0x18cd88: 0x8e020468  lw          $v0, 0x468($s0)
    ctx->pc = 0x18cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x18cd8c: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x18CD8Cu;
    {
        const bool branch_taken_0x18cd8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cd8c) {
            ctx->pc = 0x18CE6Cu;
            return;
        }
    }
    ctx->pc = 0x18CD94u;
    // 0x18cd94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cd98: 0xae020468  sw          $v0, 0x468($s0)
    ctx->pc = 0x18cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 2));
    // 0x18cd9c: 0x8e020468  lw          $v0, 0x468($s0)
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x18cda0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18CDA0u;
    {
        const bool branch_taken_0x18cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cda0) {
            ctx->pc = 0x18CE6Cu;
            return;
        }
    }
    ctx->pc = 0x18CDA8u;
    // 0x18cda8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18CDA8u;
    {
        const bool branch_taken_0x18cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDA8u;
        // 0x18cdac: 0xae002710  sw          $zero, 0x2710($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cda8) {
            ctx->pc = 0x18CE6Cu;
            return;
        }
    }
    ctx->pc = 0x18CDB0u;
}
