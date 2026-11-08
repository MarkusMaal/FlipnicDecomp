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

// Function: entry_00135474
// Address: 0x135474 - 0x1354c8
void entry_00135474_0x135474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135474_0x135474");
#endif

    switch (ctx->pc) {
        case 0x13547cu: goto label_13547c;
        case 0x135488u: goto label_135488;
        case 0x1354a0u: goto label_1354a0;
        case 0x1354acu: goto label_1354ac;
        default: break;
    }

    ctx->pc = 0x135474u;

    // 0x135474: 0xc04c554  jal         func_131550
    ctx->pc = 0x135474u;
    SET_GPR_U32(ctx, 31, 0x13547Cu);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135474u, 0x13547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13547Cu;
label_13547c:
    // 0x13547c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13547cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135480: 0xc04c550  jal         func_131540
    ctx->pc = 0x135480u;
    SET_GPR_U32(ctx, 31, 0x135488u);
    ctx->pc = 0x135484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135480u;
    // 0x135484: 0x27a40158  addiu       $a0, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135480u, 0x135488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135488u;
label_135488:
    // 0x135488: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x135488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x13548c: 0x26440058  addiu       $a0, $s2, 0x58
    ctx->pc = 0x13548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x135490: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x135490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x135494: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x135494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x135498: 0xc04c554  jal         func_131550
    ctx->pc = 0x135498u;
    SET_GPR_U32(ctx, 31, 0x1354A0u);
    ctx->pc = 0x13549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135498u;
    // 0x13549c: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135498u, 0x1354A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354A0u;
label_1354a0:
    // 0x1354a0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1354a4: 0xc04c54c  jal         func_131530
    ctx->pc = 0x1354A4u;
    SET_GPR_U32(ctx, 31, 0x1354ACu);
    ctx->pc = 0x1354A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354A4u;
    // 0x1354a8: 0x27a4015c  addiu       $a0, $sp, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1354A4u, 0x1354ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354ACu;
label_1354ac:
    // 0x1354ac: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x1354acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1354b0: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x1354b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1354b4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1354b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1354b8: 0xafa5014c  sw          $a1, 0x14C($sp)
    ctx->pc = 0x1354b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 5));
    // 0x1354bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1354bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1354c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1354C0u;
    {
        const bool branch_taken_0x1354c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1354C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354C0u;
        // 0x1354c4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354c0) {
            ctx->pc = 0x13551Cu;
            return;
        }
    }
    ctx->pc = 0x1354C8u;
}
