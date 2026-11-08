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

// Function: FUN_0014ef10
// Address: 0x14ef10 - 0x14ef58
void FUN_0014ef10_0x14ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ef10_0x14ef10");
#endif

    switch (ctx->pc) {
        case 0x14ef20u: goto label_14ef20;
        case 0x14ef38u: goto label_14ef38;
        default: break;
    }

    ctx->pc = 0x14ef10u;

    // 0x14ef10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ef14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ef18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ef1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14ef1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ef20:
    // 0x14ef20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14ef20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14ef24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ef24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x14ef28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x14ef2c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x14ef2cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x14ef30: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x14EF30u;
    SET_GPR_U32(ctx, 31, 0x14EF38u);
    ctx->pc = 0x14EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF30u;
    // 0x14ef34: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x14EF30u, 0x14EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF38u;
label_14ef38:
    // 0x14ef38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14ef3c: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x14ef3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x14ef40: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14EF40u;
    {
        const bool branch_taken_0x14ef40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef40) {
            ctx->pc = 0x14EF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ef20;
        }
    }
    ctx->pc = 0x14EF48u;
    // 0x14ef48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ef4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef50: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF50u;
        // 0x14ef54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF58u;
}
