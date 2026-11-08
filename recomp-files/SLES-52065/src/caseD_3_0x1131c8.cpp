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

// Function: caseD_3
// Address: 0x1131c8 - 0x1131ec
void caseD_3_0x1131c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1131c8");
#endif

    switch (ctx->pc) {
        case 0x1131c8u: goto label_1131c8;
        case 0x1131ccu: goto label_1131cc;
        case 0x1131d0u: goto label_1131d0;
        case 0x1131d4u: goto label_1131d4;
        case 0x1131d8u: goto label_1131d8;
        case 0x1131dcu: goto label_1131dc;
        case 0x1131e0u: goto label_1131e0;
        case 0x1131e4u: goto label_1131e4;
        case 0x1131e8u: goto label_1131e8;
        default: break;
    }

    ctx->pc = 0x1131c8u;

label_1131c8:
    // 0x1131c8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1131cc:
    // 0x1131cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1131ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1131d0:
    // 0x1131d0: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1131d4:
    // 0x1131d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1131d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1131d8:
    // 0x1131d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1131d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1131dc:
    // 0x1131dc: 0x320f809  jalr        $t9
label_1131e0:
    if (ctx->pc == 0x1131E0u) {
        ctx->pc = 0x1131E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131DCu;
        // 0x1131e0: 0x26270034  addiu       $a3, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131E4u;
        goto label_1131e4;
    }
    ctx->pc = 0x1131DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1131E4u);
        ctx->pc = 0x1131E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131DCu;
        // 0x1131e0: 0x26270034  addiu       $a3, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1131DCu, 0x1131E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1131E4u;
label_1131e4:
    // 0x1131e4: 0x10000106  b           . + 4 + (0x106 << 2)
label_1131e8:
    if (ctx->pc == 0x1131E8u) {
        ctx->pc = 0x1131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E4u;
        // 0x1131e8: 0xa2220041  sb          $v0, 0x41($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131ECu;
        goto label_fallthrough_0x1131e4;
    }
    ctx->pc = 0x1131E4u;
    {
        const bool branch_taken_0x1131e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E4u;
        // 0x1131e8: 0xa2220041  sb          $v0, 0x41($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131e4) {
            ctx->pc = 0x113600u;
            return;
        }
    }
label_fallthrough_0x1131e4:
    ctx->pc = 0x1131ECu;
}
