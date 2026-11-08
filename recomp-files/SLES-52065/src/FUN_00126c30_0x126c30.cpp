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

// Function: FUN_00126c30
// Address: 0x126c30 - 0x126cbc
void FUN_00126c30_0x126c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126c30_0x126c30");
#endif

    switch (ctx->pc) {
        case 0x126c48u: goto label_126c48;
        default: break;
    }

    ctx->pc = 0x126c30u;

    // 0x126c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x126c3c: 0xe48c00fc  swc1        $f12, 0xFC($a0)
    ctx->pc = 0x126c3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x126c40: 0xc049c4c  jal         func_127130
    ctx->pc = 0x126C40u;
    SET_GPR_U32(ctx, 31, 0x126C48u);
    ctx->pc = 0x126C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C40u;
    // 0x126c44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127130u, 0x126C40u, 0x126C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C48u;
label_126c48:
    // 0x126c48: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x126C48u;
    {
        const bool branch_taken_0x126c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c48) {
            ctx->pc = 0x126CA8u;
            goto label_126ca8;
        }
    }
    ctx->pc = 0x126C50u;
    // 0x126c50: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x126c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x126c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126c58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126C58u;
    {
        const bool branch_taken_0x126c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x126c58) {
            ctx->pc = 0x126C6Cu;
            goto label_126c6c;
        }
    }
    ctx->pc = 0x126C60u;
    // 0x126c60: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x126c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x126c64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x126C64u;
    {
        const bool branch_taken_0x126c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C64u;
        // 0x126c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c64) {
            ctx->pc = 0x126CACu;
            goto label_126cac;
        }
    }
    ctx->pc = 0x126C6Cu;
label_126c6c:
    // 0x126c6c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x126c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x126c70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126C70u;
    {
        const bool branch_taken_0x126c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x126C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C70u;
        // 0x126c74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c70) {
            ctx->pc = 0x126C84u;
            goto label_126c84;
        }
    }
    ctx->pc = 0x126C78u;
    // 0x126c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126c7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126C7Cu;
    {
        const bool branch_taken_0x126c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C7Cu;
        // 0x126c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c7c) {
            ctx->pc = 0x126C9Cu;
            goto label_126c9c;
        }
    }
    ctx->pc = 0x126C84u;
label_126c84:
    // 0x126c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x126c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x126c88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126c90: 0x0  nop
    ctx->pc = 0x126c90u;
    // NOP
    // 0x126c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126c98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_126c9c:
    // 0x126c9c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x126c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x126ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126CA0u;
    {
        const bool branch_taken_0x126ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CA0u;
        // 0x126ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ca0) {
            ctx->pc = 0x126CACu;
            goto label_126cac;
        }
    }
    ctx->pc = 0x126CA8u;
label_126ca8:
    // 0x126ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126cac:
    // 0x126cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x126CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB4u;
        // 0x126cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126CBCu;
}
