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

// Function: entry_001cff14
// Address: 0x1cff14 - 0x1cff38
void entry_001cff14_0x1cff14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cff14_0x1cff14");
#endif

    switch (ctx->pc) {
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff24u: goto label_1cff24;
        default: break;
    }

    ctx->pc = 0x1cff14u;

    // 0x1cff14: 0xc074024  jal         func_1D0090
    ctx->pc = 0x1CFF14u;
    SET_GPR_U32(ctx, 31, 0x1CFF1Cu);
    ctx->pc = 0x1CFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF14u;
    // 0x1cff18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0090u, 0x1CFF14u, 0x1CFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF1Cu;
label_1cff1c:
    // 0x1cff1c: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF24u);
    ctx->pc = 0x1CFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF1Cu;
    // 0x1cff20: 0xde510028  ld          $s1, 0x28($s2) (Delay Slot)
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFF1Cu, 0x1CFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF24u;
label_1cff24:
    // 0x1cff24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cff28: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CFF28u;
    {
        const bool branch_taken_0x1cff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cff28) {
            ctx->pc = 0x1CFFD0u;
            return;
        }
    }
    ctx->pc = 0x1CFF30u;
    // 0x1cff30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cff30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cff38u;
}
