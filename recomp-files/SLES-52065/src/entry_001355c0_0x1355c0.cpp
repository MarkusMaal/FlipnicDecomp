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

// Function: entry_001355c0
// Address: 0x1355c0 - 0x135610
void entry_001355c0_0x1355c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001355c0_0x1355c0");
#endif

    switch (ctx->pc) {
        case 0x1355c8u: goto label_1355c8;
        case 0x1355d4u: goto label_1355d4;
        case 0x1355e4u: goto label_1355e4;
        case 0x1355f0u: goto label_1355f0;
        default: break;
    }

    ctx->pc = 0x1355c0u;

    // 0x1355c0: 0xc04c554  jal         func_131550
    ctx->pc = 0x1355C0u;
    SET_GPR_U32(ctx, 31, 0x1355C8u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1355C0u, 0x1355C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355C8u;
label_1355c8:
    // 0x1355c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1355c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1355cc: 0xc04c54c  jal         func_131530
    ctx->pc = 0x1355CCu;
    SET_GPR_U32(ctx, 31, 0x1355D4u);
    ctx->pc = 0x1355D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355CCu;
    // 0x1355d0: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1355CCu, 0x1355D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355D4u;
label_1355d4:
    // 0x1355d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1355d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1355d8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1355d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1355dc: 0xc04c554  jal         func_131550
    ctx->pc = 0x1355DCu;
    SET_GPR_U32(ctx, 31, 0x1355E4u);
    ctx->pc = 0x1355E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355DCu;
    // 0x1355e0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1355DCu, 0x1355E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355E4u;
label_1355e4:
    // 0x1355e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1355e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355e8: 0xc04c550  jal         func_131540
    ctx->pc = 0x1355E8u;
    SET_GPR_U32(ctx, 31, 0x1355F0u);
    ctx->pc = 0x1355ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355E8u;
    // 0x1355ec: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1355E8u, 0x1355F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355F0u;
label_1355f0:
    // 0x1355f0: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x1355f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1355f4: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1355f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1355f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1355fc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1355fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135600: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x135600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x135604: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135608: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x135608u;
    {
        const bool branch_taken_0x135608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x135608) {
            ctx->pc = 0x135654u;
            return;
        }
    }
    ctx->pc = 0x135610u;
}
