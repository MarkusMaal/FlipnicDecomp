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

// Function: entry_001619ac
// Address: 0x1619ac - 0x161a18
void entry_001619ac_0x1619ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001619ac_0x1619ac");
#endif

    switch (ctx->pc) {
        case 0x1619c4u: goto label_1619c4;
        case 0x1619ccu: goto label_1619cc;
        case 0x1619d4u: goto label_1619d4;
        default: break;
    }

    ctx->pc = 0x1619acu;

    // 0x1619ac: 0x0  nop
    ctx->pc = 0x1619acu;
    // NOP
    // 0x1619b0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1619b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1619b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1619B4u;
    {
        const bool branch_taken_0x1619b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619B4u;
        // 0x1619b8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619b4) {
            ctx->pc = 0x161968u;
            return;
        }
    }
    ctx->pc = 0x1619BCu;
    // 0x1619bc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1619BCu;
    SET_GPR_U32(ctx, 31, 0x1619C4u);
    ctx->pc = 0x1619C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619BCu;
    // 0x1619c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1619BCu, 0x1619C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619C4u;
label_1619c4:
    // 0x1619c4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1619C4u;
    SET_GPR_U32(ctx, 31, 0x1619CCu);
    ctx->pc = 0x1619C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619C4u;
    // 0x1619c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1619C4u, 0x1619CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619CCu;
label_1619cc:
    // 0x1619cc: 0xc04018c  jal         func_100630
    ctx->pc = 0x1619CCu;
    SET_GPR_U32(ctx, 31, 0x1619D4u);
    ctx->pc = 0x1619D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1619CCu;
    // 0x1619d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1619CCu, 0x1619D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619D4u;
label_1619d4:
    // 0x1619d4: 0x0  nop
    ctx->pc = 0x1619d4u;
    // NOP
    // 0x1619d8: 0x0  nop
    ctx->pc = 0x1619d8u;
    // NOP
    // 0x1619dc: 0x0  nop
    ctx->pc = 0x1619dcu;
    // NOP
    // 0x1619e0: 0x46140004  c1          0x140004
    ctx->pc = 0x1619e0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1619e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1619e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1619e8: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x1619e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x1619ec: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x1619ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1619f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619f4: 0x0  nop
    ctx->pc = 0x1619f4u;
    // NOP
    // 0x1619f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1619f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1619fc: 0x0  nop
    ctx->pc = 0x1619fcu;
    // NOP
    // 0x161a00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x161A00u;
    {
        const bool branch_taken_0x161a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a00) {
            ctx->pc = 0x161A18u;
            return;
        }
    }
    ctx->pc = 0x161A08u;
    // 0x161a08: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x161a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a0c: 0x0  nop
    ctx->pc = 0x161a0cu;
    // NOP
    // 0x161a10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x161a10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x161a14: 0xe6000200  swc1        $f0, 0x200($s0)
    ctx->pc = 0x161a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    ctx->pc = 0x161a18u;
}
