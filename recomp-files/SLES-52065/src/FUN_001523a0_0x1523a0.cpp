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

// Function: FUN_001523a0
// Address: 0x1523a0 - 0x152428
void FUN_001523a0_0x1523a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001523a0_0x1523a0");
#endif

    switch (ctx->pc) {
        case 0x1523e4u: goto label_1523e4;
        case 0x1523f4u: goto label_1523f4;
        case 0x152404u: goto label_152404;
        case 0x152410u: goto label_152410;
        default: break;
    }

    ctx->pc = 0x1523a0u;

    // 0x1523a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1523a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1523a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1523a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1523a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1523ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1523acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1523b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1523b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1523b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1523b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1523b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1523bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1523c0: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x1523c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1523c4: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x1523c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1523c8: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x1523c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1523cc: 0x78a90030  lq          $t1, 0x30($a1)
    ctx->pc = 0x1523ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1523d0: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x1523d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x1523d4: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x1523d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x1523d8: 0x7c880020  sq          $t0, 0x20($a0)
    ctx->pc = 0x1523d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
    // 0x1523dc: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x1523DCu;
    SET_GPR_U32(ctx, 31, 0x1523E4u);
    ctx->pc = 0x1523E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523DCu;
    // 0x1523e0: 0x7c890030  sq          $t1, 0x30($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x1523DCu, 0x1523E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523E4u;
label_1523e4:
    // 0x1523e4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1523e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1523e8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1523ec: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x1523ECu;
    SET_GPR_U32(ctx, 31, 0x1523F4u);
    ctx->pc = 0x1523F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523ECu;
    // 0x1523f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x1523ECu, 0x1523F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523F4u;
label_1523f4:
    // 0x1523f4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1523f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1523f8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1523fc: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x1523FCu;
    SET_GPR_U32(ctx, 31, 0x152404u);
    ctx->pc = 0x152400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523FCu;
    // 0x152400: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x1523FCu, 0x152404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152404u;
label_152404:
    // 0x152404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152408: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x152408u;
    SET_GPR_U32(ctx, 31, 0x152410u);
    ctx->pc = 0x15240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152408u;
    // 0x15240c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x152408u, 0x152410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152410u;
label_152410:
    // 0x152410: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152414: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x152418: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15241c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15241cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152420: 0x3e00008  jr          $ra
    ctx->pc = 0x152420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152420u;
        // 0x152424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152428u;
}
