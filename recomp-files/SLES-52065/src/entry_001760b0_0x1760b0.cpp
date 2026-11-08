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

// Function: entry_001760b0
// Address: 0x1760b0 - 0x1760f0
void entry_001760b0_0x1760b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001760b0_0x1760b0");
#endif

    switch (ctx->pc) {
        case 0x1760bcu: goto label_1760bc;
        case 0x1760c4u: goto label_1760c4;
        case 0x1760ccu: goto label_1760cc;
        case 0x1760e4u: goto label_1760e4;
        default: break;
    }

    ctx->pc = 0x1760b0u;

    // 0x1760b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1760b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1760b4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1760B4u;
    SET_GPR_U32(ctx, 31, 0x1760BCu);
    ctx->pc = 0x1760B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760B4u;
    // 0x1760b8: 0x519021  addu        $s2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1760B4u, 0x1760BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760BCu;
label_1760bc:
    // 0x1760bc: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1760BCu;
    SET_GPR_U32(ctx, 31, 0x1760C4u);
    ctx->pc = 0x1760C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760BCu;
    // 0x1760c0: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1760BCu, 0x1760C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760C4u;
label_1760c4:
    // 0x1760c4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1760C4u;
    SET_GPR_U32(ctx, 31, 0x1760CCu);
    ctx->pc = 0x1760C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760C4u;
    // 0x1760c8: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1760C4u, 0x1760CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760CCu;
label_1760cc:
    // 0x1760cc: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x1760ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1760d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1760d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1760d4: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1760d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1760d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1760d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760dc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1760DCu;
    SET_GPR_U32(ctx, 31, 0x1760E4u);
    ctx->pc = 0x1760E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760DCu;
    // 0x1760e0: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1760DCu, 0x1760E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760E4u;
label_1760e4:
    // 0x1760e4: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1760e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1760e8: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1760e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1760ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1760f0u;
}
