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

// Function: FUN_00137890
// Address: 0x137890 - 0x137910
void FUN_00137890_0x137890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137890_0x137890");
#endif

    switch (ctx->pc) {
        case 0x1378c4u: goto label_1378c4;
        case 0x1378ccu: goto label_1378cc;
        case 0x1378dcu: goto label_1378dc;
        case 0x1378f8u: goto label_1378f8;
        default: break;
    }

    ctx->pc = 0x137890u;

    // 0x137890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13789c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1378a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1378a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1378A4u;
    {
        const bool branch_taken_0x1378a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378A4u;
        // 0x1378a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378a4) {
            ctx->pc = 0x1378F8u;
            goto label_1378f8;
        }
    }
    ctx->pc = 0x1378ACu;
    // 0x1378ac: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1378b0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1378b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1378b4: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1378B4u;
    {
        const bool branch_taken_0x1378b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1378b4) {
            ctx->pc = 0x1378D4u;
            goto label_1378d4;
        }
    }
    ctx->pc = 0x1378BCu;
    // 0x1378bc: 0xc040150  jal         func_100540
    ctx->pc = 0x1378BCu;
    SET_GPR_U32(ctx, 31, 0x1378C4u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1378BCu, 0x1378C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378C4u;
label_1378c4:
    // 0x1378c4: 0xc040150  jal         func_100540
    ctx->pc = 0x1378C4u;
    SET_GPR_U32(ctx, 31, 0x1378CCu);
    ctx->pc = 0x1378C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378C4u;
    // 0x1378c8: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1378C4u, 0x1378CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378CCu;
label_1378cc:
    // 0x1378cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1378CCu;
    {
        const bool branch_taken_0x1378cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378CCu;
        // 0x1378d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378cc) {
            ctx->pc = 0x1378E0u;
            goto label_1378e0;
        }
    }
    ctx->pc = 0x1378D4u;
label_1378d4:
    // 0x1378d4: 0xc040150  jal         func_100540
    ctx->pc = 0x1378D4u;
    SET_GPR_U32(ctx, 31, 0x1378DCu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x1378D4u, 0x1378DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378DCu;
label_1378dc:
    // 0x1378dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1378dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1378e0:
    // 0x1378e0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x1378e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x1378e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1378e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1378e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1378E8u;
    {
        const bool branch_taken_0x1378e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1378ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378E8u;
        // 0x1378ec: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378e8) {
            ctx->pc = 0x1378F8u;
            goto label_1378f8;
        }
    }
    ctx->pc = 0x1378F0u;
    // 0x1378f0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1378F0u;
    SET_GPR_U32(ctx, 31, 0x1378F8u);
    ctx->pc = 0x1378F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1378F0u;
    // 0x1378f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1378F0u, 0x1378F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1378F8u;
label_1378f8:
    // 0x1378f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1378f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1378fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1378fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137908: 0x3e00008  jr          $ra
    ctx->pc = 0x137908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137908u;
        // 0x13790c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137910u;
}
