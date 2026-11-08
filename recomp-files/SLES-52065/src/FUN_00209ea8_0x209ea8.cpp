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

// Function: FUN_00209ea8
// Address: 0x209ea8 - 0x209f10
void FUN_00209ea8_0x209ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209ea8_0x209ea8");
#endif

    ctx->pc = 0x209ea8u;

    // 0x209ea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x209ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x209eac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209eb0: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x209eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x209eb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209eb8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x209eb8u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 7));
    // 0x209ebc: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x209ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x209ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x209ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ec8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x209ec8u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 2));
    // 0x209ecc: 0xf  sync
    ctx->pc = 0x209eccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x209ed0: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x209ed0u;
    SET_GPR_U32(ctx, 4, ctx->vu0_fbrst);
    // 0x209ed4: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x209ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x209ed8: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x209ed8u;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x209edc: 0x40f  sync.p
    ctx->pc = 0x209edcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x209ee0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x209ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x209ee4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x209ee8: 0x24a5de80  addiu       $a1, $a1, -0x2180
    ctx->pc = 0x209ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958720));
    // 0x209eec: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x209eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
    // 0x209ef0: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x209ef0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x21DE80u));
    // 0x209ef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x209ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x209ef8: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x209ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x209efc: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x209efcu;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 4));
    // 0x209f00: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x209f00u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x21DE90u));
    // 0x209f04: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x209f04u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 2));
    // 0x209f08: 0x3e00008  jr          $ra
    ctx->pc = 0x209F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F08u;
        // 0x209f0c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F10u;
}
