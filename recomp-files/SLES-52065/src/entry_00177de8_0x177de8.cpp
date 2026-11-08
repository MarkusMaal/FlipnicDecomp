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

// Function: entry_00177de8
// Address: 0x177de8 - 0x177e6c
void entry_00177de8_0x177de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177de8_0x177de8");
#endif

    switch (ctx->pc) {
        case 0x177e00u: goto label_177e00;
        default: break;
    }

    ctx->pc = 0x177de8u;

    // 0x177de8: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x177dec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x177decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x177df0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x177df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x177df4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x177df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x177df8: 0xc05e0b8  jal         func_1782E0
    ctx->pc = 0x177DF8u;
    SET_GPR_U32(ctx, 31, 0x177E00u);
    ctx->pc = 0x177DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DF8u;
    // 0x177dfc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1782E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1782E0u, 0x177DF8u, 0x177E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177E00u;
label_177e00:
    // 0x177e00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x177e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177e04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177e08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x177e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177e0c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x177e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x177e10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x177e14: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177e14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177e18: 0x0  nop
    ctx->pc = 0x177e18u;
    // NOP
    // 0x177e1c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177E1Cu;
    {
        const bool branch_taken_0x177e1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E1Cu;
        // 0x177e20: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e1c) {
            ctx->pc = 0x177E6Cu;
            return;
        }
    }
    ctx->pc = 0x177E24u;
    // 0x177e24: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177e28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177e2c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177e30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177e30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177e34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177e38: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177e3c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177e40: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x177e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177e44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177e48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177e4c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x177e50: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x177e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177e54: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x177e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177e58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177e5c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177e60: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x177e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177e64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177E64u;
    {
        const bool branch_taken_0x177e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E64u;
        // 0x177e68: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177e64) {
            ctx->pc = 0x177E78u;
            return;
        }
    }
    ctx->pc = 0x177E6Cu;
}
