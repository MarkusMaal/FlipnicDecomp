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

// Function: entry_001fabec
// Address: 0x1fabec - 0x1fac5c
void entry_001fabec_0x1fabec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fabec_0x1fabec");
#endif

    switch (ctx->pc) {
        case 0x1fabf4u: goto label_1fabf4;
        default: break;
    }

    ctx->pc = 0x1fabecu;

    // 0x1fabec: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1FABECu;
    SET_GPR_U32(ctx, 31, 0x1FABF4u);
    ctx->pc = 0x1FABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FABECu;
    // 0x1fabf0: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1FABECu, 0x1FABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FABF4u;
label_1fabf4:
    // 0x1fabf4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1fabf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x1fabf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fabf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fabfc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1fabfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1fac00: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1fac00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fac04: 0x0  nop
    ctx->pc = 0x1fac04u;
    // NOP
    // 0x1fac08: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1FAC08u;
    {
        const bool branch_taken_0x1fac08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC08u;
        // 0x1fac0c: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac08) {
            ctx->pc = 0x1FAC5Cu;
            return;
        }
    }
    ctx->pc = 0x1FAC10u;
    // 0x1fac10: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1fac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1fac14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fac14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fac1c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fac20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1fac20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1fac24: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1fac28: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x1fac28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1fac2c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1fac30: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1fac30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fac34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fac38: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fac38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fac3c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1fac3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1fac40: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1fac40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1fac44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fac48: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1fac48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1fac4c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fac50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1fac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1fac54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAC54u;
    {
        const bool branch_taken_0x1fac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC54u;
        // 0x1fac58: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac54) {
            ctx->pc = 0x1FAC74u;
            return;
        }
    }
    ctx->pc = 0x1FAC5Cu;
}
