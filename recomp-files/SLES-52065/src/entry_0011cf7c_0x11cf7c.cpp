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

// Function: entry_0011cf7c
// Address: 0x11cf7c - 0x11cfa4
void entry_0011cf7c_0x11cf7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cf7c_0x11cf7c");
#endif

    switch (ctx->pc) {
        case 0x11cf88u: goto label_11cf88;
        default: break;
    }

    ctx->pc = 0x11cf7cu;

    // 0x11cf7c: 0x0  nop
    ctx->pc = 0x11cf7cu;
    // NOP
    // 0x11cf80: 0xc0470e4  jal         func_11C390
    ctx->pc = 0x11CF80u;
    SET_GPR_U32(ctx, 31, 0x11CF88u);
    ctx->pc = 0x11CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF80u;
    // 0x11cf84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C390u, 0x11CF80u, 0x11CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF88u;
label_11cf88:
    // 0x11cf88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x11cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x11cf8c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x11cf90: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CF90u;
    {
        const bool branch_taken_0x11cf90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF90u;
        // 0x11cf94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf90) {
            ctx->pc = 0x11CFA4u;
            return;
        }
    }
    ctx->pc = 0x11CF98u;
    // 0x11cf98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CF98u;
    {
        const bool branch_taken_0x11cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF98u;
        // 0x11cf9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf98) {
            ctx->pc = 0x11CFA4u;
            return;
        }
    }
    ctx->pc = 0x11CFA0u;
    // 0x11cfa0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11cfa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11cfa4u;
}
