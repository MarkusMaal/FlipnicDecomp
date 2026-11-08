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

// Function: FUN_001061f0
// Address: 0x1061f0 - 0x106280
void FUN_001061f0_0x1061f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001061f0_0x1061f0");
#endif

    switch (ctx->pc) {
        case 0x106250u: goto label_106250;
        case 0x106268u: goto label_106268;
        default: break;
    }

    ctx->pc = 0x1061f0u;

    // 0x1061f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1061f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1061f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1061f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1061f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1061f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1061fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1061fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106204: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x106204u;
    {
        const bool branch_taken_0x106204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106204u;
        // 0x106208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106204) {
            ctx->pc = 0x106268u;
            goto label_106268;
        }
    }
    ctx->pc = 0x10620Cu;
    // 0x10620c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106210: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x106210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x106214: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x106214u;
    {
        const bool branch_taken_0x106214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106214u;
        // 0x106218: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106214) {
            ctx->pc = 0x106250u;
            goto label_106250;
        }
    }
    ctx->pc = 0x10621Cu;
    // 0x10621c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106220: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x106224: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x106224u;
    {
        const bool branch_taken_0x106224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106224u;
        // 0x106228: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106224) {
            ctx->pc = 0x106250u;
            goto label_106250;
        }
    }
    ctx->pc = 0x10622Cu;
    // 0x10622c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106230: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x106230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x106234: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106234u;
    {
        const bool branch_taken_0x106234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106234u;
        // 0x106238: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106234) {
            ctx->pc = 0x106250u;
            goto label_106250;
        }
    }
    ctx->pc = 0x10623Cu;
    // 0x10623c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106244: 0x24427cf0  addiu       $v0, $v0, 0x7CF0
    ctx->pc = 0x106244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31984));
    // 0x106248: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x106248u;
    SET_GPR_U32(ctx, 31, 0x106250u);
    ctx->pc = 0x10624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106248u;
    // 0x10624c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x106248u, 0x106250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106250u;
label_106250:
    // 0x106250: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x106254: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106258: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106258u;
    {
        const bool branch_taken_0x106258 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106258u;
        // 0x10625c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106258) {
            ctx->pc = 0x10626Cu;
            goto label_10626c;
        }
    }
    ctx->pc = 0x106260u;
    // 0x106260: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106260u;
    SET_GPR_U32(ctx, 31, 0x106268u);
    ctx->pc = 0x106264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106260u;
    // 0x106264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106260u, 0x106268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106268u;
label_106268:
    // 0x106268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10626c:
    // 0x10626c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10626cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106278: 0x3e00008  jr          $ra
    ctx->pc = 0x106278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106278u;
        // 0x10627c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106280u;
}
