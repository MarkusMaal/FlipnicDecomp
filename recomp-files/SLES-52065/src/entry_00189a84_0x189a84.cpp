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

// Function: entry_00189a84
// Address: 0x189a84 - 0x189ab4
void entry_00189a84_0x189a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189a84_0x189a84");
#endif

    switch (ctx->pc) {
        case 0x189a98u: goto label_189a98;
        case 0x189ab0u: goto label_189ab0;
        default: break;
    }

    ctx->pc = 0x189a84u;

label_189a84:
    // 0x189a84: 0x8e910050  lw          $s1, 0x50($s4)
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_189a88:
    // 0x189a88: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_189a8c:
    // 0x189a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x189a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189a90:
    // 0x189a90: 0xc0485c0  jal         func_121700
label_189a94:
    if (ctx->pc == 0x189A94u) {
        ctx->pc = 0x189A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A90u;
        // 0x189a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189A98u;
        goto label_189a98;
    }
    ctx->pc = 0x189A90u;
    SET_GPR_U32(ctx, 31, 0x189A98u);
    ctx->pc = 0x189A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A90u;
    // 0x189a94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x189A90u, 0x189A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A98u;
label_189a98:
    // 0x189a98: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x189a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_189a9c:
    // 0x189a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189aa0:
    // 0x189aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_189aa4:
    // 0x189aa4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x189aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_189aa8:
    // 0x189aa8: 0x320f809  jalr        $t9
label_189aac:
    if (ctx->pc == 0x189AACu) {
        ctx->pc = 0x189AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA8u;
        // 0x189aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189AB0u;
        goto label_189ab0;
    }
    ctx->pc = 0x189AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x189AB0u);
        ctx->pc = 0x189AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AA8u;
        // 0x189aac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189AA8u, 0x189AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x189AB0u;
label_189ab0:
    // 0x189ab0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x189ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189ab4u;
}
