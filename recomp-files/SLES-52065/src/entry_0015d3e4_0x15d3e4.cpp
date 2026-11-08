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

// Function: entry_0015d3e4
// Address: 0x15d3e4 - 0x15d410
void entry_0015d3e4_0x15d3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3e4_0x15d3e4");
#endif

    ctx->pc = 0x15d3e4u;

label_15d3e4:
    // 0x15d3e4: 0x0  nop
    ctx->pc = 0x15d3e4u;
    // NOP
label_15d3e8:
    // 0x15d3e8: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_15d3ec:
    // 0x15d3ec: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d3f0:
    // 0x15d3f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15d3f4:
    // 0x15d3f4: 0x80420028  lb          $v0, 0x28($v0)
    ctx->pc = 0x15d3f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_15d3f8:
    // 0x15d3f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15d3fc:
    if (ctx->pc == 0x15D3FCu) {
        ctx->pc = 0x15D400u;
        goto label_15d400;
    }
    ctx->pc = 0x15D3F8u;
    {
        const bool branch_taken_0x15d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d3f8) {
            ctx->pc = 0x15D410u;
            return;
        }
    }
    ctx->pc = 0x15D400u;
label_15d400:
    // 0x15d400: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d404:
    // 0x15d404: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x15d404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_15d408:
    // 0x15d408: 0x320f809  jalr        $t9
label_15d40c:
    if (ctx->pc == 0x15D40Cu) {
        ctx->pc = 0x15D410u;
        goto label_fallthrough_0x15d408;
    }
    ctx->pc = 0x15D408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D408u, 0x15D410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15d408:
    ctx->pc = 0x15D410u;
}
