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

// Function: entry_001079cc
// Address: 0x1079cc - 0x107a60
void entry_001079cc_0x1079cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001079cc_0x1079cc");
#endif

    switch (ctx->pc) {
        case 0x1079d4u: goto label_1079d4;
        default: break;
    }

    ctx->pc = 0x1079ccu;

    // 0x1079cc: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1079CCu;
    SET_GPR_U32(ctx, 31, 0x1079D4u);
    ctx->pc = 0x1079D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079CCu;
    // 0x1079d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1079CCu, 0x1079D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079D4u;
label_1079d4:
    // 0x1079d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1079d8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1079d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1079dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1079dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1079e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1079e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1079e4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1079e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1079e8: 0x0  nop
    ctx->pc = 0x1079e8u;
    // NOP
    // 0x1079ec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1079ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1079f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1079f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1079f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1079f8: 0x0  nop
    ctx->pc = 0x1079f8u;
    // NOP
    // 0x1079fc: 0x46020103  div.s       $f4, $f0, $f2
    ctx->pc = 0x1079fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x107a00: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x107a04: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x107a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x107a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a0c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x107a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107a10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x107a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x107a14: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x107a14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x107a18: 0x0  nop
    ctx->pc = 0x107a18u;
    // NOP
    // 0x107a1c: 0x46041042  mul.s       $f1, $f2, $f4
    ctx->pc = 0x107a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x107a20: 0x46011900  add.s       $f4, $f3, $f1
    ctx->pc = 0x107a20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x107a24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x107a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x107a28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107a28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107a2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x107a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x107a30: 0x0  nop
    ctx->pc = 0x107a30u;
    // NOP
    // 0x107a34: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x107a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x107a38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x107a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107a3c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x107a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x107a40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x107a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107a44: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x107a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x107a48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107a4c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x107a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x107a50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x107a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107a54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x107a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107a58: 0x3e00008  jr          $ra
    ctx->pc = 0x107A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A58u;
        // 0x107a5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107A60u;
}
