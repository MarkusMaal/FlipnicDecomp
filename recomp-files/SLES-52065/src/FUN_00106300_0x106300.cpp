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

// Function: FUN_00106300
// Address: 0x106300 - 0x106370
void FUN_00106300_0x106300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106300_0x106300");
#endif

    switch (ctx->pc) {
        case 0x10635cu: goto label_10635c;
        default: break;
    }

    ctx->pc = 0x106300u;

    // 0x106300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10630c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10630cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106310: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x106310u;
    {
        const bool branch_taken_0x106310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106310u;
        // 0x106314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106310) {
            ctx->pc = 0x106360u;
            goto label_106360;
        }
    }
    ctx->pc = 0x106318u;
    // 0x106318: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10631c: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x10631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x106320: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106320u;
    {
        const bool branch_taken_0x106320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106320u;
        // 0x106324: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106320) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106328u;
    // 0x106328: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10632c: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x10632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x106330: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106330u;
    {
        const bool branch_taken_0x106330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106330u;
        // 0x106334: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106330) {
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106338u;
    // 0x106338: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10633c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x106340: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_106344:
    // 0x106344: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x106344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x106348: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106348u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10634c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10634Cu;
    {
        const bool branch_taken_0x10634c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10634Cu;
        // 0x106350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10634c) {
            ctx->pc = 0x10635Cu;
            goto label_10635c;
        }
    }
    ctx->pc = 0x106354u;
    // 0x106354: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106354u;
    SET_GPR_U32(ctx, 31, 0x10635Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106354u, 0x10635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10635Cu;
label_10635c:
    // 0x10635c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106360:
    // 0x106360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106368: 0x3e00008  jr          $ra
    ctx->pc = 0x106368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106368u;
        // 0x10636c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106370u;
}
