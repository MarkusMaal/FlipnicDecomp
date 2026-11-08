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

// Function: entry_00174c40
// Address: 0x174c40 - 0x174c80
void entry_00174c40_0x174c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c40_0x174c40");
#endif

    switch (ctx->pc) {
        case 0x174c4cu: goto label_174c4c;
        case 0x174c54u: goto label_174c54;
        case 0x174c5cu: goto label_174c5c;
        case 0x174c74u: goto label_174c74;
        default: break;
    }

    ctx->pc = 0x174c40u;

    // 0x174c40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174c44: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174C44u;
    SET_GPR_U32(ctx, 31, 0x174C4Cu);
    ctx->pc = 0x174C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C44u;
    // 0x174c48: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174C44u, 0x174C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C4Cu;
label_174c4c:
    // 0x174c4c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174C4Cu;
    SET_GPR_U32(ctx, 31, 0x174C54u);
    ctx->pc = 0x174C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C4Cu;
    // 0x174c50: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174C4Cu, 0x174C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C54u;
label_174c54:
    // 0x174c54: 0xc045b20  jal         func_116C80
    ctx->pc = 0x174C54u;
    SET_GPR_U32(ctx, 31, 0x174C5Cu);
    ctx->pc = 0x174C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C54u;
    // 0x174c58: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x174C54u, 0x174C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C5Cu;
label_174c5c:
    // 0x174c5c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x174c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x174c60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174c64: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x174c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x174c68: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x174c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c6c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x174C6Cu;
    SET_GPR_U32(ctx, 31, 0x174C74u);
    ctx->pc = 0x174C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C6Cu;
    // 0x174c70: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x174C6Cu, 0x174C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C74u;
label_174c74:
    // 0x174c74: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x174c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x174c78: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x174c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x174c7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x174c80u;
}
