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

// Function: entry_00193a90
// Address: 0x193a90 - 0x193abc
void entry_00193a90_0x193a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a90_0x193a90");
#endif

    switch (ctx->pc) {
        case 0x193a9cu: goto label_193a9c;
        case 0x193ab4u: goto label_193ab4;
        default: break;
    }

    ctx->pc = 0x193a90u;

label_193a90:
    // 0x193a90: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x193a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_193a94:
    // 0x193a94: 0x320f809  jalr        $t9
label_193a98:
    if (ctx->pc == 0x193A98u) {
        ctx->pc = 0x193A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A94u;
        // 0x193a98: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A9Cu;
        goto label_193a9c;
    }
    ctx->pc = 0x193A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193A9Cu);
        ctx->pc = 0x193A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A94u;
        // 0x193a98: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A94u, 0x193A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A9Cu;
label_193a9c:
    // 0x193a9c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x193a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_193aa0:
    // 0x193aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193aa4:
    // 0x193aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193aa8:
    // 0x193aa8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x193aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_193aac:
    // 0x193aac: 0x320f809  jalr        $t9
label_193ab0:
    if (ctx->pc == 0x193AB0u) {
        ctx->pc = 0x193AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AACu;
        // 0x193ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AB4u;
        goto label_193ab4;
    }
    ctx->pc = 0x193AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193AB4u);
        ctx->pc = 0x193AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AACu;
        // 0x193ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AACu, 0x193AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193AB4u;
label_193ab4:
    // 0x193ab4: 0x1000000d  b           . + 4 + (0xD << 2)
label_193ab8:
    if (ctx->pc == 0x193AB8u) {
        ctx->pc = 0x193ABCu;
        goto label_fallthrough_0x193ab4;
    }
    ctx->pc = 0x193AB4u;
    {
        const bool branch_taken_0x193ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ab4) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193ab4:
    ctx->pc = 0x193ABCu;
}
