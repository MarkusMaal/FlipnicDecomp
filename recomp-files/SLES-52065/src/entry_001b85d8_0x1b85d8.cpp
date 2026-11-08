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

// Function: entry_001b85d8
// Address: 0x1b85d8 - 0x1b86a4
void entry_001b85d8_0x1b85d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b85d8_0x1b85d8");
#endif

    switch (ctx->pc) {
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b86a0u: goto label_1b86a0;
        default: break;
    }

    ctx->pc = 0x1b85d8u;

    // 0x1b85d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b85dc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b85e0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b85e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b85e4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B85E4u;
    {
        const bool branch_taken_0x1b85e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85E4u;
        // 0x1b85e8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85e4) {
            ctx->pc = 0x1B8574u;
            return;
        }
    }
    ctx->pc = 0x1B85ECu;
    // 0x1b85ec: 0xc048920  jal         func_122480
    ctx->pc = 0x1B85ECu;
    SET_GPR_U32(ctx, 31, 0x1B85F4u);
    ctx->pc = 0x1B85F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85ECu;
    // 0x1b85f0: 0x27a501cc  addiu       $a1, $sp, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x1B85ECu, 0x1B85F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85F4u;
label_1b85f4:
    // 0x1b85f4: 0x27b50194  addiu       $s5, $sp, 0x194
    ctx->pc = 0x1b85f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b85f8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b85fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b85fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8604: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b8604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8608: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x1B8608u;
    SET_GPR_U32(ctx, 31, 0x1B8610u);
    ctx->pc = 0x1B860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8608u;
    // 0x1b860c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x1B8608u, 0x1B8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8610u;
label_1b8610:
    // 0x1b8610: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1b8614: 0xc080748  jal         func_201D20
    ctx->pc = 0x1B8614u;
    SET_GPR_U32(ctx, 31, 0x1B861Cu);
    ctx->pc = 0x1B8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8614u;
    // 0x1b8618: 0x24841010  addiu       $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1B8614u, 0x1B861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B861Cu;
label_1b861c:
    // 0x1b861c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b8620: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8624: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8628: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1B8628u;
    SET_GPR_U32(ctx, 31, 0x1B8630u);
    ctx->pc = 0x1B862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8628u;
    // 0x1b862c: 0x24a51010  addiu       $a1, $a1, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1B8628u, 0x1B8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8630u;
label_1b8630:
    // 0x1b8630: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1b8630u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b8634: 0xc080748  jal         func_201D20
    ctx->pc = 0x1B8634u;
    SET_GPR_U32(ctx, 31, 0x1B863Cu);
    ctx->pc = 0x1B8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8634u;
    // 0x1b8638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1B8634u, 0x1B863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B863Cu;
label_1b863c:
    // 0x1b863c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b863cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8640: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8644: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1B8644u;
    SET_GPR_U32(ctx, 31, 0x1B864Cu);
    ctx->pc = 0x1B8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8644u;
    // 0x1b8648: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1B8644u, 0x1B864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B864Cu;
label_1b864c:
    // 0x1b864c: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1b8650: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8654: 0xc0488c8  jal         func_122320
    ctx->pc = 0x1B8654u;
    SET_GPR_U32(ctx, 31, 0x1B865Cu);
    ctx->pc = 0x1B8658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8654u;
    // 0x1b8658: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x1B8654u, 0x1B865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B865Cu;
label_1b865c:
    // 0x1b865c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b8660: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1b8660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b8664: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b8664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8668: 0x27a601a8  addiu       $a2, $sp, 0x1A8
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1b866c: 0xc06edd0  jal         func_1BB740
    ctx->pc = 0x1B866Cu;
    SET_GPR_U32(ctx, 31, 0x1B8674u);
    ctx->pc = 0x1B8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B866Cu;
    // 0x1b8670: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB740u, 0x1B866Cu, 0x1B8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8674u;
label_1b8674:
    // 0x1b8674: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1b8674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1b8678: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B8678u;
    SET_GPR_U32(ctx, 31, 0x1B8680u);
    ctx->pc = 0x1B867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8678u;
    // 0x1b867c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B8678u, 0x1B8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8680u;
label_1b8680:
    // 0x1b8680: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8684: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8688: 0x8c22f288  lw          $v0, -0xD78($at)
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F288u));
    // 0x1b868c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8694: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8698: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B8698u;
    SET_GPR_U32(ctx, 31, 0x1B86A0u);
    ctx->pc = 0x1B869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8698u;
    // 0x1b869c: 0xac22f288  sw          $v0, -0xD78($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B8698u, 0x1B86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86A0u;
label_1b86a0:
    // 0x1b86a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1b86a4u;
}
