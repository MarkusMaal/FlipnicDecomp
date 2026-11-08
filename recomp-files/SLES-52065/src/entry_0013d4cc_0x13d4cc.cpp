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

// Function: entry_0013d4cc
// Address: 0x13d4cc - 0x13d4f8
void entry_0013d4cc_0x13d4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4cc_0x13d4cc");
#endif

    switch (ctx->pc) {
        case 0x13d4e8u: goto label_13d4e8;
        default: break;
    }

    ctx->pc = 0x13d4ccu;

label_13d4cc:
    // 0x13d4cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d4d0:
    // 0x13d4d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13d4d4:
    // 0x13d4d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13d4d8:
    // 0x13d4d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d4dc:
    // 0x13d4dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13d4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13d4e0:
    // 0x13d4e0: 0x320f809  jalr        $t9
label_13d4e4:
    if (ctx->pc == 0x13D4E4u) {
        ctx->pc = 0x13D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E0u;
        // 0x13d4e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4E8u;
        goto label_13d4e8;
    }
    ctx->pc = 0x13D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D4E8u);
        ctx->pc = 0x13D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E0u;
        // 0x13d4e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4E0u, 0x13D4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D4E8u;
label_13d4e8:
    // 0x13d4e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13d4ec:
    if (ctx->pc == 0x13D4ECu) {
        ctx->pc = 0x13D4F0u;
        goto label_13d4f0;
    }
    ctx->pc = 0x13D4E8u;
    {
        const bool branch_taken_0x13d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4e8) {
            ctx->pc = 0x13D4F8u;
            return;
        }
    }
    ctx->pc = 0x13D4F0u;
label_13d4f0:
    // 0x13d4f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_13d4f4:
    if (ctx->pc == 0x13D4F4u) {
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4F0u;
        // 0x13d4f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4F8u;
        goto label_fallthrough_0x13d4f0;
    }
    ctx->pc = 0x13D4F0u;
    {
        const bool branch_taken_0x13d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4F0u;
        // 0x13d4f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4f0) {
            ctx->pc = 0x13D518u;
            return;
        }
    }
label_fallthrough_0x13d4f0:
    ctx->pc = 0x13D4F8u;
}
