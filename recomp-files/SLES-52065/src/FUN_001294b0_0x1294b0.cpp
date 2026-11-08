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

// Function: FUN_001294b0
// Address: 0x1294b0 - 0x129510
void FUN_001294b0_0x1294b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001294b0_0x1294b0");
#endif

    switch (ctx->pc) {
        case 0x1294e0u: goto label_1294e0;
        case 0x1294f8u: goto label_1294f8;
        default: break;
    }

    ctx->pc = 0x1294b0u;

    // 0x1294b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1294b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1294b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1294b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1294b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1294b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1294bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1294bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1294c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1294c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294c4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1294C4u;
    {
        const bool branch_taken_0x1294c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1294C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294C4u;
        // 0x1294c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294c4) {
            ctx->pc = 0x1294F8u;
            goto label_1294f8;
        }
    }
    ctx->pc = 0x1294CCu;
    // 0x1294cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1294d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1294d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294d4: 0x24428a60  addiu       $v0, $v0, -0x75A0
    ctx->pc = 0x1294d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937184));
    // 0x1294d8: 0xc0497d8  jal         func_125F60
    ctx->pc = 0x1294D8u;
    SET_GPR_U32(ctx, 31, 0x1294E0u);
    ctx->pc = 0x1294DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294D8u;
    // 0x1294dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125F60u, 0x1294D8u, 0x1294E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294E0u;
label_1294e0:
    // 0x1294e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1294e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1294e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1294e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1294e8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1294E8u;
    {
        const bool branch_taken_0x1294e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1294ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294E8u;
        // 0x1294ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294e8) {
            ctx->pc = 0x1294FCu;
            goto label_1294fc;
        }
    }
    ctx->pc = 0x1294F0u;
    // 0x1294f0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1294F0u;
    SET_GPR_U32(ctx, 31, 0x1294F8u);
    ctx->pc = 0x1294F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294F0u;
    // 0x1294f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1294F0u, 0x1294F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294F8u;
label_1294f8:
    // 0x1294f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1294f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1294fc:
    // 0x1294fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1294fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129508: 0x3e00008  jr          $ra
    ctx->pc = 0x129508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129508u;
        // 0x12950c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129510u;
}
