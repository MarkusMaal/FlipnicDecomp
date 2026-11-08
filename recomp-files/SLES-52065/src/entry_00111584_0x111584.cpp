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

// Function: entry_00111584
// Address: 0x111584 - 0x1115cc
void entry_00111584_0x111584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111584_0x111584");
#endif

    switch (ctx->pc) {
        case 0x11158cu: goto label_11158c;
        case 0x1115c4u: goto label_1115c4;
        default: break;
    }

    ctx->pc = 0x111584u;

    // 0x111584: 0xc044254  jal         func_110950
    ctx->pc = 0x111584u;
    SET_GPR_U32(ctx, 31, 0x11158Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x111584u, 0x11158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11158Cu;
label_11158c:
    // 0x11158c: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x111590: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x111590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111594: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x111598: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11159c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11159cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1115a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1115a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1115a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1115a8: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x1115a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1115ac: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1115b0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1115b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1115b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B4u;
        // 0x1115b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1115CCu;
            return;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0xc042118  jal         func_108460
    ctx->pc = 0x1115BCu;
    SET_GPR_U32(ctx, 31, 0x1115C4u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1115BCu, 0x1115C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115C4u;
label_1115c4:
    // 0x1115c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1115C4u;
    {
        const bool branch_taken_0x1115c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1115c4) {
            ctx->pc = 0x1115E8u;
            return;
        }
    }
    ctx->pc = 0x1115CCu;
}
