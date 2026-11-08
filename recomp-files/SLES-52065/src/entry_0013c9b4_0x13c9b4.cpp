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

// Function: entry_0013c9b4
// Address: 0x13c9b4 - 0x13c9e4
void entry_0013c9b4_0x13c9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c9b4_0x13c9b4");
#endif

    switch (ctx->pc) {
        case 0x13c9bcu: goto label_13c9bc;
        case 0x13c9d8u: goto label_13c9d8;
        default: break;
    }

    ctx->pc = 0x13c9b4u;

label_13c9b4:
    // 0x13c9b4: 0xc050714  jal         func_141C50
label_13c9b8:
    if (ctx->pc == 0x13C9B8u) {
        ctx->pc = 0x13C9BCu;
        goto label_13c9bc;
    }
    ctx->pc = 0x13C9B4u;
    SET_GPR_U32(ctx, 31, 0x13C9BCu);
    ctx->pc = 0x141C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C50u, 0x13C9B4u, 0x13C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9BCu;
label_13c9bc:
    // 0x13c9bc: 0x8e2201b8  lw          $v0, 0x1B8($s1)
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
label_13c9c0:
    // 0x13c9c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13c9c4:
    if (ctx->pc == 0x13C9C4u) {
        ctx->pc = 0x13C9C8u;
        goto label_13c9c8;
    }
    ctx->pc = 0x13C9C0u;
    {
        const bool branch_taken_0x13c9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9c0) {
            ctx->pc = 0x13C9E4u;
            return;
        }
    }
    ctx->pc = 0x13C9C8u;
label_13c9c8:
    // 0x13c9c8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13c9cc:
    // 0x13c9cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13c9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13c9d0:
    // 0x13c9d0: 0x320f809  jalr        $t9
label_13c9d4:
    if (ctx->pc == 0x13C9D4u) {
        ctx->pc = 0x13C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D0u;
        // 0x13c9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C9D8u;
        goto label_13c9d8;
    }
    ctx->pc = 0x13C9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C9D8u);
        ctx->pc = 0x13C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C9D0u;
        // 0x13c9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C9D0u, 0x13C9D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C9D8u;
label_13c9d8:
    // 0x13c9d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13c9dc:
    if (ctx->pc == 0x13C9DCu) {
        ctx->pc = 0x13C9E0u;
        goto label_13c9e0;
    }
    ctx->pc = 0x13C9D8u;
    {
        const bool branch_taken_0x13c9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9d8) {
            ctx->pc = 0x13C9E4u;
            return;
        }
    }
    ctx->pc = 0x13C9E0u;
label_13c9e0:
    // 0x13c9e0: 0xa2200055  sb          $zero, 0x55($s1)
    ctx->pc = 0x13c9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 85), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x13c9e4u;
}
