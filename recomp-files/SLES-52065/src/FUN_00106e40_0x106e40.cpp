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

// Function: FUN_00106e40
// Address: 0x106e40 - 0x106ec0
void FUN_00106e40_0x106e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106e40_0x106e40");
#endif

    switch (ctx->pc) {
        case 0x106e54u: goto label_106e54;
        default: break;
    }

    ctx->pc = 0x106e40u;

    // 0x106e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106e4c: 0xc0563cc  jal         func_158F30
    ctx->pc = 0x106E4Cu;
    SET_GPR_U32(ctx, 31, 0x106E54u);
    ctx->pc = 0x106E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E4Cu;
    // 0x106e50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x106E4Cu, 0x106E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E54u;
label_106e54:
    // 0x106e54: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x106e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106e58: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x106e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x106e5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x106e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x106e60: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x106e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x106e64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x106e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x106e68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106e6c: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x106e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106e70: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x106e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106e74: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x106e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x106e78: 0x80a5006c  lb          $a1, 0x6C($a1)
    ctx->pc = 0x106e78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x106e7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x106e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x106e80: 0xa205021e  sb          $a1, 0x21E($s0)
    ctx->pc = 0x106e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 542), (uint8_t)GPR_U32(ctx, 5));
    // 0x106e84: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x106e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x106e88: 0xe6010214  swc1        $f1, 0x214($s0)
    ctx->pc = 0x106e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x106e8c: 0xa204021d  sb          $a0, 0x21D($s0)
    ctx->pc = 0x106e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 541), (uint8_t)GPR_U32(ctx, 4));
    // 0x106e90: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x106e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x106e94: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x106e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x106e98: 0xa200021f  sb          $zero, 0x21F($s0)
    ctx->pc = 0x106e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x106e9c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x106e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
    // 0x106ea0: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x106ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x106ea4: 0xa200021c  sb          $zero, 0x21C($s0)
    ctx->pc = 0x106ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 540), (uint8_t)GPR_U32(ctx, 0));
    // 0x106ea8: 0xa200021f  sb          $zero, 0x21F($s0)
    ctx->pc = 0x106ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 543), (uint8_t)GPR_U32(ctx, 0));
    // 0x106eac: 0xae030224  sw          $v1, 0x224($s0)
    ctx->pc = 0x106eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 3));
    // 0x106eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x106EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106EB8u;
        // 0x106ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106EC0u;
}
