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

// Function: entry_0012aac0
// Address: 0x12aac0 - 0x12aaf0
void entry_0012aac0_0x12aac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aac0_0x12aac0");
#endif

    switch (ctx->pc) {
        case 0x12aae0u: goto label_12aae0;
        default: break;
    }

    ctx->pc = 0x12aac0u;

    // 0x12aac0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x12aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12aac4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x12aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12aac8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x12aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x12aacc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x12aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12aad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12aad4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x12aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x12aad8: 0xc080874  jal         func_2021D0
    ctx->pc = 0x12AAD8u;
    SET_GPR_U32(ctx, 31, 0x12AAE0u);
    ctx->pc = 0x12AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAD8u;
    // 0x12aadc: 0x8f858064  lw          $a1, -0x7F9C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x12AAD8u, 0x12AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAE0u;
label_12aae0:
    // 0x12aae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AAE0u;
    {
        const bool branch_taken_0x12aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aae0) {
            ctx->pc = 0x12AAF0u;
            return;
        }
    }
    ctx->pc = 0x12AAE8u;
    // 0x12aae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12aaec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12aaf0u;
}
