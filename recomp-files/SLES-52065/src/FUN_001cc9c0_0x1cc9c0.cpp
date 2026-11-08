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

// Function: FUN_001cc9c0
// Address: 0x1cc9c0 - 0x1cca20
void FUN_001cc9c0_0x1cc9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc9c0_0x1cc9c0");
#endif

    switch (ctx->pc) {
        case 0x1cc9f0u: goto label_1cc9f0;
        case 0x1cca08u: goto label_1cca08;
        default: break;
    }

    ctx->pc = 0x1cc9c0u;

    // 0x1cc9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CC9D4u;
    {
        const bool branch_taken_0x1cc9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9D4u;
        // 0x1cc9d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9d4) {
            ctx->pc = 0x1CCA08u;
            goto label_1cca08;
        }
    }
    ctx->pc = 0x1CC9DCu;
    // 0x1cc9dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1cc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1cc9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9e4: 0x2442bdd0  addiu       $v0, $v0, -0x4230
    ctx->pc = 0x1cc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950352));
    // 0x1cc9e8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1CC9E8u;
    SET_GPR_U32(ctx, 31, 0x1CC9F0u);
    ctx->pc = 0x1CC9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC9E8u;
    // 0x1cc9ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CC9E8u, 0x1CC9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC9F0u;
label_1cc9f0:
    // 0x1cc9f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1cc9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1cc9f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cc9f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC9F8u;
    {
        const bool branch_taken_0x1cc9f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC9F8u;
        // 0x1cc9fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9f8) {
            ctx->pc = 0x1CCA0Cu;
            goto label_1cca0c;
        }
    }
    ctx->pc = 0x1CCA00u;
    // 0x1cca00: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1CCA00u;
    SET_GPR_U32(ctx, 31, 0x1CCA08u);
    ctx->pc = 0x1CCA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA00u;
    // 0x1cca04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CCA00u, 0x1CCA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA08u;
label_1cca08:
    // 0x1cca08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cca08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cca0c:
    // 0x1cca0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cca10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cca10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cca14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cca14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cca18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA18u;
        // 0x1cca1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCA20u;
}
