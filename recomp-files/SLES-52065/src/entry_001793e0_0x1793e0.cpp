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

// Function: entry_001793e0
// Address: 0x1793e0 - 0x179420
void entry_001793e0_0x1793e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001793e0_0x1793e0");
#endif

    switch (ctx->pc) {
        case 0x1793ecu: goto label_1793ec;
        case 0x1793f4u: goto label_1793f4;
        case 0x1793fcu: goto label_1793fc;
        case 0x179414u: goto label_179414;
        default: break;
    }

    ctx->pc = 0x1793e0u;

    // 0x1793e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1793e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1793e4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1793E4u;
    SET_GPR_U32(ctx, 31, 0x1793ECu);
    ctx->pc = 0x1793E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793E4u;
    // 0x1793e8: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1793E4u, 0x1793ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793ECu;
label_1793ec:
    // 0x1793ec: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1793ECu;
    SET_GPR_U32(ctx, 31, 0x1793F4u);
    ctx->pc = 0x1793F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793ECu;
    // 0x1793f0: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1793ECu, 0x1793F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793F4u;
label_1793f4:
    // 0x1793f4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1793F4u;
    SET_GPR_U32(ctx, 31, 0x1793FCu);
    ctx->pc = 0x1793F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793F4u;
    // 0x1793f8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1793F4u, 0x1793FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793FCu;
label_1793fc:
    // 0x1793fc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x179400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179404: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x179404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x179408: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x179408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17940c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17940Cu;
    SET_GPR_U32(ctx, 31, 0x179414u);
    ctx->pc = 0x179410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17940Cu;
    // 0x179410: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17940Cu, 0x179414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179414u;
label_179414:
    // 0x179414: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x179414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x179418: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17941c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17941cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x179420u;
}
