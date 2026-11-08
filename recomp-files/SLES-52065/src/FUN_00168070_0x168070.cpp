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

// Function: FUN_00168070
// Address: 0x168070 - 0x1680a0
void FUN_00168070_0x168070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168070_0x168070");
#endif

    switch (ctx->pc) {
        case 0x168084u: goto label_168084;
        default: break;
    }

    ctx->pc = 0x168070u;

    // 0x168070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16807c: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x16807Cu;
    SET_GPR_U32(ctx, 31, 0x168084u);
    ctx->pc = 0x168080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16807Cu;
    // 0x168080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x16807Cu, 0x168084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168084u;
label_168084:
    // 0x168084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x168084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168088: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x168088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16808c: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x16808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x168090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168098: 0x3e00008  jr          $ra
    ctx->pc = 0x168098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168098u;
        // 0x16809c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1680A0u;
}
