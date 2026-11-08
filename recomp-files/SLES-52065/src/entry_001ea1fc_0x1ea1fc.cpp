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

// Function: entry_001ea1fc
// Address: 0x1ea1fc - 0x1ea210
void entry_001ea1fc_0x1ea1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea1fc_0x1ea1fc");
#endif

    switch (ctx->pc) {
        case 0x1ea208u: goto label_1ea208;
        default: break;
    }

    ctx->pc = 0x1ea1fcu;

label_1ea1fc:
    // 0x1ea1fc: 0x0  nop
    ctx->pc = 0x1ea1fcu;
    // NOP
label_1ea200:
    // 0x1ea200: 0xc0f809  jalr        $a2
label_1ea204:
    if (ctx->pc == 0x1EA204u) {
        ctx->pc = 0x1EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA200u;
        // 0x1ea204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA208u;
        goto label_1ea208;
    }
    ctx->pc = 0x1EA200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA208u);
        ctx->pc = 0x1EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA200u;
        // 0x1ea204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA200u, 0x1EA208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA208u;
label_1ea208:
    // 0x1ea208: 0x10000175  b           . + 4 + (0x175 << 2)
label_1ea20c:
    if (ctx->pc == 0x1EA20Cu) {
        ctx->pc = 0x1EA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA208u;
        // 0x1ea20c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA210u;
        goto label_fallthrough_0x1ea208;
    }
    ctx->pc = 0x1EA208u;
    {
        const bool branch_taken_0x1ea208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA208u;
        // 0x1ea20c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea208) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
label_fallthrough_0x1ea208:
    ctx->pc = 0x1EA210u;
}
