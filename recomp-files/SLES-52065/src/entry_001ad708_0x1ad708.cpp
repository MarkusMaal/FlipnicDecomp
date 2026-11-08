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

// Function: entry_001ad708
// Address: 0x1ad708 - 0x1ad740
void entry_001ad708_0x1ad708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad708_0x1ad708");
#endif

    switch (ctx->pc) {
        case 0x1ad710u: goto label_1ad710;
        case 0x1ad738u: goto label_1ad738;
        default: break;
    }

    ctx->pc = 0x1ad708u;

    // 0x1ad708: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x1AD708u;
    SET_GPR_U32(ctx, 31, 0x1AD710u);
    ctx->pc = 0x1AD70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD708u;
    // 0x1ad70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AD708u, 0x1AD710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD710u;
label_1ad710:
    // 0x1ad710: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ad710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ad714: 0x144300e6  bne         $v0, $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1AD714u;
    {
        const bool branch_taken_0x1ad714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ad714) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD71Cu;
    // 0x1ad71c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ad71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ad720: 0x8c6327a4  lw          $v1, 0x27A4($v1)
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10148)));
    // 0x1ad724: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1AD724u;
    {
        const bool branch_taken_0x1ad724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD724u;
        // 0x1ad728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad724) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD72Cu;
    // 0x1ad72c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ad72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ad730: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AD730u;
    SET_GPR_U32(ctx, 31, 0x1AD738u);
    ctx->pc = 0x1AD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD730u;
    // 0x1ad734: 0xae2006b4  sw          $zero, 0x6B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AD730u, 0x1AD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD738u;
label_1ad738:
    // 0x1ad738: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x1AD738u;
    {
        const bool branch_taken_0x1ad738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad738) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD740u;
}
