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

// Function: FUN_001e2250
// Address: 0x1e2250 - 0x1e22b0
void FUN_001e2250_0x1e2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2250_0x1e2250");
#endif

    switch (ctx->pc) {
        case 0x1e2280u: goto label_1e2280;
        case 0x1e2298u: goto label_1e2298;
        default: break;
    }

    ctx->pc = 0x1e2250u;

    // 0x1e2250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e225c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2264: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E2264u;
    {
        const bool branch_taken_0x1e2264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2264u;
        // 0x1e2268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2264) {
            ctx->pc = 0x1E2298u;
            goto label_1e2298;
        }
    }
    ctx->pc = 0x1E226Cu;
    // 0x1e226c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e2270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2274: 0x2442c0e8  addiu       $v0, $v0, -0x3F18
    ctx->pc = 0x1e2274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951144));
    // 0x1e2278: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E2278u;
    SET_GPR_U32(ctx, 31, 0x1E2280u);
    ctx->pc = 0x1E227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2278u;
    // 0x1e227c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E2278u, 0x1E2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2280u;
label_1e2280:
    // 0x1e2280: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e2280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e2284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2288: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2288u;
    {
        const bool branch_taken_0x1e2288 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2288u;
        // 0x1e228c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2288) {
            ctx->pc = 0x1E229Cu;
            goto label_1e229c;
        }
    }
    ctx->pc = 0x1E2290u;
    // 0x1e2290: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E2290u;
    SET_GPR_U32(ctx, 31, 0x1E2298u);
    ctx->pc = 0x1E2294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2290u;
    // 0x1e2294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E2290u, 0x1E2298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2298u;
label_1e2298:
    // 0x1e2298: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e229c:
    // 0x1e229c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e22a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e22a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e22a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e22a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e22a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E22A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22A8u;
        // 0x1e22ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E22A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E22B0u;
}
