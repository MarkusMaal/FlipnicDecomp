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

// Function: FUN_001274f0
// Address: 0x1274f0 - 0x12753c
void FUN_001274f0_0x1274f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001274f0_0x1274f0");
#endif

    switch (ctx->pc) {
        case 0x127508u: goto label_127508;
        case 0x127528u: goto label_127528;
        default: break;
    }

    ctx->pc = 0x1274f0u;

    // 0x1274f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1274f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1274f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1274f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1274f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1274f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1274fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1274fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127500: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x127500u;
    SET_GPR_U32(ctx, 31, 0x127508u);
    ctx->pc = 0x127504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127500u;
    // 0x127504: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x127500u, 0x127508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127508u;
label_127508:
    // 0x127508: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x127508u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x12750c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12750cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127510: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x127510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127514: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x127514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x127518: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x127518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12751c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x12751cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x127520: 0xc049ce4  jal         func_127390
    ctx->pc = 0x127520u;
    SET_GPR_U32(ctx, 31, 0x127528u);
    ctx->pc = 0x127524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127520u;
    // 0x127524: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127390u, 0x127520u, 0x127528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127528u;
label_127528:
    // 0x127528: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12752c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127534: 0x3e00008  jr          $ra
    ctx->pc = 0x127534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127534u;
        // 0x127538: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12753Cu;
}
