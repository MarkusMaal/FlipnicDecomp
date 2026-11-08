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

// Function: caseD_c
// Address: 0x10a14c - 0x10a174
void caseD_c_0x10a14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x10a14c");
#endif

    switch (ctx->pc) {
        case 0x10a160u: goto label_10a160;
        case 0x10a16cu: goto label_10a16c;
        default: break;
    }

    ctx->pc = 0x10a14cu;

    // 0x10a14c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x10a14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10a150: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A150u;
    {
        const bool branch_taken_0x10a150 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A150u;
        // 0x10a154: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a150) {
            ctx->pc = 0x10A174u;
            return;
        }
    }
    ctx->pc = 0x10A158u;
    // 0x10a158: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10A158u;
    SET_GPR_U32(ctx, 31, 0x10A160u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10A158u, 0x10A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A160u;
label_10a160:
    // 0x10a160: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x10a160u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10a164: 0xc049ff0  jal         func_127FC0
    ctx->pc = 0x10A164u;
    SET_GPR_U32(ctx, 31, 0x10A16Cu);
    ctx->pc = 0x10A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A164u;
    // 0x10a168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127FC0u, 0x10A164u, 0x10A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A16Cu;
label_10a16c:
    // 0x10a16c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10A16Cu;
    {
        const bool branch_taken_0x10a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a16c) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A174u;
}
