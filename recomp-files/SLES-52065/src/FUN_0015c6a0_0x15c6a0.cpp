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

// Function: FUN_0015c6a0
// Address: 0x15c6a0 - 0x15c71c
void FUN_0015c6a0_0x15c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c6a0_0x15c6a0");
#endif

    switch (ctx->pc) {
        case 0x15c6c0u: goto label_15c6c0;
        default: break;
    }

    ctx->pc = 0x15c6a0u;

    // 0x15c6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15c6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15c6a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6a8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x15c6ac: 0x3c064033  lui         $a2, 0x4033
    ctx->pc = 0x15c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16435 << 16));
    // 0x15c6b0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x15c6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x15c6b4: 0x34c63333  ori         $a2, $a2, 0x3333
    ctx->pc = 0x15c6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13107);
    // 0x15c6b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15c6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c6bc: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x15c6bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15c6c0:
    // 0x15c6c0: 0xc7848020  lwc1        $f4, -0x7FE0($gp)
    ctx->pc = 0x15c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15c6c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c6c8: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x15c6c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15c6cc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15c6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6d0: 0x0  nop
    ctx->pc = 0x15c6d0u;
    // NOP
    // 0x15c6d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C6D4u;
    {
        const bool branch_taken_0x15c6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6d4) {
            ctx->pc = 0x15C6E0u;
            goto label_15c6e0;
        }
    }
    ctx->pc = 0x15C6DCu;
    // 0x15c6dc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x15c6dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_15c6e0:
    // 0x15c6e0: 0x460408c2  mul.s       $f3, $f1, $f4
    ctx->pc = 0x15c6e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x15c6e4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x15c6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6e8: 0x0  nop
    ctx->pc = 0x15c6e8u;
    // NOP
    // 0x15c6ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C6ECu;
    {
        const bool branch_taken_0x15c6ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6ec) {
            ctx->pc = 0x15C6F8u;
            goto label_15c6f8;
        }
    }
    ctx->pc = 0x15C6F4u;
    // 0x15c6f4: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x15c6f4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_15c6f8:
    // 0x15c6f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15c6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15c6fc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x15c6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x15c700: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15c704: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x15c704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15c708: 0x250803d0  addiu       $t0, $t0, 0x3D0
    ctx->pc = 0x15c708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
    // 0x15c70c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15C70Cu;
    {
        const bool branch_taken_0x15c70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C70Cu;
        // 0x15c710: 0xe4c00210  swc1        $f0, 0x210($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 528), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c70c) {
            ctx->pc = 0x15C6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c6c0;
        }
    }
    ctx->pc = 0x15C714u;
    // 0x15c714: 0x3e00008  jr          $ra
    ctx->pc = 0x15C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C71Cu;
}
