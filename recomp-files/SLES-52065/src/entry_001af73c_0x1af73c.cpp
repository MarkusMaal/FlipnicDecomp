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

// Function: entry_001af73c
// Address: 0x1af73c - 0x1af7b8
void entry_001af73c_0x1af73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af73c_0x1af73c");
#endif

    switch (ctx->pc) {
        case 0x1af74cu: goto label_1af74c;
        default: break;
    }

    ctx->pc = 0x1af73cu;

    // 0x1af73c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1af740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af744: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1AF744u;
    SET_GPR_U32(ctx, 31, 0x1AF74Cu);
    ctx->pc = 0x1AF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF744u;
    // 0x1af748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1AF744u, 0x1AF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF74Cu;
label_1af74c:
    // 0x1af74c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1af74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1af750: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1af754: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1af754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af758: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1af758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af75c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1af75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af760: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1af760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af764: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1af764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1af768: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1af768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1af76c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1af76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1af770: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1af770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1af774: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1af774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af778: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1af778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af77c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1af77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af780: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1af780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af784: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1af784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1af788: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1af788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1af78c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1af78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1af790: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1af790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1af794: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1af794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af798: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1af79c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af79cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af7a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1af7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af7a4: 0x0  nop
    ctx->pc = 0x1af7a4u;
    // NOP
    // 0x1af7a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1af7a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1af7ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF7ACu;
    {
        const bool branch_taken_0x1af7ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af7ac) {
            ctx->pc = 0x1AF7B8u;
            return;
        }
    }
    ctx->pc = 0x1AF7B4u;
    // 0x1af7b4: 0xae0302d8  sw          $v1, 0x2D8($s0)
    ctx->pc = 0x1af7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 3));
    ctx->pc = 0x1af7b8u;
}
