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

// Function: FUN_00106910
// Address: 0x106910 - 0x106970
void FUN_00106910_0x106910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106910_0x106910");
#endif

    switch (ctx->pc) {
        case 0x10695cu: goto label_10695c;
        default: break;
    }

    ctx->pc = 0x106910u;

    // 0x106910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x106914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x106914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x106918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10691c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106920: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x106920u;
    {
        const bool branch_taken_0x106920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106920u;
        // 0x106924: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106920) {
            ctx->pc = 0x106960u;
            goto label_106960;
        }
    }
    ctx->pc = 0x106928u;
    // 0x106928: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x10692c: 0x24427c30  addiu       $v0, $v0, 0x7C30
    ctx->pc = 0x10692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31792));
    // 0x106930: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106930u;
    {
        const bool branch_taken_0x106930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106930u;
        // 0x106934: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106930) {
            ctx->pc = 0x106944u;
            goto label_106944;
        }
    }
    ctx->pc = 0x106938u;
    // 0x106938: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10693c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x106940: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x106940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_106944:
    // 0x106944: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x106944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x106948: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10694c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10694Cu;
    {
        const bool branch_taken_0x10694c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10694Cu;
        // 0x106950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10694c) {
            ctx->pc = 0x10695Cu;
            goto label_10695c;
        }
    }
    ctx->pc = 0x106954u;
    // 0x106954: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106954u;
    SET_GPR_U32(ctx, 31, 0x10695Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106954u, 0x10695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10695Cu;
label_10695c:
    // 0x10695c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10695cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_106960:
    // 0x106960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106968: 0x3e00008  jr          $ra
    ctx->pc = 0x106968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106968u;
        // 0x10696c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106970u;
}
