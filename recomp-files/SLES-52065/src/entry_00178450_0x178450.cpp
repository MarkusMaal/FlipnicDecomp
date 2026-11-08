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

// Function: entry_00178450
// Address: 0x178450 - 0x178490
void entry_00178450_0x178450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178450_0x178450");
#endif

    switch (ctx->pc) {
        case 0x17845cu: goto label_17845c;
        case 0x178464u: goto label_178464;
        case 0x17846cu: goto label_17846c;
        case 0x178484u: goto label_178484;
        default: break;
    }

    ctx->pc = 0x178450u;

    // 0x178450: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178454: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178454u;
    SET_GPR_U32(ctx, 31, 0x17845Cu);
    ctx->pc = 0x178458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178454u;
    // 0x178458: 0x519821  addu        $s3, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178454u, 0x17845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17845Cu;
label_17845c:
    // 0x17845c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17845Cu;
    SET_GPR_U32(ctx, 31, 0x178464u);
    ctx->pc = 0x178460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17845Cu;
    // 0x178460: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17845Cu, 0x178464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178464u;
label_178464:
    // 0x178464: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178464u;
    SET_GPR_U32(ctx, 31, 0x17846Cu);
    ctx->pc = 0x178468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178464u;
    // 0x178468: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178464u, 0x17846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17846Cu;
label_17846c:
    // 0x17846c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x178470: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178474: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x178474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x178478: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17847c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17847Cu;
    SET_GPR_U32(ctx, 31, 0x178484u);
    ctx->pc = 0x178480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17847Cu;
    // 0x178480: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17847Cu, 0x178484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178484u;
label_178484:
    // 0x178484: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x178484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x178488: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x178488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x17848c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17848cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x178490u;
}
