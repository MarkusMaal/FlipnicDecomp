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

// Function: FUN_002094c0
// Address: 0x2094c0 - 0x209530
void FUN_002094c0_0x2094c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002094c0_0x2094c0");
#endif

    switch (ctx->pc) {
        case 0x2094f0u: goto label_2094f0;
        case 0x209500u: goto label_209500;
        case 0x209508u: goto label_209508;
        default: break;
    }

    ctx->pc = 0x2094c0u;

    // 0x2094c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2094c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2094c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2094c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2094c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2094c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2094cc: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x2094ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x2094d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2094d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2094d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2094d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2094d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2094dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2094dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2094e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2094e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2094e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2094E4u;
    {
        const bool branch_taken_0x2094e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094E4u;
        // 0x2094e8: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094e4) {
            ctx->pc = 0x209518u;
            goto label_209518;
        }
    }
    ctx->pc = 0x2094ECu;
    // 0x2094ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2094ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2094f0:
    // 0x2094f0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2094F0u;
    {
        const bool branch_taken_0x2094f0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2094f0) {
            ctx->pc = 0x209508u;
            goto label_209508;
        }
    }
    ctx->pc = 0x2094F8u;
    // 0x2094f8: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x2094F8u;
    SET_GPR_U32(ctx, 31, 0x209500u);
    ctx->pc = 0x2094FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094F8u;
    // 0x2094fc: 0x26445c00  addiu       $a0, $s2, 0x5C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x2094F8u, 0x209500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209500u;
label_209500:
    // 0x209500: 0xc082716  jal         func_209C58
    ctx->pc = 0x209500u;
    SET_GPR_U32(ctx, 31, 0x209508u);
    ctx->pc = 0x209504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209500u;
    // 0x209504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C58u, 0x209500u, 0x209508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209508u;
label_209508:
    // 0x209508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20950c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x209510: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x209510u;
    {
        const bool branch_taken_0x209510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209510u;
        // 0x209514: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209510) {
            ctx->pc = 0x2094F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2094f0;
        }
    }
    ctx->pc = 0x209518u;
label_209518:
    // 0x209518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20951c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20951cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209520: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209528: 0x3e00008  jr          $ra
    ctx->pc = 0x209528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209528u;
        // 0x20952c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209530u;
}
