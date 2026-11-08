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

// Function: caseD_72
// Address: 0x1d85f0 - 0x1d8618
void caseD_72_0x1d85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_72_0x1d85f0");
#endif

    switch (ctx->pc) {
        case 0x1d860cu: goto label_1d860c;
        default: break;
    }

    ctx->pc = 0x1d85f0u;

    // 0x1d85f0: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d85f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d85f8: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d85fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d8600: 0x90670004  lbu         $a3, 0x4($v1)
    ctx->pc = 0x1d8600u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8604: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8604u;
    SET_GPR_U32(ctx, 31, 0x1D860Cu);
    ctx->pc = 0x1D8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8604u;
    // 0x1d8608: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8604u, 0x1D860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D860Cu;
label_1d860c:
    // 0x1d860c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1D860Cu;
    {
        const bool branch_taken_0x1d860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D860Cu;
        // 0x1d8610: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d860c) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D8614u;
    // 0x1d8614: 0x0  nop
    ctx->pc = 0x1d8614u;
    // NOP
    ctx->pc = 0x1d8618u;
}
