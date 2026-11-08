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

// Function: entry_00131c3c
// Address: 0x131c3c - 0x131c6c
void entry_00131c3c_0x131c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c3c_0x131c3c");
#endif

    switch (ctx->pc) {
        case 0x131c48u: goto label_131c48;
        case 0x131c54u: goto label_131c54;
        default: break;
    }

    ctx->pc = 0x131c3cu;

    // 0x131c3c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x131c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x131c40: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131C40u;
    SET_GPR_U32(ctx, 31, 0x131C48u);
    ctx->pc = 0x131C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C40u;
    // 0x131c44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131C40u, 0x131C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C48u;
label_131c48:
    // 0x131c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c4c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x131C4Cu;
    SET_GPR_U32(ctx, 31, 0x131C54u);
    ctx->pc = 0x131C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C4Cu;
    // 0x131c50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x131C4Cu, 0x131C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C54u;
label_131c54:
    // 0x131c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131c64: 0x3e00008  jr          $ra
    ctx->pc = 0x131C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C64u;
        // 0x131c68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C6Cu;
}
