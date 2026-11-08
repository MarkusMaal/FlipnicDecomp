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

// Function: FUN_00193b00
// Address: 0x193b00 - 0x193b80
void FUN_00193b00_0x193b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193b00_0x193b00");
#endif

    switch (ctx->pc) {
        case 0x193b44u: goto label_193b44;
        case 0x193b60u: goto label_193b60;
        default: break;
    }

    ctx->pc = 0x193b00u;

    // 0x193b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x193b04: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x193b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x193b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x193b0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x193b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x193b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x193b14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x193b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x193b1c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x193b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193b24: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x193b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193b2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x193b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193b34: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x193b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b38: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193b3c: 0xc057040  jal         func_15C100
    ctx->pc = 0x193B3Cu;
    SET_GPR_U32(ctx, 31, 0x193B44u);
    ctx->pc = 0x193B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B3Cu;
    // 0x193b40: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x193B3Cu, 0x193B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B44u;
label_193b44:
    // 0x193b44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x193b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x193b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x193b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b50: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x193b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b54: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x193b54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b58: 0xc064d84  jal         func_193610
    ctx->pc = 0x193B58u;
    SET_GPR_U32(ctx, 31, 0x193B60u);
    ctx->pc = 0x193B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B58u;
    // 0x193b5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x193B58u, 0x193B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B60u;
label_193b60:
    // 0x193b60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x193b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193b64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x193b64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193b68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193b6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193b70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193b70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193b78: 0x3e00008  jr          $ra
    ctx->pc = 0x193B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B78u;
        // 0x193b7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193B80u;
}
