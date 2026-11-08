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

// Function: FUN_001691b0
// Address: 0x1691b0 - 0x169220
void FUN_001691b0_0x1691b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001691b0_0x1691b0");
#endif

    switch (ctx->pc) {
        case 0x1691f0u: goto label_1691f0;
        case 0x169208u: goto label_169208;
        default: break;
    }

    ctx->pc = 0x1691b0u;

    // 0x1691b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1691b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1691b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1691b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1691b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1691b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1691bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1691bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1691c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1691c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1691C4u;
    {
        const bool branch_taken_0x1691c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691C4u;
        // 0x1691c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691c4) {
            ctx->pc = 0x169208u;
            goto label_169208;
        }
    }
    ctx->pc = 0x1691CCu;
    // 0x1691cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1691ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1691d0: 0x2442a310  addiu       $v0, $v0, -0x5CF0
    ctx->pc = 0x1691d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943504));
    // 0x1691d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1691D4u;
    {
        const bool branch_taken_0x1691d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691D4u;
        // 0x1691d8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691d4) {
            ctx->pc = 0x1691F0u;
            goto label_1691f0;
        }
    }
    ctx->pc = 0x1691DCu;
    // 0x1691dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1691dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1691e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1691e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691e4: 0x2442a490  addiu       $v0, $v0, -0x5B70
    ctx->pc = 0x1691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943888));
    // 0x1691e8: 0xc041750  jal         func_105D40
    ctx->pc = 0x1691E8u;
    SET_GPR_U32(ctx, 31, 0x1691F0u);
    ctx->pc = 0x1691ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691E8u;
    // 0x1691ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D40u, 0x1691E8u, 0x1691F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691F0u;
label_1691f0:
    // 0x1691f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1691f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1691f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1691f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1691f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1691F8u;
    {
        const bool branch_taken_0x1691f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1691FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691F8u;
        // 0x1691fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f8) {
            ctx->pc = 0x16920Cu;
            goto label_16920c;
        }
    }
    ctx->pc = 0x169200u;
    // 0x169200: 0xc0401a4  jal         func_100690
    ctx->pc = 0x169200u;
    SET_GPR_U32(ctx, 31, 0x169208u);
    ctx->pc = 0x169204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169200u;
    // 0x169204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x169200u, 0x169208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169208u;
label_169208:
    // 0x169208: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x169208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16920c:
    // 0x16920c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169218: 0x3e00008  jr          $ra
    ctx->pc = 0x169218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169218u;
        // 0x16921c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169220u;
}
