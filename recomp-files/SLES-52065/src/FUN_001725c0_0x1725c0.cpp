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

// Function: FUN_001725c0
// Address: 0x1725c0 - 0x172660
void FUN_001725c0_0x1725c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001725c0_0x1725c0");
#endif

    switch (ctx->pc) {
        case 0x172608u: goto label_172608;
        case 0x17261cu: goto label_17261c;
        case 0x172630u: goto label_172630;
        case 0x172648u: goto label_172648;
        default: break;
    }

    ctx->pc = 0x1725c0u;

    // 0x1725c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1725c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1725c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1725c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1725c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1725c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1725cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1725ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1725d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1725d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725d4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1725D4u;
    {
        const bool branch_taken_0x1725d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1725D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725D4u;
        // 0x1725d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725d4) {
            ctx->pc = 0x172648u;
            goto label_172648;
        }
    }
    ctx->pc = 0x1725DCu;
    // 0x1725dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1725dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1725e0: 0x2442acb0  addiu       $v0, $v0, -0x5350
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945968));
    // 0x1725e4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1725e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1725e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1725ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1725ECu;
    {
        const bool branch_taken_0x1725ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1725F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725ECu;
        // 0x1725f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725ec) {
            ctx->pc = 0x172634u;
            goto label_172634;
        }
    }
    ctx->pc = 0x1725F4u;
    // 0x1725f4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1725f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1725f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1725F8u;
    {
        const bool branch_taken_0x1725f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1725f8) {
            ctx->pc = 0x172608u;
            goto label_172608;
        }
    }
    ctx->pc = 0x172600u;
    // 0x172600: 0xc040150  jal         func_100540
    ctx->pc = 0x172600u;
    SET_GPR_U32(ctx, 31, 0x172608u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x172600u, 0x172608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172608u;
label_172608:
    // 0x172608: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x172608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17260c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17260Cu;
    {
        const bool branch_taken_0x17260c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17260c) {
            ctx->pc = 0x17261Cu;
            goto label_17261c;
        }
    }
    ctx->pc = 0x172614u;
    // 0x172614: 0xc040150  jal         func_100540
    ctx->pc = 0x172614u;
    SET_GPR_U32(ctx, 31, 0x17261Cu);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x172614u, 0x17261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17261Cu;
label_17261c:
    // 0x17261c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172620: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172620u;
    {
        const bool branch_taken_0x172620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172620) {
            ctx->pc = 0x172630u;
            goto label_172630;
        }
    }
    ctx->pc = 0x172628u;
    // 0x172628: 0xc040150  jal         func_100540
    ctx->pc = 0x172628u;
    SET_GPR_U32(ctx, 31, 0x172630u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x172628u, 0x172630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172630u;
label_172630:
    // 0x172630: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x172630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_172634:
    // 0x172634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x172634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x172638: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172638u;
    {
        const bool branch_taken_0x172638 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172638u;
        // 0x17263c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172638) {
            ctx->pc = 0x17264Cu;
            goto label_17264c;
        }
    }
    ctx->pc = 0x172640u;
    // 0x172640: 0xc0401a4  jal         func_100690
    ctx->pc = 0x172640u;
    SET_GPR_U32(ctx, 31, 0x172648u);
    ctx->pc = 0x172644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172640u;
    // 0x172644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x172640u, 0x172648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172648u;
label_172648:
    // 0x172648: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x172648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17264c:
    // 0x17264c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172650: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172658: 0x3e00008  jr          $ra
    ctx->pc = 0x172658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172658u;
        // 0x17265c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172660u;
}
