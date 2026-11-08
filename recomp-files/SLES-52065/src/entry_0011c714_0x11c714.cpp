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

// Function: entry_0011c714
// Address: 0x11c714 - 0x11c744
void entry_0011c714_0x11c714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c714_0x11c714");
#endif

    ctx->pc = 0x11c714u;

label_11c714:
    // 0x11c714: 0x0  nop
    ctx->pc = 0x11c714u;
    // NOP
label_11c718:
    // 0x11c718: 0x20c30001  addi        $v1, $a2, 0x1
    ctx->pc = 0x11c718u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_11c71c:
    // 0x11c71c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x11c71cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_11c720:
    // 0x11c720: 0x10200299  beqz        $at, . + 4 + (0x299 << 2)
label_11c724:
    if (ctx->pc == 0x11C724u) {
        ctx->pc = 0x11C728u;
        goto label_11c728;
    }
    ctx->pc = 0x11C720u;
    {
        const bool branch_taken_0x11c720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c720) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C728u;
label_11c728:
    // 0x11c728: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11c728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_11c72c:
    // 0x11c72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11c730:
    // 0x11c730: 0x2484e820  addiu       $a0, $a0, -0x17E0
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961184));
label_11c734:
    // 0x11c734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11c738:
    // 0x11c738: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11c73c:
    // 0x11c73c: 0x600008  jr          $v1
label_11c740:
    if (ctx->pc == 0x11C740u) {
        ctx->pc = 0x11C744u;
        goto label_fallthrough_0x11c73c;
    }
    ctx->pc = 0x11C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C73Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x11c73c:
    ctx->pc = 0x11C744u;
}
