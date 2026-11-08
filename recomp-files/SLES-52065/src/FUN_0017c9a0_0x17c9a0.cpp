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

// Function: FUN_0017c9a0
// Address: 0x17c9a0 - 0x17ca10
void FUN_0017c9a0_0x17c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c9a0_0x17c9a0");
#endif

    switch (ctx->pc) {
        case 0x17c9e0u: goto label_17c9e0;
        case 0x17c9f8u: goto label_17c9f8;
        default: break;
    }

    ctx->pc = 0x17c9a0u;

    // 0x17c9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17c9a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c9b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17C9B4u;
    {
        const bool branch_taken_0x17c9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9B4u;
        // 0x17c9b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9b4) {
            ctx->pc = 0x17C9F8u;
            goto label_17c9f8;
        }
    }
    ctx->pc = 0x17C9BCu;
    // 0x17c9bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17c9c0: 0x2442afa0  addiu       $v0, $v0, -0x5060
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946720));
    // 0x17c9c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C9C4u;
    {
        const bool branch_taken_0x17c9c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9C4u;
        // 0x17c9c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9c4) {
            ctx->pc = 0x17C9E0u;
            goto label_17c9e0;
        }
    }
    ctx->pc = 0x17C9CCu;
    // 0x17c9cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17c9d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c9d4: 0x2442af40  addiu       $v0, $v0, -0x50C0
    ctx->pc = 0x17c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946624));
    // 0x17c9d8: 0xc04187c  jal         func_1061F0
    ctx->pc = 0x17C9D8u;
    SET_GPR_U32(ctx, 31, 0x17C9E0u);
    ctx->pc = 0x17C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9D8u;
    // 0x17c9dc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x17C9D8u, 0x17C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9E0u;
label_17c9e0:
    // 0x17c9e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17c9e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17c9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17c9e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C9E8u;
    {
        const bool branch_taken_0x17c9e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E8u;
        // 0x17c9ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9e8) {
            ctx->pc = 0x17C9FCu;
            goto label_17c9fc;
        }
    }
    ctx->pc = 0x17C9F0u;
    // 0x17c9f0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17C9F0u;
    SET_GPR_U32(ctx, 31, 0x17C9F8u);
    ctx->pc = 0x17C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C9F0u;
    // 0x17c9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17C9F0u, 0x17C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C9F8u;
label_17c9f8:
    // 0x17c9f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17c9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c9fc:
    // 0x17c9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ca00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ca00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ca04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ca04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca08: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA08u;
        // 0x17ca0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CA10u;
}
