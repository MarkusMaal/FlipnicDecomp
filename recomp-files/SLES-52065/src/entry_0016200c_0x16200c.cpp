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

// Function: entry_0016200c
// Address: 0x16200c - 0x162068
void entry_0016200c_0x16200c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016200c_0x16200c");
#endif

    switch (ctx->pc) {
        case 0x162040u: goto label_162040;
        default: break;
    }

    ctx->pc = 0x16200cu;

    // 0x16200c: 0xc6220334  lwc1        $f2, 0x334($s1)
    ctx->pc = 0x16200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162010: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162014: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162018: 0x26540010  addiu       $s4, $s2, 0x10
    ctx->pc = 0x162018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x16201c: 0x3c107000  lui         $s0, 0x7000
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    // 0x162020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x162020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162024: 0xc62002e8  lwc1        $f0, 0x2E8($s1)
    ctx->pc = 0x162024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16202c: 0x261500b0  addiu       $s5, $s0, 0xB0
    ctx->pc = 0x16202cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x162030: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x162034: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x162034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x162038: 0xc055c70  jal         func_1571C0
    ctx->pc = 0x162038u;
    SET_GPR_U32(ctx, 31, 0x162040u);
    ctx->pc = 0x16203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162038u;
    // 0x16203c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1571C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571C0u, 0x162038u, 0x162040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162040u;
label_162040:
    // 0x162040: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x162044: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x162044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x162048: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x162048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16204c: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x16204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162050: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x162050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162054: 0x0  nop
    ctx->pc = 0x162054u;
    // NOP
    // 0x162058: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x162058u;
    {
        const bool branch_taken_0x162058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162058) {
            ctx->pc = 0x162068u;
            return;
        }
    }
    ctx->pc = 0x162060u;
    // 0x162060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162060u;
    {
        const bool branch_taken_0x162060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162060u;
        // 0x162064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162060) {
            ctx->pc = 0x16206Cu;
            return;
        }
    }
    ctx->pc = 0x162068u;
}
