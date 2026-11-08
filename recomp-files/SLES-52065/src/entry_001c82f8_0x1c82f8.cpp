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

// Function: entry_001c82f8
// Address: 0x1c82f8 - 0x1c834c
void entry_001c82f8_0x1c82f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c82f8_0x1c82f8");
#endif

    switch (ctx->pc) {
        case 0x1c8308u: goto label_1c8308;
        case 0x1c8328u: goto label_1c8328;
        case 0x1c833cu: goto label_1c833c;
        case 0x1c8344u: goto label_1c8344;
        default: break;
    }

    ctx->pc = 0x1c82f8u;

    // 0x1c82f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c82fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8300: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8300u;
    SET_GPR_U32(ctx, 31, 0x1C8308u);
    ctx->pc = 0x1C8304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8300u;
    // 0x1c8304: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8300u, 0x1C8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8308u;
label_1c8308:
    // 0x1c8308: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c8308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c830c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8310: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1c8310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c8314: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8318: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c8318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c831c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c8320: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8320u;
    SET_GPR_U32(ctx, 31, 0x1C8328u);
    ctx->pc = 0x1C8324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8320u;
    // 0x1c8324: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8320u, 0x1C8328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8328u;
label_1c8328:
    // 0x1c8328: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c8328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c832c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c832cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8330: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c8334: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C8334u;
    SET_GPR_U32(ctx, 31, 0x1C833Cu);
    ctx->pc = 0x1C8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8334u;
    // 0x1c8338: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C8334u, 0x1C833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C833Cu;
label_1c833c:
    // 0x1c833c: 0xc06e280  jal         func_1B8A00
    ctx->pc = 0x1C833Cu;
    SET_GPR_U32(ctx, 31, 0x1C8344u);
    ctx->pc = 0x1C8340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C833Cu;
    // 0x1c8340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8A00u, 0x1C833Cu, 0x1C8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8344u;
label_1c8344:
    // 0x1c8344: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C8344u;
    {
        const bool branch_taken_0x1c8344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8344) {
            ctx->pc = 0x1C8484u;
            return;
        }
    }
    ctx->pc = 0x1C834Cu;
}
