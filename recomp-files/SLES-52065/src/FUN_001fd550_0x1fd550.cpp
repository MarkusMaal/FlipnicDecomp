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

// Function: FUN_001fd550
// Address: 0x1fd550 - 0x1fd5c0
void FUN_001fd550_0x1fd550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd550_0x1fd550");
#endif

    switch (ctx->pc) {
        case 0x1fd578u: goto label_1fd578;
        case 0x1fd5a4u: goto label_1fd5a4;
        default: break;
    }

    ctx->pc = 0x1fd550u;

    // 0x1fd550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fd550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fd554: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1fd558: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fd558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fd55c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fd55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fd560: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd564: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x1fd564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1fd568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd56c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fd56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fd570: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FD570u;
    SET_GPR_U32(ctx, 31, 0x1FD578u);
    ctx->pc = 0x1FD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD570u;
    // 0x1fd574: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FD570u, 0x1FD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD578u;
label_1fd578:
    // 0x1fd578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd57c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD57Cu;
    {
        const bool branch_taken_0x1fd57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD57Cu;
        // 0x1fd580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd57c) {
            ctx->pc = 0x1FD5A8u;
            goto label_1fd5a8;
        }
    }
    ctx->pc = 0x1FD584u;
    // 0x1fd584: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1fd584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1fd588: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1fd588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1fd58c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1fd58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1fd590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd594: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fd594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd598: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1fd598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1fd59c: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1FD59Cu;
    SET_GPR_U32(ctx, 31, 0x1FD5A4u);
    ctx->pc = 0x1FD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD59Cu;
    // 0x1fd5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1FD59Cu, 0x1FD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5A4u;
label_1fd5a4:
    // 0x1fd5a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5a8:
    // 0x1fd5a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fd5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fd5ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fd5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd5b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fd5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5B8u;
        // 0x1fd5bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD5C0u;
}
