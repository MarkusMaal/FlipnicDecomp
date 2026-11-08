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

// Function: entry_00178e28
// Address: 0x178e28 - 0x178e70
void entry_00178e28_0x178e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178e28_0x178e28");
#endif

    switch (ctx->pc) {
        case 0x178e40u: goto label_178e40;
        case 0x178e48u: goto label_178e48;
        case 0x178e50u: goto label_178e50;
        case 0x178e68u: goto label_178e68;
        default: break;
    }

    ctx->pc = 0x178e28u;

    // 0x178e28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x178e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x178e2c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x178e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x178e30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178e34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x178e38: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E38u;
    SET_GPR_U32(ctx, 31, 0x178E40u);
    ctx->pc = 0x178E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E38u;
    // 0x178e3c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E38u, 0x178E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E40u;
label_178e40:
    // 0x178e40: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E40u;
    SET_GPR_U32(ctx, 31, 0x178E48u);
    ctx->pc = 0x178E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E40u;
    // 0x178e44: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E40u, 0x178E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E48u;
label_178e48:
    // 0x178e48: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E48u;
    SET_GPR_U32(ctx, 31, 0x178E50u);
    ctx->pc = 0x178E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E48u;
    // 0x178e4c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E48u, 0x178E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E50u;
label_178e50:
    // 0x178e50: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x178e54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178e58: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x178e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x178e5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e60: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178E60u;
    SET_GPR_U32(ctx, 31, 0x178E68u);
    ctx->pc = 0x178E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E60u;
    // 0x178e64: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178E60u, 0x178E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E68u;
label_178e68:
    // 0x178e68: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x178e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x178e6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x178e70u;
}
