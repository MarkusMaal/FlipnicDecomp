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

// Function: FUN_001a2530
// Address: 0x1a2530 - 0x1a2590
void FUN_001a2530_0x1a2530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2530_0x1a2530");
#endif

    switch (ctx->pc) {
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2578u: goto label_1a2578;
        default: break;
    }

    ctx->pc = 0x1a2530u;

    // 0x1a2530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a253c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2540: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2544: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2544u;
    {
        const bool branch_taken_0x1a2544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2544u;
        // 0x1a2548: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2544) {
            ctx->pc = 0x1A2578u;
            goto label_1a2578;
        }
    }
    ctx->pc = 0x1A254Cu;
    // 0x1a254c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a2550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2554: 0x2442b370  addiu       $v0, $v0, -0x4C90
    ctx->pc = 0x1a2554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947696));
    // 0x1a2558: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A2558u;
    SET_GPR_U32(ctx, 31, 0x1A2560u);
    ctx->pc = 0x1A255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2558u;
    // 0x1a255c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A2558u, 0x1A2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a2560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a2564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2568: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2568u;
    {
        const bool branch_taken_0x1a2568 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2568u;
        // 0x1a256c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2568) {
            ctx->pc = 0x1A257Cu;
            goto label_1a257c;
        }
    }
    ctx->pc = 0x1A2570u;
    // 0x1a2570: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A2570u;
    SET_GPR_U32(ctx, 31, 0x1A2578u);
    ctx->pc = 0x1A2574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2570u;
    // 0x1a2574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A2570u, 0x1A2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2578u;
label_1a2578:
    // 0x1a2578: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a2578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a257c:
    // 0x1a257c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2588: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2588u;
        // 0x1a258c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2590u;
}
