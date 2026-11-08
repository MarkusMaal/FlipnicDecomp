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

// Function: FUN_0010edb0
// Address: 0x10edb0 - 0x10edf4
void FUN_0010edb0_0x10edb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010edb0_0x10edb0");
#endif

    switch (ctx->pc) {
        case 0x10edc4u: goto label_10edc4;
        case 0x10edd0u: goto label_10edd0;
        case 0x10ede0u: goto label_10ede0;
        default: break;
    }

    ctx->pc = 0x10edb0u;

    // 0x10edb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10edb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10edb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10edb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10edb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10edbc: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x10EDBCu;
    SET_GPR_U32(ctx, 31, 0x10EDC4u);
    ctx->pc = 0x10EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EDBCu;
    // 0x10edc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x10EDBCu, 0x10EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDC4u;
label_10edc4:
    // 0x10edc4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10edc8: 0xc046458  jal         func_119160
    ctx->pc = 0x10EDC8u;
    SET_GPR_U32(ctx, 31, 0x10EDD0u);
    ctx->pc = 0x10EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EDC8u;
    // 0x10edcc: 0x2484e368  addiu       $a0, $a0, -0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10EDC8u, 0x10EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDD0u;
label_10edd0:
    // 0x10edd0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10edd4: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x10edd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x10edd8: 0xc046458  jal         func_119160
    ctx->pc = 0x10EDD8u;
    SET_GPR_U32(ctx, 31, 0x10EDE0u);
    ctx->pc = 0x10EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EDD8u;
    // 0x10eddc: 0x2484e378  addiu       $a0, $a0, -0x1C88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10EDD8u, 0x10EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDE0u;
label_10ede0:
    // 0x10ede0: 0xae020224  sw          $v0, 0x224($s0)
    ctx->pc = 0x10ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
    // 0x10ede4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ede8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ede8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10edec: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDECu;
        // 0x10edf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EDF4u;
}
