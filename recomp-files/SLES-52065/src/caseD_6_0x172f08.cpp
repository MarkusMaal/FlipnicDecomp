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

// Function: caseD_6
// Address: 0x172f08 - 0x172f30
void caseD_6_0x172f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x172f08");
#endif

    switch (ctx->pc) {
        case 0x172f08u: goto label_172f08;
        case 0x172f0cu: goto label_172f0c;
        case 0x172f10u: goto label_172f10;
        case 0x172f14u: goto label_172f14;
        case 0x172f18u: goto label_172f18;
        case 0x172f1cu: goto label_172f1c;
        case 0x172f20u: goto label_172f20;
        case 0x172f24u: goto label_172f24;
        case 0x172f28u: goto label_172f28;
        case 0x172f2cu: goto label_172f2c;
        default: break;
    }

    ctx->pc = 0x172f08u;

label_172f08:
    // 0x172f08: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172f0c:
    // 0x172f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172f10:
    // 0x172f10: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_172f14:
    if (ctx->pc == 0x172F14u) {
        ctx->pc = 0x172F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F10u;
        // 0x172f14: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F18u;
        goto label_172f18;
    }
    ctx->pc = 0x172F10u;
    {
        const bool branch_taken_0x172f10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x172F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F10u;
        // 0x172f14: 0xae226008  sw          $v0, 0x6008($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f10) {
            ctx->pc = 0x172F30u;
            return;
        }
    }
    ctx->pc = 0x172F18u;
label_172f18:
    // 0x172f18: 0x8e3937b0  lw          $t9, 0x37B0($s1)
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14256)));
label_172f1c:
    // 0x172f1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172f20:
    // 0x172f20: 0x320f809  jalr        $t9
label_172f24:
    if (ctx->pc == 0x172F24u) {
        ctx->pc = 0x172F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F20u;
        // 0x172f24: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172F28u;
        goto label_172f28;
    }
    ctx->pc = 0x172F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172F28u);
        ctx->pc = 0x172F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F20u;
        // 0x172f24: 0x262437a0  addiu       $a0, $s1, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F20u, 0x172F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172F28u;
label_172f28:
    // 0x172f28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_172f2c:
    if (ctx->pc == 0x172F2Cu) {
        ctx->pc = 0x172F30u;
        goto label_fallthrough_0x172f28;
    }
    ctx->pc = 0x172F28u;
    {
        const bool branch_taken_0x172f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f28) {
            ctx->pc = 0x172F44u;
            return;
        }
    }
label_fallthrough_0x172f28:
    ctx->pc = 0x172F30u;
}
