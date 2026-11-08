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

// Function: entry_001788e8
// Address: 0x1788e8 - 0x178930
void entry_001788e8_0x1788e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001788e8_0x1788e8");
#endif

    switch (ctx->pc) {
        case 0x178900u: goto label_178900;
        case 0x178908u: goto label_178908;
        case 0x178910u: goto label_178910;
        case 0x178928u: goto label_178928;
        default: break;
    }

    ctx->pc = 0x1788e8u;

    // 0x1788e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1788ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1788ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1788f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1788f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1788f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1788f8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1788F8u;
    SET_GPR_U32(ctx, 31, 0x178900u);
    ctx->pc = 0x1788FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788F8u;
    // 0x1788fc: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1788F8u, 0x178900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178900u;
label_178900:
    // 0x178900: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178900u;
    SET_GPR_U32(ctx, 31, 0x178908u);
    ctx->pc = 0x178904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178900u;
    // 0x178904: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178900u, 0x178908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178908u;
label_178908:
    // 0x178908: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178908u;
    SET_GPR_U32(ctx, 31, 0x178910u);
    ctx->pc = 0x17890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178908u;
    // 0x17890c: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178908u, 0x178910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178910u;
label_178910:
    // 0x178910: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x178914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178918: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x178918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x17891c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17891cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178920: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178920u;
    SET_GPR_U32(ctx, 31, 0x178928u);
    ctx->pc = 0x178924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178920u;
    // 0x178924: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178920u, 0x178928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178928u;
label_178928:
    // 0x178928: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x178928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x17892c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x178930u;
}
