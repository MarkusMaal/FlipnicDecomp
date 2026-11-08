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

// Function: entry_00177870
// Address: 0x177870 - 0x1778b0
void entry_00177870_0x177870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177870_0x177870");
#endif

    switch (ctx->pc) {
        case 0x17787cu: goto label_17787c;
        case 0x177884u: goto label_177884;
        case 0x17788cu: goto label_17788c;
        case 0x1778a4u: goto label_1778a4;
        default: break;
    }

    ctx->pc = 0x177870u;

    // 0x177870: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x177870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177874: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177874u;
    SET_GPR_U32(ctx, 31, 0x17787Cu);
    ctx->pc = 0x177878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177874u;
    // 0x177878: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177874u, 0x17787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17787Cu;
label_17787c:
    // 0x17787c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17787Cu;
    SET_GPR_U32(ctx, 31, 0x177884u);
    ctx->pc = 0x177880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17787Cu;
    // 0x177880: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17787Cu, 0x177884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177884u;
label_177884:
    // 0x177884: 0xc045b20  jal         func_116C80
    ctx->pc = 0x177884u;
    SET_GPR_U32(ctx, 31, 0x17788Cu);
    ctx->pc = 0x177888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177884u;
    // 0x177888: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x177884u, 0x17788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17788Cu;
label_17788c:
    // 0x17788c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x177890: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177894: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x177894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x177898: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17789c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17789Cu;
    SET_GPR_U32(ctx, 31, 0x1778A4u);
    ctx->pc = 0x1778A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17789Cu;
    // 0x1778a0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17789Cu, 0x1778A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1778A4u;
label_1778a4:
    // 0x1778a4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1778a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x1778a8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1778a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1778ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1778acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1778b0u;
}
