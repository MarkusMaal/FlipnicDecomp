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

// Function: entry_00176da8
// Address: 0x176da8 - 0x176df0
void entry_00176da8_0x176da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176da8_0x176da8");
#endif

    switch (ctx->pc) {
        case 0x176dc0u: goto label_176dc0;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dd0u: goto label_176dd0;
        case 0x176de8u: goto label_176de8;
        default: break;
    }

    ctx->pc = 0x176da8u;

    // 0x176da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x176da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x176dac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x176dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x176db0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x176db4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x176db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176db8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x176DB8u;
    SET_GPR_U32(ctx, 31, 0x176DC0u);
    ctx->pc = 0x176DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DB8u;
    // 0x176dbc: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x176DB8u, 0x176DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DC0u;
label_176dc0:
    // 0x176dc0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x176DC0u;
    SET_GPR_U32(ctx, 31, 0x176DC8u);
    ctx->pc = 0x176DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DC0u;
    // 0x176dc4: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x176DC0u, 0x176DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DC8u;
label_176dc8:
    // 0x176dc8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x176DC8u;
    SET_GPR_U32(ctx, 31, 0x176DD0u);
    ctx->pc = 0x176DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DC8u;
    // 0x176dcc: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x176DC8u, 0x176DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DD0u;
label_176dd0:
    // 0x176dd0: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x176dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x176dd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176dd8: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x176dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x176ddc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x176ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176de0: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x176DE0u;
    SET_GPR_U32(ctx, 31, 0x176DE8u);
    ctx->pc = 0x176DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176DE0u;
    // 0x176de4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x176DE0u, 0x176DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176DE8u;
label_176de8:
    // 0x176de8: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x176de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x176dec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x176df0u;
}
