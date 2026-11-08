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

// Function: entry_001d5e88
// Address: 0x1d5e88 - 0x1d5ed8
void entry_001d5e88_0x1d5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e88_0x1d5e88");
#endif

    switch (ctx->pc) {
        case 0x1d5eb8u: goto label_1d5eb8;
        default: break;
    }

    ctx->pc = 0x1d5e88u;

    // 0x1d5e88: 0x5a400031  blezl       $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D5E88u;
    {
        const bool branch_taken_0x1d5e88 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1d5e88) {
            ctx->pc = 0x1D5E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E88u;
            // 0x1d5e8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5F50u;
            return;
        }
    }
    ctx->pc = 0x1D5E90u;
    // 0x1d5e90: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e98: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5e9c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1d5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1d5ea0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1d5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1d5ea4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d5ea8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5eac: 0x8ca5055c  lw          $a1, 0x55C($a1)
    ctx->pc = 0x1d5eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1372)));
    // 0x1d5eb0: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5EB0u;
    SET_GPR_U32(ctx, 31, 0x1D5EB8u);
    ctx->pc = 0x1D5EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB0u;
    // 0x1d5eb4: 0x2412007f  addiu       $s2, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5EB0u, 0x1D5EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB8u;
label_1d5eb8:
    // 0x1d5eb8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5ebc: 0x6000019  bltz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5EBCu;
    {
        const bool branch_taken_0x1d5ebc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EBCu;
        // 0x1d5ec0: 0x8fa500c0  lw          $a1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ebc) {
            ctx->pc = 0x1D5F24u;
            return;
        }
    }
    ctx->pc = 0x1D5EC4u;
    // 0x1d5ec4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d5ec8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d5ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d5ecc: 0x5d4021  addu        $t0, $v0, $sp
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5ed0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x1d5ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d5ed4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d5ed8u;
}
