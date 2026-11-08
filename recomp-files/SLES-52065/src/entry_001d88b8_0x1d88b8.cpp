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

// Function: entry_001d88b8
// Address: 0x1d88b8 - 0x1d8920
void entry_001d88b8_0x1d88b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d88b8_0x1d88b8");
#endif

    switch (ctx->pc) {
        case 0x1d88d4u: goto label_1d88d4;
        default: break;
    }

    ctx->pc = 0x1d88b8u;

    // 0x1d88b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d88bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d88bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88c0: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d88c4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d88c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d88c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88cc: 0xc0772c0  jal         func_1DCB00
    ctx->pc = 0x1D88CCu;
    SET_GPR_U32(ctx, 31, 0x1D88D4u);
    ctx->pc = 0x1D88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88CCu;
    // 0x1d88d0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCB00u, 0x1D88CCu, 0x1D88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88D4u;
label_1d88d4:
    // 0x1d88d4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d88d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d88d8: 0x600006a  bltz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D88D8u;
    {
        const bool branch_taken_0x1d88d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88D8u;
        // 0x1d88dc: 0x131600  sll         $v0, $s3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88d8) {
            ctx->pc = 0x1D8A84u;
            return;
        }
    }
    ctx->pc = 0x1D88E0u;
    // 0x1d88e0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1d88e4: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x1d88e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x1d88e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d88e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d88ec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1d88f0: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d88f4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d88f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d88f8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d88f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1d88fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d8900: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d8900u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8908: 0x7d8821  addu        $s1, $v1, $sp
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d890c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1d890cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1d8910: 0x0  nop
    ctx->pc = 0x1d8910u;
    // NOP
    // 0x1d8914: 0x0  nop
    ctx->pc = 0x1d8914u;
    // NOP
    // 0x1d8918: 0x4600a543  div.s       $f21, $f20, $f0
    ctx->pc = 0x1d8918u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1d891c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d8920u;
}
