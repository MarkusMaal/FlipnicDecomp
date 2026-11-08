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

// Function: entry_00173f90
// Address: 0x173f90 - 0x173fd0
void entry_00173f90_0x173f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173f90_0x173f90");
#endif

    switch (ctx->pc) {
        case 0x173f9cu: goto label_173f9c;
        case 0x173fa4u: goto label_173fa4;
        case 0x173facu: goto label_173fac;
        case 0x173fc4u: goto label_173fc4;
        default: break;
    }

    ctx->pc = 0x173f90u;

    // 0x173f90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x173f94: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173F94u;
    SET_GPR_U32(ctx, 31, 0x173F9Cu);
    ctx->pc = 0x173F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F94u;
    // 0x173f98: 0x519821  addu        $s3, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173F94u, 0x173F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F9Cu;
label_173f9c:
    // 0x173f9c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173F9Cu;
    SET_GPR_U32(ctx, 31, 0x173FA4u);
    ctx->pc = 0x173FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F9Cu;
    // 0x173fa0: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173F9Cu, 0x173FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FA4u;
label_173fa4:
    // 0x173fa4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173FA4u;
    SET_GPR_U32(ctx, 31, 0x173FACu);
    ctx->pc = 0x173FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FA4u;
    // 0x173fa8: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173FA4u, 0x173FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FACu;
label_173fac:
    // 0x173fac: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x173facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x173fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173fb4: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x173fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x173fb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x173fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fbc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x173FBCu;
    SET_GPR_U32(ctx, 31, 0x173FC4u);
    ctx->pc = 0x173FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173FBCu;
    // 0x173fc0: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x173FBCu, 0x173FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FC4u;
label_173fc4:
    // 0x173fc4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x173fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x173fc8: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x173fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x173fcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x173fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x173fd0u;
}
