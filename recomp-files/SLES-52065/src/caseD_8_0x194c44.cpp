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

// Function: caseD_8
// Address: 0x194c44 - 0x194c64
void caseD_8_0x194c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x194c44");
#endif

    switch (ctx->pc) {
        case 0x194c5cu: goto label_194c5c;
        default: break;
    }

    ctx->pc = 0x194c44u;

    // 0x194c44: 0x0  nop
    ctx->pc = 0x194c44u;
    // NOP
    // 0x194c48: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x194c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194c4c: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x194c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194c50: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x194c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194c54: 0xc064ab8  jal         func_192AE0
    ctx->pc = 0x194C54u;
    SET_GPR_U32(ctx, 31, 0x194C5Cu);
    ctx->pc = 0x194C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C54u;
    // 0x194c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192AE0u, 0x194C54u, 0x194C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C5Cu;
label_194c5c:
    // 0x194c5c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x194C5Cu;
    {
        const bool branch_taken_0x194c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c5c) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194C64u;
}
