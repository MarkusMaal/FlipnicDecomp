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

// Function: FUN_001161d0
// Address: 0x1161d0 - 0x116240
void FUN_001161d0_0x1161d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001161d0_0x1161d0");
#endif

    switch (ctx->pc) {
        case 0x116210u: goto label_116210;
        case 0x116228u: goto label_116228;
        default: break;
    }

    ctx->pc = 0x1161d0u;

    // 0x1161d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1161d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1161d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1161d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1161d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1161dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1161dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1161e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1161e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161e4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1161E4u;
    {
        const bool branch_taken_0x1161e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161E4u;
        // 0x1161e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161e4) {
            ctx->pc = 0x116228u;
            goto label_116228;
        }
    }
    ctx->pc = 0x1161ECu;
    // 0x1161ec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1161f0: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x1161f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x1161f4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1161F4u;
    {
        const bool branch_taken_0x1161f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161F4u;
        // 0x1161f8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161f4) {
            ctx->pc = 0x116210u;
            goto label_116210;
        }
    }
    ctx->pc = 0x1161FCu;
    // 0x1161fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1161fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116204: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x116208: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x116208u;
    SET_GPR_U32(ctx, 31, 0x116210u);
    ctx->pc = 0x11620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116208u;
    // 0x11620c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x116208u, 0x116210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116210u;
label_116210:
    // 0x116210: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x116210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x116214: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x116214u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x116218: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116218u;
    {
        const bool branch_taken_0x116218 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116218u;
        // 0x11621c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116218) {
            ctx->pc = 0x11622Cu;
            goto label_11622c;
        }
    }
    ctx->pc = 0x116220u;
    // 0x116220: 0xc0401a4  jal         func_100690
    ctx->pc = 0x116220u;
    SET_GPR_U32(ctx, 31, 0x116228u);
    ctx->pc = 0x116224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116220u;
    // 0x116224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x116220u, 0x116228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116228u;
label_116228:
    // 0x116228: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11622c:
    // 0x11622c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11622cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x116230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116238: 0x3e00008  jr          $ra
    ctx->pc = 0x116238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116238u;
        // 0x11623c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116240u;
}
