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

// Function: entry_0015e8f8
// Address: 0x15e8f8 - 0x15e940
void entry_0015e8f8_0x15e8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e8f8_0x15e8f8");
#endif

    ctx->pc = 0x15e8f8u;

    // 0x15e8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15e8fc: 0x1a00ffcd  blez        $s0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x15E8FCu;
    {
        const bool branch_taken_0x15e8fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8FCu;
        // 0x15e900: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8fc) {
            ctx->pc = 0x15E834u;
            return;
        }
    }
    ctx->pc = 0x15E904u;
    // 0x15e904: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15e908: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15E908u;
    {
        const bool branch_taken_0x15e908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e908) {
            ctx->pc = 0x15E940u;
            return;
        }
    }
    ctx->pc = 0x15E910u;
    // 0x15e910: 0xc6cc0324  lwc1        $f12, 0x324($s6)
    ctx->pc = 0x15e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e914: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x15e918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15e918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e91c: 0x0  nop
    ctx->pc = 0x15e91cu;
    // NOP
    // 0x15e920: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x15e920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e924: 0x0  nop
    ctx->pc = 0x15e924u;
    // NOP
    // 0x15e928: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x15E928u;
    {
        const bool branch_taken_0x15e928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e928) {
            ctx->pc = 0x15E940u;
            return;
        }
    }
    ctx->pc = 0x15E930u;
    // 0x15e930: 0x8ec4037c  lw          $a0, 0x37C($s6)
    ctx->pc = 0x15e930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 892)));
    // 0x15e934: 0xc6cd0200  lwc1        $f13, 0x200($s6)
    ctx->pc = 0x15e934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15e938: 0xc054b14  jal         func_152C50
    ctx->pc = 0x15E938u;
    SET_GPR_U32(ctx, 31, 0x15E940u);
    ctx->pc = 0x15E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E938u;
    // 0x15e93c: 0x26c50040  addiu       $a1, $s6, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152C50u, 0x15E938u, 0x15E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E940u;
}
