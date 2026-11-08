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

// Function: entry_001a912c
// Address: 0x1a912c - 0x1a91b8
void entry_001a912c_0x1a912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a912c_0x1a912c");
#endif

    switch (ctx->pc) {
        case 0x1a9160u: goto label_1a9160;
        default: break;
    }

    ctx->pc = 0x1a912cu;

    // 0x1a912c: 0x0  nop
    ctx->pc = 0x1a912cu;
    // NOP
    // 0x1a9130: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9134: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9138: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a913c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a913cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a9140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9144: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a914c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a914cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9154: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a9154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a9158: 0xc06a4e4  jal         func_1A9390
    ctx->pc = 0x1A9158u;
    SET_GPR_U32(ctx, 31, 0x1A9160u);
    ctx->pc = 0x1A915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9158u;
    // 0x1a915c: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9390u, 0x1A9158u, 0x1A9160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9160u;
label_1a9160:
    // 0x1a9160: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9164: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a916c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a917c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a917cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a9184: 0x0  nop
    ctx->pc = 0x1a9184u;
    // NOP
    // 0x1a9188: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a9188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1a918c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1a918cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1a9190: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a9194: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a9194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a9198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a919c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a91a0: 0xa06501d3  sb          $a1, 0x1D3($v1)
    ctx->pc = 0x1a91a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 467), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a91a4: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1a91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1a91a8: 0xae830ae4  sw          $v1, 0xAE4($s4)
    ctx->pc = 0x1a91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2788), GPR_U32(ctx, 3));
    // 0x1a91ac: 0xae800ae8  sw          $zero, 0xAE8($s4)
    ctx->pc = 0x1a91acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2792), GPR_U32(ctx, 0));
    // 0x1a91b0: 0xae820aec  sw          $v0, 0xAEC($s4)
    ctx->pc = 0x1a91b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2796), GPR_U32(ctx, 2));
    // 0x1a91b4: 0xae800af0  sw          $zero, 0xAF0($s4)
    ctx->pc = 0x1a91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 0));
    ctx->pc = 0x1a91b8u;
}
