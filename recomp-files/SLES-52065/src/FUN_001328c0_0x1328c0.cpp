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

// Function: FUN_001328c0
// Address: 0x1328c0 - 0x13294c
void FUN_001328c0_0x1328c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001328c0_0x1328c0");
#endif

    switch (ctx->pc) {
        case 0x1328f4u: goto label_1328f4;
        case 0x132900u: goto label_132900;
        case 0x13291cu: goto label_13291c;
        case 0x132934u: goto label_132934;
        default: break;
    }

    ctx->pc = 0x1328c0u;

    // 0x1328c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1328c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1328c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1328c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1328c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1328c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1328cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1328ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1328d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1328d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328d4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1328D4u;
    {
        const bool branch_taken_0x1328d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1328D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328D4u;
        // 0x1328d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328d4) {
            ctx->pc = 0x132934u;
            goto label_132934;
        }
    }
    ctx->pc = 0x1328DCu;
    // 0x1328dc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1328DCu;
    {
        const bool branch_taken_0x1328dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1328E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328DCu;
        // 0x1328e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328dc) {
            ctx->pc = 0x132920u;
            goto label_132920;
        }
    }
    ctx->pc = 0x1328E4u;
    // 0x1328e4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1328E4u;
    {
        const bool branch_taken_0x1328e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1328E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328E4u;
        // 0x1328e8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328e4) {
            ctx->pc = 0x13291Cu;
            goto label_13291c;
        }
    }
    ctx->pc = 0x1328ECu;
    // 0x1328ec: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x1328ECu;
    SET_GPR_U32(ctx, 31, 0x1328F4u);
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1328ECu, 0x1328F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328F4u;
label_1328f4:
    // 0x1328f4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1328f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1328f8: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x1328F8u;
    SET_GPR_U32(ctx, 31, 0x132900u);
    ctx->pc = 0x1328FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328F8u;
    // 0x1328fc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1328F8u, 0x132900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132900u;
label_132900:
    // 0x132900: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x132900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132904: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x132904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x132908: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13290c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x132910: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x132910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x132914: 0xc04c8f0  jal         func_1323C0
    ctx->pc = 0x132914u;
    SET_GPR_U32(ctx, 31, 0x13291Cu);
    ctx->pc = 0x132918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132914u;
    // 0x132918: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x132914u, 0x13291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13291Cu;
label_13291c:
    // 0x13291c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x13291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_132920:
    // 0x132920: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x132920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x132924: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132924u;
    {
        const bool branch_taken_0x132924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x132928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132924u;
        // 0x132928: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132924) {
            ctx->pc = 0x132938u;
            goto label_132938;
        }
    }
    ctx->pc = 0x13292Cu;
    // 0x13292c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13292Cu;
    SET_GPR_U32(ctx, 31, 0x132934u);
    ctx->pc = 0x132930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13292Cu;
    // 0x132930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13292Cu, 0x132934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132934u;
label_132934:
    // 0x132934: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x132934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132938:
    // 0x132938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13293c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13293cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x132940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132944: 0x3e00008  jr          $ra
    ctx->pc = 0x132944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132944u;
        // 0x132948: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13294Cu;
}
