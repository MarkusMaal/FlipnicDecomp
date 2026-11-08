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

// Function: entry_001b3efc
// Address: 0x1b3efc - 0x1b3f50
void entry_001b3efc_0x1b3efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3efc_0x1b3efc");
#endif

    switch (ctx->pc) {
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f4cu: goto label_1b3f4c;
        default: break;
    }

    ctx->pc = 0x1b3efcu;

    // 0x1b3efc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f04: 0xc080664  jal         func_201990
    ctx->pc = 0x1B3F04u;
    SET_GPR_U32(ctx, 31, 0x1B3F0Cu);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B3F04u, 0x1B3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F0Cu;
label_1b3f0c:
    // 0x1b3f0c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3f14: 0x24a50ce0  addiu       $a1, $a1, 0xCE0
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3296));
    // 0x1b3f18: 0xc080664  jal         func_201990
    ctx->pc = 0x1B3F18u;
    SET_GPR_U32(ctx, 31, 0x1B3F20u);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B3F18u, 0x1B3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F20u;
label_1b3f20:
    // 0x1b3f20: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f24: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x1b3f28: 0xc080664  jal         func_201990
    ctx->pc = 0x1B3F28u;
    SET_GPR_U32(ctx, 31, 0x1B3F30u);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B3F28u, 0x1B3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F30u;
label_1b3f30:
    // 0x1b3f30: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B3F30u;
    SET_GPR_U32(ctx, 31, 0x1B3F38u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B3F30u, 0x1B3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F38u;
label_1b3f38:
    // 0x1b3f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f40: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1b3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1b3f44: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1B3F44u;
    SET_GPR_U32(ctx, 31, 0x1B3F4Cu);
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1B3F44u, 0x1B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F4Cu;
label_1b3f4c:
    // 0x1b3f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1b3f50u;
}
