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

// Function: entry_0011ec38
// Address: 0x11ec38 - 0x11ec90
void entry_0011ec38_0x11ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec38_0x11ec38");
#endif

    switch (ctx->pc) {
        case 0x11ec58u: goto label_11ec58;
        default: break;
    }

    ctx->pc = 0x11ec38u;

    // 0x11ec38: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x11ec38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x11ec3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ec44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ec48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ec4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec50: 0xc047b24  jal         func_11EC90
    ctx->pc = 0x11EC50u;
    SET_GPR_U32(ctx, 31, 0x11EC58u);
    ctx->pc = 0x11EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC50u;
    // 0x11ec54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EC90u, 0x11EC50u, 0x11EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC58u;
label_11ec58:
    // 0x11ec58: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x11ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x11ec5c: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x11ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x11ec60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ec64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11ec64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ec68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11ec68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ec6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11ec6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ec70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11ec70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ec74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11ec74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ec78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11ec78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ec7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11ec7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ec80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ec84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec88: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC88u;
        // 0x11ec8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EC90u;
}
