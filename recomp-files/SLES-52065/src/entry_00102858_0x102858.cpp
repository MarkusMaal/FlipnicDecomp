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

// Function: entry_00102858
// Address: 0x102858 - 0x10289c
void entry_00102858_0x102858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102858_0x102858");
#endif

    switch (ctx->pc) {
        case 0x102860u: goto label_102860;
        case 0x102868u: goto label_102868;
        case 0x102870u: goto label_102870;
        default: break;
    }

    ctx->pc = 0x102858u;

    // 0x102858: 0xc04d988  jal         func_136620
    ctx->pc = 0x102858u;
    SET_GPR_U32(ctx, 31, 0x102860u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x102858u, 0x102860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102860u;
label_102860:
    // 0x102860: 0xc04c7c4  jal         func_131F10
    ctx->pc = 0x102860u;
    SET_GPR_U32(ctx, 31, 0x102868u);
    ctx->pc = 0x102864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102860u;
    // 0x102864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F10u, 0x102860u, 0x102868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102868u;
label_102868:
    // 0x102868: 0xc040a30  jal         func_1028C0
    ctx->pc = 0x102868u;
    SET_GPR_U32(ctx, 31, 0x102870u);
    ctx->pc = 0x10286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102868u;
    // 0x10286c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1028C0u, 0x102868u, 0x102870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102870u;
label_102870:
    // 0x102870: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x102870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102874: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x102874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x102878: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x102878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10287c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10287cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x102880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x102884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x102888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10288c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10288cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102894: 0x3e00008  jr          $ra
    ctx->pc = 0x102894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102894u;
        // 0x102898: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10289Cu;
}
