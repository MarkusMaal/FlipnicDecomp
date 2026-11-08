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

// Function: entry_00110564
// Address: 0x110564 - 0x1105ac
void entry_00110564_0x110564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110564_0x110564");
#endif

    switch (ctx->pc) {
        case 0x11056cu: goto label_11056c;
        case 0x1105a4u: goto label_1105a4;
        default: break;
    }

    ctx->pc = 0x110564u;

    // 0x110564: 0xc044254  jal         func_110950
    ctx->pc = 0x110564u;
    SET_GPR_U32(ctx, 31, 0x11056Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x110564u, 0x11056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11056Cu;
label_11056c:
    // 0x11056c: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x11056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x110570: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x110570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110574: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x110574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x110578: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x110578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11057c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11057cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110580: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x110580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x110584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110588: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x11058c: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x11058cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110590: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x110594: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110594u;
    {
        const bool branch_taken_0x110594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110594u;
        // 0x110598: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110594) {
            ctx->pc = 0x1105ACu;
            return;
        }
    }
    ctx->pc = 0x11059Cu;
    // 0x11059c: 0xc042118  jal         func_108460
    ctx->pc = 0x11059Cu;
    SET_GPR_U32(ctx, 31, 0x1105A4u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x11059Cu, 0x1105A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105A4u;
label_1105a4:
    // 0x1105a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1105A4u;
    {
        const bool branch_taken_0x1105a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1105a4) {
            ctx->pc = 0x1105C8u;
            return;
        }
    }
    ctx->pc = 0x1105ACu;
}
