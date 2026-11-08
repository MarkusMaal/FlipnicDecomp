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

// Function: FUN_0015a0f0
// Address: 0x15a0f0 - 0x15a130
void FUN_0015a0f0_0x15a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a0f0_0x15a0f0");
#endif

    switch (ctx->pc) {
        case 0x15a104u: goto label_15a104;
        default: break;
    }

    ctx->pc = 0x15a0f0u;

    // 0x15a0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a0f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a0fc: 0xc05684c  jal         func_15A130
    ctx->pc = 0x15A0FCu;
    SET_GPR_U32(ctx, 31, 0x15A104u);
    ctx->pc = 0x15A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A0FCu;
    // 0x15a100: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A130u, 0x15A0FCu, 0x15A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A104u;
label_15a104:
    // 0x15a104: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15a104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15a108: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A108u;
    {
        const bool branch_taken_0x15a108 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A108u;
        // 0x15a10c: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a108) {
            ctx->pc = 0x15A11Cu;
            goto label_15a11c;
        }
    }
    ctx->pc = 0x15A110u;
    // 0x15a110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15A114u;
    {
        const bool branch_taken_0x15a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A114u;
        // 0x15a118: 0xa60301ea  sh          $v1, 0x1EA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a114) {
            ctx->pc = 0x15A120u;
            goto label_15a120;
        }
    }
    ctx->pc = 0x15A11Cu;
label_15a11c:
    // 0x15a11c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15a120:
    // 0x15a120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a128: 0x3e00008  jr          $ra
    ctx->pc = 0x15A128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A128u;
        // 0x15a12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A130u;
}
