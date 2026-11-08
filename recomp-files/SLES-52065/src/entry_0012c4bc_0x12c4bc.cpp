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

// Function: entry_0012c4bc
// Address: 0x12c4bc - 0x12c4e4
void entry_0012c4bc_0x12c4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4bc_0x12c4bc");
#endif

    switch (ctx->pc) {
        case 0x12c4d0u: goto label_12c4d0;
        default: break;
    }

    ctx->pc = 0x12c4bcu;

    // 0x12c4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x12c4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c4c8: 0xc07d8fe  jal         func_1F63F8
    ctx->pc = 0x12C4C8u;
    SET_GPR_U32(ctx, 31, 0x12C4D0u);
    ctx->pc = 0x12C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4C8u;
    // 0x12c4cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F63F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F63F8u, 0x12C4C8u, 0x12C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4D0u;
label_12c4d0:
    // 0x12c4d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C4D0u;
    {
        const bool branch_taken_0x12c4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c4d0) {
            ctx->pc = 0x12C4E4u;
            return;
        }
    }
    ctx->pc = 0x12C4D8u;
    // 0x12c4d8: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x12c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x12c4dc: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x12C4DCu;
    {
        const bool branch_taken_0x12c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4DCu;
        // 0x12c4e0: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4dc) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C4E4u;
}
