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

// Function: entry_001c61d8
// Address: 0x1c61d8 - 0x1c6240
void entry_001c61d8_0x1c61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c61d8_0x1c61d8");
#endif

    switch (ctx->pc) {
        case 0x1c61fcu: goto label_1c61fc;
        case 0x1c6208u: goto label_1c6208;
        case 0x1c6218u: goto label_1c6218;
        case 0x1c6224u: goto label_1c6224;
        case 0x1c622cu: goto label_1c622c;
        case 0x1c6238u: goto label_1c6238;
        default: break;
    }

    ctx->pc = 0x1c61d8u;

    // 0x1c61d8: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x1c61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c61dc: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1c61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c61e0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C61E0u;
    {
        const bool branch_taken_0x1c61e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c61e0) {
            ctx->pc = 0x1C6240u;
            return;
        }
    }
    ctx->pc = 0x1C61E8u;
    // 0x1c61e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c61ec: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c61f0: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x1c61f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x1c61f4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C61F4u;
    SET_GPR_U32(ctx, 31, 0x1C61FCu);
    ctx->pc = 0x1C61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61F4u;
    // 0x1c61f8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C61F4u, 0x1C61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61FCu;
label_1c61fc:
    // 0x1c61fc: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1c61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1c6200: 0xc06e100  jal         func_1B8400
    ctx->pc = 0x1C6200u;
    SET_GPR_U32(ctx, 31, 0x1C6208u);
    ctx->pc = 0x1C6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6200u;
    // 0x1c6204: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8400u, 0x1C6200u, 0x1C6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6208u;
label_1c6208:
    // 0x1c6208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c620c: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c620cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c6210: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C6210u;
    SET_GPR_U32(ctx, 31, 0x1C6218u);
    ctx->pc = 0x1C6214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6210u;
    // 0x1c6214: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C6210u, 0x1C6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6218u;
label_1c6218:
    // 0x1c6218: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x1c6218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c621c: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C621Cu;
    SET_GPR_U32(ctx, 31, 0x1C6224u);
    ctx->pc = 0x1C6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C621Cu;
    // 0x1c6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C621Cu, 0x1C6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6224u;
label_1c6224:
    // 0x1c6224: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6224u;
    SET_GPR_U32(ctx, 31, 0x1C622Cu);
    ctx->pc = 0x1C6228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6224u;
    // 0x1c6228: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6224u, 0x1C622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C622Cu;
label_1c622c:
    // 0x1c622c: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x1c622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1c6230: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6230u;
    SET_GPR_U32(ctx, 31, 0x1C6238u);
    ctx->pc = 0x1C6234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6230u;
    // 0x1c6234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6230u, 0x1C6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6238u;
label_1c6238:
    // 0x1c6238: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C6238u;
    SET_GPR_U32(ctx, 31, 0x1C6240u);
    ctx->pc = 0x1C623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6238u;
    // 0x1c623c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C6238u, 0x1C6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6240u;
}
