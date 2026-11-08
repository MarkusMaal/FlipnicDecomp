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

// Function: FUN_00119050
// Address: 0x119050 - 0x1190d0
void FUN_00119050_0x119050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119050_0x119050");
#endif

    switch (ctx->pc) {
        case 0x119078u: goto label_119078;
        case 0x1190a8u: goto label_1190a8;
        case 0x1190b4u: goto label_1190b4;
        default: break;
    }

    ctx->pc = 0x119050u;

    // 0x119050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11905c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x119060: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119064: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11906c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11906cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119070: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x119070u;
    SET_GPR_U32(ctx, 31, 0x119078u);
    ctx->pc = 0x119074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119070u;
    // 0x119074: 0x24a5e5e8  addiu       $a1, $a1, -0x1A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x119070u, 0x119078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119078u;
label_119078:
    // 0x119078: 0x8f90802c  lw          $s0, -0x7FD4($gp)
    ctx->pc = 0x119078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x11907c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119080: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x119080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119084: 0xaf91802c  sw          $s1, -0x7FD4($gp)
    ctx->pc = 0x119084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 17));
    // 0x119088: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11908c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119090: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x119090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x119094: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x119094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x119098: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x119098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11909c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x11909cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1190a0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1190A0u;
    SET_GPR_U32(ctx, 31, 0x1190A8u);
    ctx->pc = 0x1190A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190A0u;
    // 0x1190a4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1190A0u, 0x1190A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190A8u;
label_1190a8:
    // 0x1190a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1190a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190ac: 0xc062c10  jal         func_18B040
    ctx->pc = 0x1190ACu;
    SET_GPR_U32(ctx, 31, 0x1190B4u);
    ctx->pc = 0x1190B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190ACu;
    // 0x1190b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B040u, 0x1190ACu, 0x1190B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190B4u;
label_1190b4:
    // 0x1190b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1190b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1190b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1190bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1190bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1190c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1190c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1190c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1190c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1190c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1190C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190C8u;
        // 0x1190cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190D0u;
}
