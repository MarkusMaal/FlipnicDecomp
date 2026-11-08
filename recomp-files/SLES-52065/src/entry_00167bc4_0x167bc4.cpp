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

// Function: entry_00167bc4
// Address: 0x167bc4 - 0x167c24
void entry_00167bc4_0x167bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167bc4_0x167bc4");
#endif

    switch (ctx->pc) {
        case 0x167be0u: goto label_167be0;
        default: break;
    }

    ctx->pc = 0x167bc4u;

    // 0x167bc4: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x167bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x167bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167bcc: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x167bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x167bd0: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x167bd4: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x167bd8: 0xc055038  jal         func_1540E0
    ctx->pc = 0x167BD8u;
    SET_GPR_U32(ctx, 31, 0x167BE0u);
    ctx->pc = 0x167BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BD8u;
    // 0x167bdc: 0x26070290  addiu       $a3, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1540E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540E0u, 0x167BD8u, 0x167BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BE0u;
label_167be0:
    // 0x167be0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167be4: 0x0  nop
    ctx->pc = 0x167be4u;
    // NOP
    // 0x167be8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167bec: 0x0  nop
    ctx->pc = 0x167becu;
    // NOP
    // 0x167bf0: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x167BF0u;
    {
        const bool branch_taken_0x167bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BF0u;
        // 0x167bf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bf0) {
            ctx->pc = 0x167D5Cu;
            return;
        }
    }
    ctx->pc = 0x167BF8u;
    // 0x167bf8: 0xc7818024  lwc1        $f1, -0x7FDC($gp)
    ctx->pc = 0x167bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167bfc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x167c00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x167c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x167c04: 0x0  nop
    ctx->pc = 0x167c04u;
    // NOP
    // 0x167c08: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x167c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x167c0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167c0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x167c10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x167c10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167c14: 0x0  nop
    ctx->pc = 0x167c14u;
    // NOP
    // 0x167c18: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x167C18u;
    {
        const bool branch_taken_0x167c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167c18) {
            ctx->pc = 0x167C24u;
            return;
        }
    }
    ctx->pc = 0x167C20u;
    // 0x167c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x167c24u;
}
