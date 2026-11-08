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

// Function: FUN_00106560
// Address: 0x106560 - 0x1065c0
void FUN_00106560_0x106560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106560_0x106560");
#endif

    switch (ctx->pc) {
        case 0x106590u: goto label_106590;
        case 0x1065a8u: goto label_1065a8;
        default: break;
    }

    ctx->pc = 0x106560u;

    // 0x106560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10656c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106574: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x106574u;
    {
        const bool branch_taken_0x106574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106574u;
        // 0x106578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106574) {
            ctx->pc = 0x1065A8u;
            goto label_1065a8;
        }
    }
    ctx->pc = 0x10657Cu;
    // 0x10657c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106584: 0x24427990  addiu       $v0, $v0, 0x7990
    ctx->pc = 0x106584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31120));
    // 0x106588: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x106588u;
    SET_GPR_U32(ctx, 31, 0x106590u);
    ctx->pc = 0x10658Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106588u;
    // 0x10658c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106EC0u, 0x106588u, 0x106590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106590u;
label_106590:
    // 0x106590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x106594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106598: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106598u;
    {
        const bool branch_taken_0x106598 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106598u;
        // 0x10659c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106598) {
            ctx->pc = 0x1065ACu;
            goto label_1065ac;
        }
    }
    ctx->pc = 0x1065A0u;
    // 0x1065a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1065A0u;
    SET_GPR_U32(ctx, 31, 0x1065A8u);
    ctx->pc = 0x1065A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065A0u;
    // 0x1065a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1065A0u, 0x1065A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065A8u;
label_1065a8:
    // 0x1065a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1065a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1065ac:
    // 0x1065ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1065acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1065b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1065b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1065b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1065b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1065b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1065B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1065BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065B8u;
        // 0x1065bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1065B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1065C0u;
}
