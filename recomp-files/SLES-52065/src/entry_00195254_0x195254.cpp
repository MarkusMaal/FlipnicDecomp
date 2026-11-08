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

// Function: entry_00195254
// Address: 0x195254 - 0x19528c
void entry_00195254_0x195254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195254_0x195254");
#endif

    switch (ctx->pc) {
        case 0x195268u: goto label_195268;
        case 0x195274u: goto label_195274;
        case 0x195284u: goto label_195284;
        default: break;
    }

    ctx->pc = 0x195254u;

    // 0x195254: 0x0  nop
    ctx->pc = 0x195254u;
    // NOP
    // 0x195258: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x195258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19525c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x195260: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x195260u;
    SET_GPR_U32(ctx, 31, 0x195268u);
    ctx->pc = 0x195264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195260u;
    // 0x195264: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x195260u, 0x195268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195268u;
label_195268:
    // 0x195268: 0x8f8483a0  lw          $a0, -0x7C60($gp)
    ctx->pc = 0x195268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x19526c: 0xc0461e4  jal         func_118790
    ctx->pc = 0x19526Cu;
    SET_GPR_U32(ctx, 31, 0x195274u);
    ctx->pc = 0x195270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19526Cu;
    // 0x195270: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118790u, 0x19526Cu, 0x195274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195274u;
label_195274:
    // 0x195274: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x195278: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x195278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19527c: 0xc06bd80  jal         func_1AF600
    ctx->pc = 0x19527Cu;
    SET_GPR_U32(ctx, 31, 0x195284u);
    ctx->pc = 0x195280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19527Cu;
    // 0x195280: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x19527Cu, 0x195284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195284u;
label_195284:
    // 0x195284: 0x100002b7  b           . + 4 + (0x2B7 << 2)
    ctx->pc = 0x195284u;
    {
        const bool branch_taken_0x195284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195284) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x19528Cu;
}
