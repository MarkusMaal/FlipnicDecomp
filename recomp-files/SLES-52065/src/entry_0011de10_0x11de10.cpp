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

// Function: entry_0011de10
// Address: 0x11de10 - 0x11de54
void entry_0011de10_0x11de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011de10_0x11de10");
#endif

    switch (ctx->pc) {
        case 0x11de2cu: goto label_11de2c;
        case 0x11de38u: goto label_11de38;
        default: break;
    }

    ctx->pc = 0x11de10u;

    // 0x11de10: 0x8e4503e8  lw          $a1, 0x3E8($s2)
    ctx->pc = 0x11de10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1000)));
    // 0x11de14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11de14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de18: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11de18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11de1c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x11de1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11de20: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x11de20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x11de24: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x11DE24u;
    SET_GPR_U32(ctx, 31, 0x11DE2Cu);
    ctx->pc = 0x11DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE24u;
    // 0x11de28: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x11DE24u, 0x11DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE2Cu;
label_11de2c:
    // 0x11de2c: 0x26440108  addiu       $a0, $s2, 0x108
    ctx->pc = 0x11de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x11de30: 0xc074f7a  jal         func_1D3DE8
    ctx->pc = 0x11DE30u;
    SET_GPR_U32(ctx, 31, 0x11DE38u);
    ctx->pc = 0x11DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE30u;
    // 0x11de34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DE8u, 0x11DE30u, 0x11DE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE38u;
label_11de38:
    // 0x11de38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11de3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11de3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11de40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11de40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11de44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11de44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11de48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11de48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de4c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE4Cu;
        // 0x11de50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE54u;
}
