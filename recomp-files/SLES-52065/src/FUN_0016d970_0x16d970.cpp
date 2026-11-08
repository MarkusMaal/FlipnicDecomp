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

// Function: FUN_0016d970
// Address: 0x16d970 - 0x16d9e0
void FUN_0016d970_0x16d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d970_0x16d970");
#endif

    switch (ctx->pc) {
        case 0x16d9b0u: goto label_16d9b0;
        case 0x16d9c8u: goto label_16d9c8;
        default: break;
    }

    ctx->pc = 0x16d970u;

    // 0x16d970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d984: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D984u;
    {
        const bool branch_taken_0x16d984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D984u;
        // 0x16d988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d984) {
            ctx->pc = 0x16D9C8u;
            goto label_16d9c8;
        }
    }
    ctx->pc = 0x16D98Cu;
    // 0x16d98c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16d990: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x16d994: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D994u;
    {
        const bool branch_taken_0x16d994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D994u;
        // 0x16d998: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d994) {
            ctx->pc = 0x16D9B0u;
            goto label_16d9b0;
        }
    }
    ctx->pc = 0x16D99Cu;
    // 0x16d99c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16d9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9a4: 0x2442a7f0  addiu       $v0, $v0, -0x5810
    ctx->pc = 0x16d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
    // 0x16d9a8: 0xc04166c  jal         func_1059B0
    ctx->pc = 0x16D9A8u;
    SET_GPR_U32(ctx, 31, 0x16D9B0u);
    ctx->pc = 0x16D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9A8u;
    // 0x16d9ac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1059B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1059B0u, 0x16D9A8u, 0x16D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9B0u;
label_16d9b0:
    // 0x16d9b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16d9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16d9b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16d9b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16d9b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D9B8u;
    {
        const bool branch_taken_0x16d9b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9B8u;
        // 0x16d9bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d9b8) {
            ctx->pc = 0x16D9CCu;
            goto label_16d9cc;
        }
    }
    ctx->pc = 0x16D9C0u;
    // 0x16d9c0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16D9C0u;
    SET_GPR_U32(ctx, 31, 0x16D9C8u);
    ctx->pc = 0x16D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9C0u;
    // 0x16d9c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16D9C0u, 0x16D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9C8u;
label_16d9c8:
    // 0x16d9c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16d9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d9cc:
    // 0x16d9cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d9d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16D9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9D8u;
        // 0x16d9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D9E0u;
}
