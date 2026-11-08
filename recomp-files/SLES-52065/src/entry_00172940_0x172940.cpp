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

// Function: entry_00172940
// Address: 0x172940 - 0x172980
void entry_00172940_0x172940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172940_0x172940");
#endif

    switch (ctx->pc) {
        case 0x17294cu: goto label_17294c;
        case 0x172954u: goto label_172954;
        case 0x17295cu: goto label_17295c;
        case 0x172974u: goto label_172974;
        default: break;
    }

    ctx->pc = 0x172940u;

    // 0x172940: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x172944: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172944u;
    SET_GPR_U32(ctx, 31, 0x17294Cu);
    ctx->pc = 0x172948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172944u;
    // 0x172948: 0x509821  addu        $s3, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172944u, 0x17294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17294Cu;
label_17294c:
    // 0x17294c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17294Cu;
    SET_GPR_U32(ctx, 31, 0x172954u);
    ctx->pc = 0x172950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17294Cu;
    // 0x172950: 0xe6600030  swc1        $f0, 0x30($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17294Cu, 0x172954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172954u;
label_172954:
    // 0x172954: 0xc045b20  jal         func_116C80
    ctx->pc = 0x172954u;
    SET_GPR_U32(ctx, 31, 0x17295Cu);
    ctx->pc = 0x172958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172954u;
    // 0x172958: 0xe6600034  swc1        $f0, 0x34($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x172954u, 0x17295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17295Cu;
label_17295c:
    // 0x17295c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x172960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172964: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x172964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x172968: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x172968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17296c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17296Cu;
    SET_GPR_U32(ctx, 31, 0x172974u);
    ctx->pc = 0x172970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17296Cu;
    // 0x172970: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17296Cu, 0x172974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172974u;
label_172974:
    // 0x172974: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x172974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x172978: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x172978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x17297c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x172980u;
}
