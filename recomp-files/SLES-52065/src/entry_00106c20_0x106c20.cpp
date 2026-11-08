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

// Function: entry_00106c20
// Address: 0x106c20 - 0x106ca0
void entry_00106c20_0x106c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c20_0x106c20");
#endif

    switch (ctx->pc) {
        case 0x106c34u: goto label_106c34;
        default: break;
    }

    ctx->pc = 0x106c20u;

    // 0x106c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106c2c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x106C2Cu;
    SET_GPR_U32(ctx, 31, 0x106C34u);
    ctx->pc = 0x106C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C2Cu;
    // 0x106c30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x106C2Cu, 0x106C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C34u;
label_106c34:
    // 0x106c34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x106c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106c38: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x106c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x106c3c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x106c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x106c40: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x106c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106c44: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x106c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x106c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106c4c: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x106c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106c50: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x106c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106c54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x106c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x106c58: 0x80a5006c  lb          $a1, 0x6C($a1)
    ctx->pc = 0x106c58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x106c5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x106c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x106c60: 0xa205021e  sb          $a1, 0x21E($s0)
    ctx->pc = 0x106c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 542), (uint8_t)GPR_U32(ctx, 5));
    // 0x106c64: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x106c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x106c68: 0xe6010214  swc1        $f1, 0x214($s0)
    ctx->pc = 0x106c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x106c6c: 0xa204021d  sb          $a0, 0x21D($s0)
    ctx->pc = 0x106c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 541), (uint8_t)GPR_U32(ctx, 4));
    // 0x106c70: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x106c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x106c74: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x106c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x106c78: 0xa200021f  sb          $zero, 0x21F($s0)
    ctx->pc = 0x106c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x106c7c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x106c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x106c80: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x106c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x106c84: 0xa200021c  sb          $zero, 0x21C($s0)
    ctx->pc = 0x106c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 0));
    // 0x106c88: 0xa200021f  sb          $zero, 0x21F($s0)
    ctx->pc = 0x106c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x106c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106c94: 0x3e00008  jr          $ra
    ctx->pc = 0x106C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C94u;
        // 0x106c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106C9Cu;
    // 0x106c9c: 0x0  nop
    ctx->pc = 0x106c9cu;
    // NOP
    ctx->pc = 0x106ca0u;
}
