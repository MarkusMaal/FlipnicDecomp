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

// Function: FUN_0012a900
// Address: 0x12a900 - 0x12a98c
void FUN_0012a900_0x12a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a900_0x12a900");
#endif

    ctx->pc = 0x12a900u;

    // 0x12a900: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x12a900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12a904: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a908: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A908u;
    {
        const bool branch_taken_0x12a908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A908u;
        // 0x12a90c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a908) {
            ctx->pc = 0x12A920u;
            goto label_12a920;
        }
    }
    ctx->pc = 0x12A910u;
    // 0x12a910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12a910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a914: 0x14a3001b  bne         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12A914u;
    {
        const bool branch_taken_0x12a914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x12a914) {
            ctx->pc = 0x12A984u;
            goto label_12a984;
        }
    }
    ctx->pc = 0x12A91Cu;
    // 0x12a91c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12a920:
    // 0x12a920: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x12a920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x12a924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a928: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x12a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a92c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x12a92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a930: 0x0  nop
    ctx->pc = 0x12a930u;
    // NOP
    // 0x12a934: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12A934u;
    {
        const bool branch_taken_0x12a934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A934u;
        // 0x12a938: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a934) {
            ctx->pc = 0x12A944u;
            goto label_12a944;
        }
    }
    ctx->pc = 0x12A93Cu;
    // 0x12a93c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x12a93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x12a940: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x12a940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_12a944:
    // 0x12a944: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a948: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12a948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12a94c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a950: 0x0  nop
    ctx->pc = 0x12a950u;
    // NOP
    // 0x12a954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12a954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12a958: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12a95c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a95cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a960: 0x0  nop
    ctx->pc = 0x12a960u;
    // NOP
    // 0x12a964: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x12a964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x12a968: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x12a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x12a96c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x12a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x12a970: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x12a970u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12a974: 0x0  nop
    ctx->pc = 0x12a974u;
    // NOP
    // 0x12a978: 0x0  nop
    ctx->pc = 0x12a978u;
    // NOP
    // 0x12a97c: 0x1810  mfhi        $v1
    ctx->pc = 0x12a97cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12a980: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x12a980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_12a984:
    // 0x12a984: 0x3e00008  jr          $ra
    ctx->pc = 0x12A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A98Cu;
}
