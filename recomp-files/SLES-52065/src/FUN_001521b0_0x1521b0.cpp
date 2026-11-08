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

// Function: FUN_001521b0
// Address: 0x1521b0 - 0x152214
void FUN_001521b0_0x1521b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001521b0_0x1521b0");
#endif

    switch (ctx->pc) {
        case 0x1521c4u: goto label_1521c4;
        default: break;
    }

    ctx->pc = 0x1521b0u;

    // 0x1521b0: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x1521b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1521b4: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x1521b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1521b8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1521B8u;
    {
        const bool branch_taken_0x1521b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521B8u;
        // 0x1521bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521b8) {
            ctx->pc = 0x152204u;
            goto label_152204;
        }
    }
    ctx->pc = 0x1521C0u;
    // 0x1521c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1521c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1521c4:
    // 0x1521c4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1521c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1521c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1521c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1521cc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1521ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1521d0: 0x0  nop
    ctx->pc = 0x1521d0u;
    // NOP
    // 0x1521d4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1521D4u;
    {
        const bool branch_taken_0x1521d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1521D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521D4u;
        // 0x1521d8: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521d4) {
            ctx->pc = 0x1521F4u;
            goto label_1521f4;
        }
    }
    ctx->pc = 0x1521DCu;
    // 0x1521dc: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1521dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1521e0: 0x0  nop
    ctx->pc = 0x1521e0u;
    // NOP
    // 0x1521e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1521E4u;
    {
        const bool branch_taken_0x1521e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1521e4) {
            ctx->pc = 0x1521F4u;
            goto label_1521f4;
        }
    }
    ctx->pc = 0x1521ECu;
    // 0x1521ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1521ECu;
    {
        const bool branch_taken_0x1521ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521ec) {
            ctx->pc = 0x15220Cu;
            goto label_15220c;
        }
    }
    ctx->pc = 0x1521F4u;
label_1521f4:
    // 0x1521f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1521f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1521f8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1521f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1521fc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1521FCu;
    {
        const bool branch_taken_0x1521fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521FCu;
        // 0x152200: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521fc) {
            ctx->pc = 0x1521C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1521c4;
        }
    }
    ctx->pc = 0x152204u;
label_152204:
    // 0x152204: 0x0  nop
    ctx->pc = 0x152204u;
    // NOP
    // 0x152208: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x152208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_15220c:
    // 0x15220c: 0x3e00008  jr          $ra
    ctx->pc = 0x15220Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15220Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152214u;
}
