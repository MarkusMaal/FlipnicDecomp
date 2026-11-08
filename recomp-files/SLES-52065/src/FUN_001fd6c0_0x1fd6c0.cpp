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

// Function: FUN_001fd6c0
// Address: 0x1fd6c0 - 0x1fd74c
void FUN_001fd6c0_0x1fd6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fd6c0_0x1fd6c0");
#endif

    switch (ctx->pc) {
        case 0x1fd700u: goto label_1fd700;
        case 0x1fd714u: goto label_1fd714;
        case 0x1fd728u: goto label_1fd728;
        default: break;
    }

    ctx->pc = 0x1fd6c0u;

    // 0x1fd6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd6c4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fd6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd6cc: 0x2442d6a0  addiu       $v0, $v0, -0x2960
    ctx->pc = 0x1fd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956704));
    // 0x1fd6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fd6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fd6d8: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x1fd6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x1fd6dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fd6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fd6e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd6e4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1fd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1fd6e8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x1fd6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x1fd6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fd6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fd6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd6f8: 0xc07f53e  jal         func_1FD4F8
    ctx->pc = 0x1FD6F8u;
    SET_GPR_U32(ctx, 31, 0x1FD700u);
    ctx->pc = 0x1FD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6F8u;
    // 0x1fd6fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4F8u, 0x1FD6F8u, 0x1FD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD700u;
label_1fd700:
    // 0x1fd700: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x1fd700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x1fd704: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fd704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd708: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1fd708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fd70c: 0xc07f53e  jal         func_1FD4F8
    ctx->pc = 0x1FD70Cu;
    SET_GPR_U32(ctx, 31, 0x1FD714u);
    ctx->pc = 0x1FD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD70Cu;
    // 0x1fd710: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4F8u, 0x1FD70Cu, 0x1FD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD714u;
label_1fd714:
    // 0x1fd714: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x1fd714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x1fd718: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fd718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd71c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1fd71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd720: 0xc07f53e  jal         func_1FD4F8
    ctx->pc = 0x1FD720u;
    SET_GPR_U32(ctx, 31, 0x1FD728u);
    ctx->pc = 0x1FD724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD720u;
    // 0x1fd724: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4F8u, 0x1FD720u, 0x1FD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD728u;
label_1fd728:
    // 0x1fd728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd72c: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x1fd72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x1fd730: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x1fd730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x1fd734: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x1fd734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x1fd738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fd738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd73c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fd73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd744: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD744u;
        // 0x1fd748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD74Cu;
}
