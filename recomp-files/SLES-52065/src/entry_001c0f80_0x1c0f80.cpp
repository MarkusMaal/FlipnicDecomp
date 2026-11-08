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

// Function: entry_001c0f80
// Address: 0x1c0f80 - 0x1c0fbc
void entry_001c0f80_0x1c0f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0f80_0x1c0f80");
#endif

    switch (ctx->pc) {
        case 0x1c0f90u: goto label_1c0f90;
        case 0x1c0fa0u: goto label_1c0fa0;
        case 0x1c0fb0u: goto label_1c0fb0;
        default: break;
    }

    ctx->pc = 0x1c0f80u;

    // 0x1c0f80: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0f84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c0f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f88: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F88u;
    SET_GPR_U32(ctx, 31, 0x1C0F90u);
    ctx->pc = 0x1C0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F88u;
    // 0x1c0f8c: 0x24a53f10  addiu       $a1, $a1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F88u, 0x1C0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F90u;
label_1c0f90:
    // 0x1c0f90: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0f90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f98: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0F98u;
    SET_GPR_U32(ctx, 31, 0x1C0FA0u);
    ctx->pc = 0x1C0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F98u;
    // 0x1c0f9c: 0x24a53f10  addiu       $a1, $a1, 0x3F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0F98u, 0x1C0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FA0u;
label_1c0fa0:
    // 0x1c0fa0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fa4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c0fa8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0FA8u;
    SET_GPR_U32(ctx, 31, 0x1C0FB0u);
    ctx->pc = 0x1C0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FA8u;
    // 0x1c0fac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0FA8u, 0x1C0FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FB0u;
label_1c0fb0:
    // 0x1c0fb0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c0fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0fb4: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1c0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1c0fb8: 0xa040008c  sb          $zero, 0x8C($v0)
    ctx->pc = 0x1c0fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c0fbcu;
}
