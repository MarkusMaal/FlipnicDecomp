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

// Function: FUN_001698b0
// Address: 0x1698b0 - 0x1698fc
void FUN_001698b0_0x1698b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001698b0_0x1698b0");
#endif

    switch (ctx->pc) {
        case 0x1698c4u: goto label_1698c4;
        default: break;
    }

    ctx->pc = 0x1698b0u;

    // 0x1698b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1698b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1698b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1698b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1698b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1698b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1698bc: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x1698BCu;
    SET_GPR_U32(ctx, 31, 0x1698C4u);
    ctx->pc = 0x1698C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698BCu;
    // 0x1698c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x1698BCu, 0x1698C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1698C4u;
label_1698c4:
    // 0x1698c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1698c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1698c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1698c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1698cc: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x1698ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698d0: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x1698d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x1698d4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1698d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x1698d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1698d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1698dc: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x1698dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x1698e0: 0x820301d4  lb          $v1, 0x1D4($s0)
    ctx->pc = 0x1698e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x1698e4: 0xa2030223  sb          $v1, 0x223($s0)
    ctx->pc = 0x1698e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 547), (uint8_t)GPR_U32(ctx, 3));
    // 0x1698e8: 0xa2000222  sb          $zero, 0x222($s0)
    ctx->pc = 0x1698e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 0));
    // 0x1698ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1698ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1698f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1698f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1698f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1698F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698F4u;
        // 0x1698f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1698F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1698FCu;
}
