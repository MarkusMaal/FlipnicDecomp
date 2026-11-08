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

// Function: entry_001ea164
// Address: 0x1ea164 - 0x1ea180
void entry_001ea164_0x1ea164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea164_0x1ea164");
#endif

    ctx->pc = 0x1ea164u;

label_1ea164:
    // 0x1ea164: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1ea168:
    if (ctx->pc == 0x1EA168u) {
        ctx->pc = 0x1EA16Cu;
        goto label_1ea16c;
    }
    ctx->pc = 0x1EA164u;
    {
        const bool branch_taken_0x1ea164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea164) {
            ctx->pc = 0x1EA180u;
            return;
        }
    }
    ctx->pc = 0x1EA16Cu;
label_1ea16c:
    // 0x1ea16c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_1ea170:
    // 0x1ea170: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ea174:
    // 0x1ea174: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1ea174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1ea178:
    // 0x1ea178: 0xc0f809  jalr        $a2
label_1ea17c:
    if (ctx->pc == 0x1EA17Cu) {
        ctx->pc = 0x1EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA178u;
        // 0x1ea17c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA180u;
        goto label_fallthrough_0x1ea178;
    }
    ctx->pc = 0x1EA178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA180u);
        ctx->pc = 0x1EA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA178u;
        // 0x1ea17c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA178u, 0x1EA180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1ea178:
    ctx->pc = 0x1EA180u;
}
