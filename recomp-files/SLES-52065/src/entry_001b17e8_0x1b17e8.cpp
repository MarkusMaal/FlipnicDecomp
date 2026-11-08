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

// Function: entry_001b17e8
// Address: 0x1b17e8 - 0x1b1864
void entry_001b17e8_0x1b17e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b17e8_0x1b17e8");
#endif

    switch (ctx->pc) {
        case 0x1b1838u: goto label_1b1838;
        default: break;
    }

    ctx->pc = 0x1b17e8u;

    // 0x1b17e8: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x1b17e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b17ec: 0x1500ffd5  bnez        $t0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1B17ECu;
    {
        const bool branch_taken_0x1b17ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17ECu;
        // 0x1b17f0: 0x2875021  addu        $t2, $s4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17ec) {
            ctx->pc = 0x1B1744u;
            return;
        }
    }
    ctx->pc = 0x1B17F4u;
    // 0x1b17f4: 0x90880001  lbu         $t0, 0x1($a0)
    ctx->pc = 0x1b17f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b17f8: 0x1500ffd2  bnez        $t0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1B17F8u;
    {
        const bool branch_taken_0x1b17f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b17f8) {
            ctx->pc = 0x1B1744u;
            return;
        }
    }
    ctx->pc = 0x1B1800u;
    // 0x1b1800: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1804: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x1b1804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x1b1808: 0x8faa038c  lw          $t2, 0x38C($sp)
    ctx->pc = 0x1b1808u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b180c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1810: 0x8fab0388  lw          $t3, 0x388($sp)
    ctx->pc = 0x1b1810u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x1b1814: 0x26860018  addiu       $a2, $s4, 0x18
    ctx->pc = 0x1b1814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x1b1818: 0x26870058  addiu       $a3, $s4, 0x58
    ctx->pc = 0x1b1818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
    // 0x1b181c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b181cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1820: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1b1820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1824: 0xafa20400  sw          $v0, 0x400($sp)
    ctx->pc = 0x1b1824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
    // 0x1b1828: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b182c: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x1b182cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x1b1830: 0xc06becc  jal         func_1AFB30
    ctx->pc = 0x1B1830u;
    SET_GPR_U32(ctx, 31, 0x1B1838u);
    ctx->pc = 0x1B1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1830u;
    // 0x1b1834: 0xffb60000  sd          $s6, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB30u, 0x1B1830u, 0x1B1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1838u;
label_1b1838:
    // 0x1b1838: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1b1838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b183c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1b183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1b1840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1844: 0x0  nop
    ctx->pc = 0x1b1844u;
    // NOP
    // 0x1b1848: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b1848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b184c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b184cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b1850: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1b1850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1b1854: 0x0  nop
    ctx->pc = 0x1b1854u;
    // NOP
    // 0x1b1858: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1858u;
    {
        const bool branch_taken_0x1b1858 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1858) {
            ctx->pc = 0x1B1864u;
            return;
        }
    }
    ctx->pc = 0x1B1860u;
    // 0x1b1860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1b1864u;
}
