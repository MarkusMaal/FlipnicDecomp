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

// Function: entry_001a4848
// Address: 0x1a4848 - 0x1a486c
void entry_001a4848_0x1a4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4848_0x1a4848");
#endif

    switch (ctx->pc) {
        case 0x1a4864u: goto label_1a4864;
        default: break;
    }

    ctx->pc = 0x1a4848u;

label_1a4848:
    // 0x1a4848: 0x12200064  beqz        $s1, . + 4 + (0x64 << 2)
label_1a484c:
    if (ctx->pc == 0x1A484Cu) {
        ctx->pc = 0x1A4850u;
        goto label_1a4850;
    }
    ctx->pc = 0x1A4848u;
    {
        const bool branch_taken_0x1a4848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4848) {
            ctx->pc = 0x1A49DCu;
            return;
        }
    }
    ctx->pc = 0x1A4850u;
label_1a4850:
    // 0x1a4850: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a4854:
    // 0x1a4854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4858:
    // 0x1a4858: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a485c:
    // 0x1a485c: 0x320f809  jalr        $t9
label_1a4860:
    if (ctx->pc == 0x1A4860u) {
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4864u;
        goto label_1a4864;
    }
    ctx->pc = 0x1A485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4864u);
        ctx->pc = 0x1A4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A485Cu;
        // 0x1a4860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A485Cu, 0x1A4864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4864u;
label_1a4864:
    // 0x1a4864: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1a4868:
    if (ctx->pc == 0x1A4868u) {
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A486Cu;
        goto label_fallthrough_0x1a4864;
    }
    ctx->pc = 0x1A4864u;
    {
        const bool branch_taken_0x1a4864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4864u;
        // 0x1a4868: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4864) {
            ctx->pc = 0x1A49E0u;
            return;
        }
    }
label_fallthrough_0x1a4864:
    ctx->pc = 0x1A486Cu;
}
