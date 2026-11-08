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

// Function: entry_0012aa8c
// Address: 0x12aa8c - 0x12aac0
void entry_0012aa8c_0x12aa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa8c_0x12aa8c");
#endif

    switch (ctx->pc) {
        case 0x12aab0u: goto label_12aab0;
        default: break;
    }

    ctx->pc = 0x12aa8cu;

    // 0x12aa8c: 0x0  nop
    ctx->pc = 0x12aa8cu;
    // NOP
    // 0x12aa90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12aa94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12aa98: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x12aa9c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12aaa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12aaa4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x12aaa8: 0xc080874  jal         func_2021D0
    ctx->pc = 0x12AAA8u;
    SET_GPR_U32(ctx, 31, 0x12AAB0u);
    ctx->pc = 0x12AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAA8u;
    // 0x12aaac: 0x8f858060  lw          $a1, -0x7FA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12AAA8u, 0x12AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAB0u;
label_12aab0:
    // 0x12aab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AAB0u;
    {
        const bool branch_taken_0x12aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aab0) {
            ctx->pc = 0x12AAC0u;
            return;
        }
    }
    ctx->pc = 0x12AAB8u;
    // 0x12aab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aabc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12aac0u;
}
