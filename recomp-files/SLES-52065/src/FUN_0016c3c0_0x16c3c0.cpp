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

// Function: FUN_0016c3c0
// Address: 0x16c3c0 - 0x16c40c
void FUN_0016c3c0_0x16c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016c3c0_0x16c3c0");
#endif

    switch (ctx->pc) {
        case 0x16c3d4u: goto label_16c3d4;
        default: break;
    }

    ctx->pc = 0x16c3c0u;

    // 0x16c3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c3c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16c3cc: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x16C3CCu;
    SET_GPR_U32(ctx, 31, 0x16C3D4u);
    ctx->pc = 0x16C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C3CCu;
    // 0x16c3d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x16C3CCu, 0x16C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3D4u;
label_16c3d4:
    // 0x16c3d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c3d8: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x16c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x16c3dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16c3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16c3e0: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x16c3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c3e4: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x16c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x16c3e8: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x16c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
    // 0x16c3ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16c3f0: 0x80630024  lb          $v1, 0x24($v1)
    ctx->pc = 0x16c3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16c3f4: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x16c3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x16c3f8: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x16c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x16c3fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16c400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c404: 0x3e00008  jr          $ra
    ctx->pc = 0x16C404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C404u;
        // 0x16c408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C40Cu;
}
