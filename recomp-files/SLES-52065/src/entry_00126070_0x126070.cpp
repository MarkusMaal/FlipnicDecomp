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

// Function: entry_00126070
// Address: 0x126070 - 0x1260c4
void entry_00126070_0x126070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126070_0x126070");
#endif

    switch (ctx->pc) {
        case 0x12607cu: goto label_12607c;
        case 0x126088u: goto label_126088;
        case 0x126098u: goto label_126098;
        case 0x1260a4u: goto label_1260a4;
        default: break;
    }

    ctx->pc = 0x126070u;

    // 0x126070: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x126070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x126074: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x126074u;
    SET_GPR_U32(ctx, 31, 0x12607Cu);
    ctx->pc = 0x126078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126074u;
    // 0x126078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x126074u, 0x12607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12607Cu;
label_12607c:
    // 0x12607c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x126080: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x126080u;
    SET_GPR_U32(ctx, 31, 0x126088u);
    ctx->pc = 0x126084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126080u;
    // 0x126084: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x126080u, 0x126088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126088u;
label_126088:
    // 0x126088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12608c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x126090: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x126090u;
    SET_GPR_U32(ctx, 31, 0x126098u);
    ctx->pc = 0x126094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126090u;
    // 0x126094: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x126090u, 0x126098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126098u;
label_126098:
    // 0x126098: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x126098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12609c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x12609Cu;
    SET_GPR_U32(ctx, 31, 0x1260A4u);
    ctx->pc = 0x1260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12609Cu;
    // 0x1260a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x12609Cu, 0x1260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260A4u;
label_1260a4:
    // 0x1260a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1260a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1260a8: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1260a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1260ac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1260b0: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1260b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1260b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1260b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1260b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1260b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1260bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1260BCu;
    {
        const bool branch_taken_0x1260bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260BCu;
        // 0x1260c0: 0xc6540090  lwc1        $f20, 0x90($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260bc) {
            ctx->pc = 0x1260C8u;
            return;
        }
    }
    ctx->pc = 0x1260C4u;
}
