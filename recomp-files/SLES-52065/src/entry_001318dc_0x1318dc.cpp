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

// Function: entry_001318dc
// Address: 0x1318dc - 0x131908
void entry_001318dc_0x1318dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318dc_0x1318dc");
#endif

    switch (ctx->pc) {
        case 0x1318dcu: goto label_1318dc;
        case 0x1318e0u: goto label_1318e0;
        case 0x1318e4u: goto label_1318e4;
        case 0x1318e8u: goto label_1318e8;
        case 0x1318ecu: goto label_1318ec;
        case 0x1318f0u: goto label_1318f0;
        case 0x1318f4u: goto label_1318f4;
        case 0x1318f8u: goto label_1318f8;
        case 0x1318fcu: goto label_1318fc;
        case 0x131900u: goto label_131900;
        case 0x131904u: goto label_131904;
        default: break;
    }

    ctx->pc = 0x1318dcu;

label_1318dc:
    // 0x1318dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1318dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1318e0:
    // 0x1318e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1318e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1318e4:
    // 0x1318e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1318e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1318e8:
    // 0x1318e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1318ec:
    // 0x1318ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1318ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1318f0:
    // 0x1318f0: 0x320f809  jalr        $t9
label_1318f4:
    if (ctx->pc == 0x1318F4u) {
        ctx->pc = 0x1318F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318F0u;
        // 0x1318f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318F8u;
        goto label_1318f8;
    }
    ctx->pc = 0x1318F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1318F8u);
        ctx->pc = 0x1318F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318F0u;
        // 0x1318f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1318F0u, 0x1318F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1318F8u;
label_1318f8:
    // 0x1318f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1318fc:
    if (ctx->pc == 0x1318FCu) {
        ctx->pc = 0x131900u;
        goto label_131900;
    }
    ctx->pc = 0x1318F8u;
    {
        const bool branch_taken_0x1318f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318f8) {
            ctx->pc = 0x131908u;
            return;
        }
    }
    ctx->pc = 0x131900u;
label_131900:
    // 0x131900: 0x10000009  b           . + 4 + (0x9 << 2)
label_131904:
    if (ctx->pc == 0x131904u) {
        ctx->pc = 0x131904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131900u;
        // 0x131904: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131908u;
        goto label_fallthrough_0x131900;
    }
    ctx->pc = 0x131900u;
    {
        const bool branch_taken_0x131900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131900u;
        // 0x131904: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131900) {
            ctx->pc = 0x131928u;
            return;
        }
    }
label_fallthrough_0x131900:
    ctx->pc = 0x131908u;
}
