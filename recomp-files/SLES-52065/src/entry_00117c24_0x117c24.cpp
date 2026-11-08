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

// Function: entry_00117c24
// Address: 0x117c24 - 0x117c74
void entry_00117c24_0x117c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117c24_0x117c24");
#endif

    switch (ctx->pc) {
        case 0x117c34u: goto label_117c34;
        case 0x117c3cu: goto label_117c3c;
        case 0x117c60u: goto label_117c60;
        default: break;
    }

    ctx->pc = 0x117c24u;

label_117c24:
    // 0x117c24: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x117c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x117c28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x117c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c2c: 0xc061734  jal         func_185CD0
    ctx->pc = 0x117C2Cu;
    SET_GPR_U32(ctx, 31, 0x117C34u);
    ctx->pc = 0x117C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C2Cu;
    // 0x117c30: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x117C2Cu, 0x117C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C34u;
label_117c34:
    // 0x117c34: 0xc060cbc  jal         func_1832F0
    ctx->pc = 0x117C34u;
    SET_GPR_U32(ctx, 31, 0x117C3Cu);
    ctx->pc = 0x117C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C34u;
    // 0x117c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1832F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1832F0u, 0x117C34u, 0x117C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C3Cu;
label_117c3c:
    // 0x117c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117c40: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x117c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x117c44: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117C44u;
    {
        const bool branch_taken_0x117c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C44u;
        // 0x117c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c44) {
            ctx->pc = 0x117C24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117c24;
        }
    }
    ctx->pc = 0x117C4Cu;
    // 0x117c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c50: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x117c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x117c54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c58: 0xc061734  jal         func_185CD0
    ctx->pc = 0x117C58u;
    SET_GPR_U32(ctx, 31, 0x117C60u);
    ctx->pc = 0x117C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C58u;
    // 0x117c5c: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x117C58u, 0x117C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C60u;
label_117c60:
    // 0x117c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x117C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C6Cu;
        // 0x117c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C74u;
}
