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

// Function: caseD_e
// Address: 0x1951f8 - 0x195220
void caseD_e_0x1951f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1951f8");
#endif

    switch (ctx->pc) {
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        default: break;
    }

    ctx->pc = 0x1951f8u;

label_1951f8:
    // 0x1951f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1951f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1951fc:
    // 0x1951fc: 0x2c610016  sltiu       $at, $v1, 0x16
    ctx->pc = 0x1951fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_195200:
    // 0x195200: 0x102002d8  beqz        $at, . + 4 + (0x2D8 << 2)
label_195204:
    if (ctx->pc == 0x195204u) {
        ctx->pc = 0x195204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195200u;
        // 0x195204: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195208u;
        goto label_195208;
    }
    ctx->pc = 0x195200u;
    {
        const bool branch_taken_0x195200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195200u;
        // 0x195204: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195200) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195208u;
label_195208:
    // 0x195208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19520c:
    // 0x19520c: 0x2484ffa0  addiu       $a0, $a0, -0x60
    ctx->pc = 0x19520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967200));
label_195210:
    // 0x195210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x195210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195214:
    // 0x195214: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x195214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_195218:
    // 0x195218: 0x600008  jr          $v1
label_19521c:
    if (ctx->pc == 0x19521Cu) {
        ctx->pc = 0x195220u;
        goto label_fallthrough_0x195218;
    }
    ctx->pc = 0x195218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x195218:
    ctx->pc = 0x195220u;
}
