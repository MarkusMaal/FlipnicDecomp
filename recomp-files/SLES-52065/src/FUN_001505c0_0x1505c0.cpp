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

// Function: FUN_001505c0
// Address: 0x1505c0 - 0x150674
void FUN_001505c0_0x1505c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001505c0_0x1505c0");
#endif

    switch (ctx->pc) {
        case 0x1505e0u: goto label_1505e0;
        case 0x15061cu: goto label_15061c;
        case 0x150654u: goto label_150654;
        default: break;
    }

    ctx->pc = 0x1505c0u;

    // 0x1505c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1505c4: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1505c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1505c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1505cc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1505ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1505d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1505d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1505d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1505d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1505d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1505D8u;
    {
        const bool branch_taken_0x1505d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1505d8) {
            ctx->pc = 0x1505E4u;
            goto label_1505e4;
        }
    }
    ctx->pc = 0x1505E0u;
label_1505e0:
    // 0x1505e0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1505e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1505e4:
    // 0x1505e4: 0x0  nop
    ctx->pc = 0x1505e4u;
    // NOP
    // 0x1505e8: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1505e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1505ec: 0x0  nop
    ctx->pc = 0x1505ecu;
    // NOP
    // 0x1505f0: 0x0  nop
    ctx->pc = 0x1505f0u;
    // NOP
    // 0x1505f4: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1505F4u;
    {
        const bool branch_taken_0x1505f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1505f4) {
            ctx->pc = 0x1505E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1505e0;
        }
    }
    ctx->pc = 0x1505FCu;
    // 0x1505fc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1505fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x150600: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x150600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x150604: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x150604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x150608: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x150608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x15060c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15060cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150614u;
    {
        const bool branch_taken_0x150614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150614) {
            ctx->pc = 0x150620u;
            goto label_150620;
        }
    }
    ctx->pc = 0x15061Cu;
label_15061c:
    // 0x15061c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x15061cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_150620:
    // 0x150620: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x150620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150624: 0x0  nop
    ctx->pc = 0x150624u;
    // NOP
    // 0x150628: 0x0  nop
    ctx->pc = 0x150628u;
    // NOP
    // 0x15062c: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x15062Cu;
    {
        const bool branch_taken_0x15062c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15062c) {
            ctx->pc = 0x15061Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15061c;
        }
    }
    ctx->pc = 0x150634u;
    // 0x150634: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x150634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x150638: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x150638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15063c: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x15063cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x150640: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x150640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x150644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x150644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15064c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15064Cu;
    {
        const bool branch_taken_0x15064c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15064c) {
            ctx->pc = 0x150658u;
            goto label_150658;
        }
    }
    ctx->pc = 0x150654u;
label_150654:
    // 0x150654: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x150654u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_150658:
    // 0x150658: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x150658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15065c: 0x0  nop
    ctx->pc = 0x15065cu;
    // NOP
    // 0x150660: 0x0  nop
    ctx->pc = 0x150660u;
    // NOP
    // 0x150664: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x150664u;
    {
        const bool branch_taken_0x150664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x150664) {
            ctx->pc = 0x150654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150654;
        }
    }
    ctx->pc = 0x15066Cu;
    // 0x15066c: 0x3e00008  jr          $ra
    ctx->pc = 0x15066Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15066Cu;
        // 0x150670: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15066Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150674u;
}
