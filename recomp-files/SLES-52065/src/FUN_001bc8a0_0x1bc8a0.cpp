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

// Function: FUN_001bc8a0
// Address: 0x1bc8a0 - 0x1bc930
void FUN_001bc8a0_0x1bc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bc8a0_0x1bc8a0");
#endif

    switch (ctx->pc) {
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc918u: goto label_1bc918;
        default: break;
    }

    ctx->pc = 0x1bc8a0u;

    // 0x1bc8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bc8a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bc8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8b4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BC8B4u;
    {
        const bool branch_taken_0x1bc8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8B4u;
        // 0x1bc8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8b4) {
            ctx->pc = 0x1BC918u;
            goto label_1bc918;
        }
    }
    ctx->pc = 0x1BC8BCu;
    // 0x1bc8bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1bc8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1bc8c0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1bc8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1bc8c4: 0x2442ba10  addiu       $v0, $v0, -0x45F0
    ctx->pc = 0x1bc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
    // 0x1bc8c8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC8C8u;
    {
        const bool branch_taken_0x1bc8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C8u;
        // 0x1bc8cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8c8) {
            ctx->pc = 0x1BC8F4u;
            goto label_1bc8f4;
        }
    }
    ctx->pc = 0x1BC8D0u;
    // 0x1bc8d0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC8D0u;
    {
        const bool branch_taken_0x1bc8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8d0) {
            ctx->pc = 0x1BC8F4u;
            goto label_1bc8f4;
        }
    }
    ctx->pc = 0x1BC8D8u;
    // 0x1bc8d8: 0xc06f494  jal         func_1BD250
    ctx->pc = 0x1BC8D8u;
    SET_GPR_U32(ctx, 31, 0x1BC8E0u);
    ctx->pc = 0x1BD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD250u, 0x1BC8D8u, 0x1BC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8E0u;
label_1bc8e0:
    // 0x1bc8e0: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x1bc8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x1bc8e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC8E4u;
    {
        const bool branch_taken_0x1bc8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8e4) {
            ctx->pc = 0x1BC8F4u;
            goto label_1bc8f4;
        }
    }
    ctx->pc = 0x1BC8ECu;
    // 0x1bc8ec: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1BC8ECu;
    SET_GPR_U32(ctx, 31, 0x1BC8F4u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1BC8ECu, 0x1BC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8F4u;
label_1bc8f4:
    // 0x1bc8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8f8: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1BC8F8u;
    SET_GPR_U32(ctx, 31, 0x1BC900u);
    ctx->pc = 0x1BC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8F8u;
    // 0x1bc8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1BC8F8u, 0x1BC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC900u;
label_1bc900:
    // 0x1bc900: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1bc900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1bc904: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bc904u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bc908: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC908u;
    {
        const bool branch_taken_0x1bc908 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC908u;
        // 0x1bc90c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc908) {
            ctx->pc = 0x1BC91Cu;
            goto label_1bc91c;
        }
    }
    ctx->pc = 0x1BC910u;
    // 0x1bc910: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BC910u;
    SET_GPR_U32(ctx, 31, 0x1BC918u);
    ctx->pc = 0x1BC914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC910u;
    // 0x1bc914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BC910u, 0x1BC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC918u;
label_1bc918:
    // 0x1bc918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bc918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc91c:
    // 0x1bc91c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc928: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC928u;
        // 0x1bc92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC930u;
}
