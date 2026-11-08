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

// Function: FUN_00151c40
// Address: 0x151c40 - 0x151ce8
void FUN_00151c40_0x151c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151c40_0x151c40");
#endif

    switch (ctx->pc) {
        case 0x151cdcu: goto label_151cdc;
        default: break;
    }

    ctx->pc = 0x151c40u;

    // 0x151c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151c44: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x151c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x151c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151c4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x151c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x151c50: 0x8c842c1c  lw          $a0, 0x2C1C($a0)
    ctx->pc = 0x151c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x151c54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x151c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x151c58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x151c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x151c5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151c60: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x151c60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151c64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x151c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151c68: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x151c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x151c6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x151c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151c70: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x151c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x151c74: 0x834821  addu        $t1, $a0, $v1
    ctx->pc = 0x151c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151c78: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x151c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x151c7c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x151c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x151c80: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x151c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x151c84: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x151c84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151c88: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x151c88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151c8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151c90: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x151c90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151c94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x151c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151c98: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x151c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x151c9c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x151c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x151ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ca4: 0x0  nop
    ctx->pc = 0x151ca4u;
    // NOP
    // 0x151ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151cac: 0xa1270043  sb          $a3, 0x43($t1)
    ctx->pc = 0x151cacu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 67), (uint8_t)GPR_U32(ctx, 7));
    // 0x151cb0: 0x1043823  subu        $a3, $t0, $a0
    ctx->pc = 0x151cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x151cb4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x151cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x151cb8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x151cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x151cbc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x151cbcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151cc0: 0x0  nop
    ctx->pc = 0x151cc0u;
    // NOP
    // 0x151cc4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x151cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x151cc8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x151cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151ccc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x151cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x151cd0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x151cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x151cd4: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151CD4u;
    SET_GPR_U32(ctx, 31, 0x151CDCu);
    ctx->pc = 0x151CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CD4u;
    // 0x151cd8: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151CD4u, 0x151CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CDCu;
label_151cdc:
    // 0x151cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x151CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CE0u;
        // 0x151ce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151CE8u;
}
