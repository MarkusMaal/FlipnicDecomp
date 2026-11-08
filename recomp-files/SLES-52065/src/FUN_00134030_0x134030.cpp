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

// Function: FUN_00134030
// Address: 0x134030 - 0x134080
void FUN_00134030_0x134030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134030_0x134030");
#endif

    switch (ctx->pc) {
        case 0x134068u: goto label_134068;
        case 0x134070u: goto label_134070;
        default: break;
    }

    ctx->pc = 0x134030u;

    // 0x134030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134034: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x134034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x134038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13403c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x134040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x134044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x134048: 0xe46c0050  swc1        $f12, 0x50($v1)
    ctx->pc = 0x134048u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x13404c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13404cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134050: 0xe46d0054  swc1        $f13, 0x54($v1)
    ctx->pc = 0x134050u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x134054: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x134054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x134058: 0xe46e0058  swc1        $f14, 0x58($v1)
    ctx->pc = 0x134058u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x13405c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13405cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134060: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x134060u;
    SET_GPR_U32(ctx, 31, 0x134068u);
    ctx->pc = 0x134064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134060u;
    // 0x134064: 0xac62005c  sw          $v0, 0x5C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x134060u, 0x134068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134068u;
label_134068:
    // 0x134068: 0xc04d06c  jal         func_1341B0
    ctx->pc = 0x134068u;
    SET_GPR_U32(ctx, 31, 0x134070u);
    ctx->pc = 0x13406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134068u;
    // 0x13406c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341B0u, 0x134068u, 0x134070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134070u;
label_134070:
    // 0x134070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134078: 0x3e00008  jr          $ra
    ctx->pc = 0x134078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134078u;
        // 0x13407c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134080u;
}
