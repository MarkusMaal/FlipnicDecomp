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

// Function: entry_001b50ac
// Address: 0x1b50ac - 0x1b511c
void entry_001b50ac_0x1b50ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b50ac_0x1b50ac");
#endif

    switch (ctx->pc) {
        case 0x1b50c4u: goto label_1b50c4;
        case 0x1b50d0u: goto label_1b50d0;
        case 0x1b50d8u: goto label_1b50d8;
        case 0x1b50e4u: goto label_1b50e4;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b5114u: goto label_1b5114;
        default: break;
    }

    ctx->pc = 0x1b50acu;

    // 0x1b50ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b50acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b50b0: 0x9022e768  lbu         $v0, -0x1898($at)
    ctx->pc = 0x1b50b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36E768u));
    // 0x1b50b4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B50B4u;
    {
        const bool branch_taken_0x1b50b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b4) {
            ctx->pc = 0x1B5144u;
            return;
        }
    }
    ctx->pc = 0x1B50BCu;
    // 0x1b50bc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B50BCu;
    SET_GPR_U32(ctx, 31, 0x1B50C4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B50BCu, 0x1B50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50C4u;
label_1b50c4:
    // 0x1b50c4: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1b50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1b50c8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B50C8u;
    SET_GPR_U32(ctx, 31, 0x1B50D0u);
    ctx->pc = 0x1B50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50C8u;
    // 0x1b50cc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B50C8u, 0x1B50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50D0u;
label_1b50d0:
    // 0x1b50d0: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B50D0u;
    SET_GPR_U32(ctx, 31, 0x1B50D8u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B50D0u, 0x1B50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50D8u;
label_1b50d8:
    // 0x1b50d8: 0x24450264  addiu       $a1, $v0, 0x264
    ctx->pc = 0x1b50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 612));
    // 0x1b50dc: 0xc080664  jal         func_201990
    ctx->pc = 0x1B50DCu;
    SET_GPR_U32(ctx, 31, 0x1B50E4u);
    ctx->pc = 0x1B50E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50DCu;
    // 0x1b50e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B50DCu, 0x1B50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50E4u;
label_1b50e4:
    // 0x1b50e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b50e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b50ec: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1B50ECu;
    SET_GPR_U32(ctx, 31, 0x1B50F4u);
    ctx->pc = 0x1B50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50ECu;
    // 0x1b50f0: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1B50ECu, 0x1B50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50F4u;
label_1b50f4:
    // 0x1b50f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b50f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b50f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b50fc: 0x2484e220  addiu       $a0, $a0, -0x1DE0
    ctx->pc = 0x1b50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    // 0x1b5100: 0xc046b40  jal         func_11AD00
    ctx->pc = 0x1B5100u;
    SET_GPR_U32(ctx, 31, 0x1B5108u);
    ctx->pc = 0x1B5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5100u;
    // 0x1b5104: 0x24a50d00  addiu       $a1, $a1, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x1B5100u, 0x1B5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5108u;
label_1b5108:
    // 0x1b5108: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b510c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B510Cu;
    SET_GPR_U32(ctx, 31, 0x1B5114u);
    ctx->pc = 0x1B5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B510Cu;
    // 0x1b5110: 0x2484e220  addiu       $a0, $a0, -0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B510Cu, 0x1B5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5114u;
label_1b5114:
    // 0x1b5114: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5114u;
    {
        const bool branch_taken_0x1b5114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5114) {
            ctx->pc = 0x1B5138u;
            return;
        }
    }
    ctx->pc = 0x1B511Cu;
}
