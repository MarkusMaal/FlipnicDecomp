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

// Function: entry_001031c8
// Address: 0x1031c8 - 0x103200
void entry_001031c8_0x1031c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001031c8_0x1031c8");
#endif

    switch (ctx->pc) {
        case 0x1031d4u: goto label_1031d4;
        case 0x1031f8u: goto label_1031f8;
        default: break;
    }

    ctx->pc = 0x1031c8u;

label_1031c8:
    // 0x1031c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1031c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1031cc:
    // 0x1031cc: 0xc05f860  jal         func_17E180
label_1031d0:
    if (ctx->pc == 0x1031D0u) {
        ctx->pc = 0x1031D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031CCu;
        // 0x1031d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1031D4u;
        goto label_1031d4;
    }
    ctx->pc = 0x1031CCu;
    SET_GPR_U32(ctx, 31, 0x1031D4u);
    ctx->pc = 0x1031D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031CCu;
    // 0x1031d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E180u, 0x1031CCu, 0x1031D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031D4u;
label_1031d4:
    // 0x1031d4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1031d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1031d8:
    // 0x1031d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1031d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1031dc:
    // 0x1031dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1031e0:
    // 0x1031e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1031e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1031e4:
    // 0x1031e4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1031e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1031e8:
    // 0x1031e8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1031e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1031ec:
    // 0x1031ec: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1031ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1031f0:
    // 0x1031f0: 0x320f809  jalr        $t9
label_1031f4:
    if (ctx->pc == 0x1031F4u) {
        ctx->pc = 0x1031F8u;
        goto label_1031f8;
    }
    ctx->pc = 0x1031F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1031F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1031F0u, 0x1031F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1031F8u;
label_1031f8:
    // 0x1031f8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1031fc:
    if (ctx->pc == 0x1031FCu) {
        ctx->pc = 0x103200u;
        goto label_fallthrough_0x1031f8;
    }
    ctx->pc = 0x1031F8u;
    {
        const bool branch_taken_0x1031f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1031f8) {
            ctx->pc = 0x1032ECu;
            return;
        }
    }
label_fallthrough_0x1031f8:
    ctx->pc = 0x103200u;
}
