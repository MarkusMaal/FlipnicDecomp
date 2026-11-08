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

// Function: FUN_00151bc0
// Address: 0x151bc0 - 0x151c40
void FUN_00151bc0_0x151bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151bc0_0x151bc0");
#endif

    switch (ctx->pc) {
        case 0x151c34u: goto label_151c34;
        default: break;
    }

    ctx->pc = 0x151bc0u;

    // 0x151bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151bc4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x151bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x151bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151bcc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x151bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x151bd0: 0x8c892c1c  lw          $t1, 0x2C1C($a0)
    ctx->pc = 0x151bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x151bd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x151bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x151bd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x151bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151bdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x151bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151be0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x151be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151be4: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x151be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x151be8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151bec: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x151becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x151bf0: 0x85250002  lh          $a1, 0x2($t1)
    ctx->pc = 0x151bf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x151bf4: 0xc41823  subu        $v1, $a2, $a0
    ctx->pc = 0x151bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x151bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151bfc: 0xa1280043  sb          $t0, 0x43($t1)
    ctx->pc = 0x151bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 67), (uint8_t)GPR_U32(ctx, 8));
    // 0x151c00: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x151c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x151c04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x151c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151c08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151c0c: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x151c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x151c10: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x151c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x151c14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151c18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x151c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x151c1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c20: 0x0  nop
    ctx->pc = 0x151c20u;
    // NOP
    // 0x151c24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151c28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x151c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151c2c: 0xc05fc4c  jal         func_17F130
    ctx->pc = 0x151C2Cu;
    SET_GPR_U32(ctx, 31, 0x151C34u);
    ctx->pc = 0x151C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C2Cu;
    // 0x151c30: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F130u, 0x151C2Cu, 0x151C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C34u;
label_151c34:
    // 0x151c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151c38: 0x3e00008  jr          $ra
    ctx->pc = 0x151C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C38u;
        // 0x151c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C40u;
}
