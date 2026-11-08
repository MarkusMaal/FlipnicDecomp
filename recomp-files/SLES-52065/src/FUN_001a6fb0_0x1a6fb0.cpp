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

// Function: FUN_001a6fb0
// Address: 0x1a6fb0 - 0x1a7020
void FUN_001a6fb0_0x1a6fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6fb0_0x1a6fb0");
#endif

    ctx->pc = 0x1a6fb0u;

    // 0x1a6fb0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1a6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1a6fb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6fb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6fbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a6fc4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a6fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6fc8: 0x8069bf4  j           func_1A6FD0
    ctx->pc = 0x1A6FC8u;
    ctx->pc = 0x1A6FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FC8u;
    // 0x1a6fcc: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FD0u;
    goto label_1a6fd0;
    ctx->pc = 0x1A6FD0u;
label_1a6fd0:
    // 0x1a6fd0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6FD0u;
    {
        const bool branch_taken_0x1a6fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FD0u;
        // 0x1a6fd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fd0) {
            ctx->pc = 0x1A700Cu;
            goto label_1a700c;
        }
    }
    ctx->pc = 0x1A6FD8u;
    // 0x1a6fd8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6FD8u;
    {
        const bool branch_taken_0x1a6fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FD8u;
        // 0x1a6fdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fd8) {
            ctx->pc = 0x1A7000u;
            goto label_1a7000;
        }
    }
    ctx->pc = 0x1A6FE0u;
    // 0x1a6fe0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a6fe4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a6fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6fe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a6fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a6fec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1a6fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1a6ff0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a6ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a6ff4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a6ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a6ff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6FF8u;
    {
        const bool branch_taken_0x1a6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF8u;
        // 0x1a6ffc: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ff8) {
            ctx->pc = 0x1A7014u;
            goto label_1a7014;
        }
    }
    ctx->pc = 0x1A7000u;
label_1a7000:
    // 0x1a7000: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a7000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a7004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7004u;
    {
        const bool branch_taken_0x1a7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7004u;
        // 0x1a7008: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7004) {
            ctx->pc = 0x1A7014u;
            goto label_1a7014;
        }
    }
    ctx->pc = 0x1A700Cu;
label_1a700c:
    // 0x1a700c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a700cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a7010: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a7010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1a7014:
    // 0x1a7014: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a7014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7018: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7018u;
        // 0x1a701c: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7020u;
}
