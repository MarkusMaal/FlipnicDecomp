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

// Function: FUN_00105670
// Address: 0x105670 - 0x1056d0
void FUN_00105670_0x105670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105670_0x105670");
#endif

    switch (ctx->pc) {
        case 0x1056bcu: goto label_1056bc;
        default: break;
    }

    ctx->pc = 0x105670u;

    // 0x105670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10567c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10567cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105680: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x105680u;
    {
        const bool branch_taken_0x105680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105680u;
        // 0x105684: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105680) {
            ctx->pc = 0x1056C0u;
            goto label_1056c0;
        }
    }
    ctx->pc = 0x105688u;
    // 0x105688: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10568c: 0x24427bd0  addiu       $v0, $v0, 0x7BD0
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31696));
    // 0x105690: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105690u;
    {
        const bool branch_taken_0x105690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105690u;
        // 0x105694: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105690) {
            ctx->pc = 0x1056A4u;
            goto label_1056a4;
        }
    }
    ctx->pc = 0x105698u;
    // 0x105698: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10569c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1056a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1056a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1056a4:
    // 0x1056a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1056a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1056a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1056a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1056ac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1056ACu;
    {
        const bool branch_taken_0x1056ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1056B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056ACu;
        // 0x1056b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056ac) {
            ctx->pc = 0x1056BCu;
            goto label_1056bc;
        }
    }
    ctx->pc = 0x1056B4u;
    // 0x1056b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1056B4u;
    SET_GPR_U32(ctx, 31, 0x1056BCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1056B4u, 0x1056BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056BCu;
label_1056bc:
    // 0x1056bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1056bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1056c0:
    // 0x1056c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1056c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1056c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1056c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1056c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1056C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1056CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056C8u;
        // 0x1056cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1056C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1056D0u;
}
