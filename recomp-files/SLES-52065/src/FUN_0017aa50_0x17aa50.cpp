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

// Function: FUN_0017aa50
// Address: 0x17aa50 - 0x17aae0
void FUN_0017aa50_0x17aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017aa50_0x17aa50");
#endif

    switch (ctx->pc) {
        case 0x17aa78u: goto label_17aa78;
        case 0x17aa84u: goto label_17aa84;
        case 0x17aa98u: goto label_17aa98;
        case 0x17aaa4u: goto label_17aaa4;
        case 0x17aac8u: goto label_17aac8;
        default: break;
    }

    ctx->pc = 0x17aa50u;

    // 0x17aa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17aa54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aa58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17aa5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17aa60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17aa64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17aa64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aa6c: 0xa0820078  sb          $v0, 0x78($a0)
    ctx->pc = 0x17aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x17aa70: 0xc0596a0  jal         func_165A80
    ctx->pc = 0x17AA70u;
    SET_GPR_U32(ctx, 31, 0x17AA78u);
    ctx->pc = 0x17AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA70u;
    // 0x17aa74: 0xa080007a  sb          $zero, 0x7A($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A80u, 0x17AA70u, 0x17AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA78u;
label_17aa78:
    // 0x17aa78: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x17aa78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17aa7c: 0xc05a8e0  jal         func_16A380
    ctx->pc = 0x17AA7Cu;
    SET_GPR_U32(ctx, 31, 0x17AA84u);
    ctx->pc = 0x17AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA7Cu;
    // 0x17aa80: 0x26440220  addiu       $a0, $s2, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A380u, 0x17AA7Cu, 0x17AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA84u;
label_17aa84:
    // 0x17aa84: 0x8211006d  lb          $s1, 0x6D($s0)
    ctx->pc = 0x17aa84u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
    // 0x17aa88: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x17AA88u;
    {
        const bool branch_taken_0x17aa88 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x17aa88) {
            ctx->pc = 0x17AAC8u;
            goto label_17aac8;
        }
    }
    ctx->pc = 0x17AA90u;
    // 0x17aa90: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x17AA90u;
    SET_GPR_U32(ctx, 31, 0x17AA98u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x17AA90u, 0x17AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA98u;
label_17aa98:
    // 0x17aa98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17aa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa9c: 0xc05fec0  jal         func_17FB00
    ctx->pc = 0x17AA9Cu;
    SET_GPR_U32(ctx, 31, 0x17AAA4u);
    ctx->pc = 0x17AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA9Cu;
    // 0x17aaa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x17AA9Cu, 0x17AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAA4u;
label_17aaa4:
    // 0x17aaa4: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x17aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17aaa8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x17aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x17aaac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x17aaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x17aab0: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x17aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17aab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17aab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17aab8: 0x26440220  addiu       $a0, $s2, 0x220
    ctx->pc = 0x17aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x17aabc: 0xc60d0074  lwc1        $f13, 0x74($s0)
    ctx->pc = 0x17aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17aac0: 0xc05a8f8  jal         func_16A3E0
    ctx->pc = 0x17AAC0u;
    SET_GPR_U32(ctx, 31, 0x17AAC8u);
    ctx->pc = 0x17AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAC0u;
    // 0x17aac4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A3E0u, 0x17AAC0u, 0x17AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAC8u;
label_17aac8:
    // 0x17aac8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17aac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17aacc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17aaccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17aad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aad8: 0x3e00008  jr          $ra
    ctx->pc = 0x17AAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAD8u;
        // 0x17aadc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AAE0u;
}
