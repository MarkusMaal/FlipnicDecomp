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

// Function: FUN_001be330
// Address: 0x1be330 - 0x1be3b8
void FUN_001be330_0x1be330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be330_0x1be330");
#endif

    switch (ctx->pc) {
        case 0x1be368u: goto label_1be368;
        case 0x1be37cu: goto label_1be37c;
        case 0x1be388u: goto label_1be388;
        case 0x1be3a0u: goto label_1be3a0;
        default: break;
    }

    ctx->pc = 0x1be330u;

    // 0x1be330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be344: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BE344u;
    {
        const bool branch_taken_0x1be344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE344u;
        // 0x1be348: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be344) {
            ctx->pc = 0x1BE3A0u;
            goto label_1be3a0;
        }
    }
    ctx->pc = 0x1BE34Cu;
    // 0x1be34c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1be34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1be350: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE350u;
    {
        const bool branch_taken_0x1be350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE350u;
        // 0x1be354: 0xac20f4e0  sw          $zero, -0xB20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be350) {
            ctx->pc = 0x1BE388u;
            goto label_1be388;
        }
    }
    ctx->pc = 0x1BE358u;
    // 0x1be358: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE358u;
    {
        const bool branch_taken_0x1be358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE358u;
        // 0x1be35c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be358) {
            ctx->pc = 0x1BE38Cu;
            goto label_1be38c;
        }
    }
    ctx->pc = 0x1BE360u;
    // 0x1be360: 0xc06f8f0  jal         func_1BE3C0
    ctx->pc = 0x1BE360u;
    SET_GPR_U32(ctx, 31, 0x1BE368u);
    ctx->pc = 0x1BE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE360u;
    // 0x1be364: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3C0u, 0x1BE360u, 0x1BE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE368u;
label_1be368:
    // 0x1be368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be36c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE36Cu;
    {
        const bool branch_taken_0x1be36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE36Cu;
        // 0x1be370: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be36c) {
            ctx->pc = 0x1BE388u;
            goto label_1be388;
        }
    }
    ctx->pc = 0x1BE374u;
    // 0x1be374: 0xc06f8f0  jal         func_1BE3C0
    ctx->pc = 0x1BE374u;
    SET_GPR_U32(ctx, 31, 0x1BE37Cu);
    ctx->pc = 0x1BE3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3C0u, 0x1BE374u, 0x1BE37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE37Cu;
label_1be37c:
    // 0x1be37c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1be37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be380: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE380u;
    SET_GPR_U32(ctx, 31, 0x1BE388u);
    ctx->pc = 0x1BE384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE380u;
    // 0x1be384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE380u, 0x1BE388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE388u;
label_1be388:
    // 0x1be388: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1be388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1be38c:
    // 0x1be38c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1be38cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1be390: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE390u;
    {
        const bool branch_taken_0x1be390 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE390u;
        // 0x1be394: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be390) {
            ctx->pc = 0x1BE3A4u;
            goto label_1be3a4;
        }
    }
    ctx->pc = 0x1BE398u;
    // 0x1be398: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE398u;
    SET_GPR_U32(ctx, 31, 0x1BE3A0u);
    ctx->pc = 0x1BE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE398u;
    // 0x1be39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE398u, 0x1BE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE3A0u;
label_1be3a0:
    // 0x1be3a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1be3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be3a4:
    // 0x1be3a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be3a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3B0u;
        // 0x1be3b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE3B8u;
}
