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

// Function: FUN_001e2320
// Address: 0x1e2320 - 0x1e2380
void FUN_001e2320_0x1e2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2320_0x1e2320");
#endif

    switch (ctx->pc) {
        case 0x1e2350u: goto label_1e2350;
        case 0x1e2368u: goto label_1e2368;
        default: break;
    }

    ctx->pc = 0x1e2320u;

    // 0x1e2320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e232c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2334: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E2334u;
    {
        const bool branch_taken_0x1e2334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2334u;
        // 0x1e2338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2334) {
            ctx->pc = 0x1E2368u;
            goto label_1e2368;
        }
    }
    ctx->pc = 0x1E233Cu;
    // 0x1e233c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e2340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2344: 0x2442c1b8  addiu       $v0, $v0, -0x3E48
    ctx->pc = 0x1e2344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951352));
    // 0x1e2348: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E2348u;
    SET_GPR_U32(ctx, 31, 0x1E2350u);
    ctx->pc = 0x1E234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2348u;
    // 0x1e234c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E2348u, 0x1E2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2350u;
label_1e2350:
    // 0x1e2350: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e2350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e2354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2358: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2358u;
    {
        const bool branch_taken_0x1e2358 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2358u;
        // 0x1e235c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2358) {
            ctx->pc = 0x1E236Cu;
            goto label_1e236c;
        }
    }
    ctx->pc = 0x1E2360u;
    // 0x1e2360: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E2360u;
    SET_GPR_U32(ctx, 31, 0x1E2368u);
    ctx->pc = 0x1E2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2360u;
    // 0x1e2364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2360u, 0x1E2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2368u;
label_1e2368:
    // 0x1e2368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e236c:
    // 0x1e236c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e236cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2378: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2378u;
        // 0x1e237c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2380u;
}
