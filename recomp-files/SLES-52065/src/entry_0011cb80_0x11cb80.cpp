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

// Function: entry_0011cb80
// Address: 0x11cb80 - 0x11cba0
void entry_0011cb80_0x11cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb80_0x11cb80");
#endif

    switch (ctx->pc) {
        case 0x11cb88u: goto label_11cb88;
        case 0x11cb90u: goto label_11cb90;
        default: break;
    }

    ctx->pc = 0x11cb80u;

    // 0x11cb80: 0xc0752ba  jal         func_1D4AE8
    ctx->pc = 0x11CB80u;
    SET_GPR_U32(ctx, 31, 0x11CB88u);
    ctx->pc = 0x11CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB80u;
    // 0x11cb84: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AE8u, 0x11CB80u, 0x11CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB88u;
label_11cb88:
    // 0x11cb88: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11CB88u;
    SET_GPR_U32(ctx, 31, 0x11CB90u);
    ctx->pc = 0x11CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB88u;
    // 0x11cb8c: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11CB88u, 0x11CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB90u;
label_11cb90:
    // 0x11cb90: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11cb94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cb98: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x11CB98u;
    {
        const bool branch_taken_0x11cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB98u;
        // 0x11cb9c: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb98) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CBA0u;
}
