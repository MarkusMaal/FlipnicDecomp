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

// Function: entry_0012bcd8
// Address: 0x12bcd8 - 0x12bcfc
void entry_0012bcd8_0x12bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bcd8_0x12bcd8");
#endif

    switch (ctx->pc) {
        case 0x12bce8u: goto label_12bce8;
        default: break;
    }

    ctx->pc = 0x12bcd8u;

    // 0x12bcd8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x12bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x12bcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bce0: 0xc04aed0  jal         func_12BB40
    ctx->pc = 0x12BCE0u;
    SET_GPR_U32(ctx, 31, 0x12BCE8u);
    ctx->pc = 0x12BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCE0u;
    // 0x12bce4: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB40u, 0x12BCE0u, 0x12BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCE8u;
label_12bce8:
    // 0x12bce8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12bcec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BCECu;
    {
        const bool branch_taken_0x12bcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bcec) {
            ctx->pc = 0x12BCFCu;
            return;
        }
    }
    ctx->pc = 0x12BCF4u;
    // 0x12bcf4: 0xc04018c  jal         func_100630
    ctx->pc = 0x12BCF4u;
    SET_GPR_U32(ctx, 31, 0x12BCFCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x12BCF4u, 0x12BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCFCu;
}
