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

// Function: entry_001a0c14
// Address: 0x1a0c14 - 0x1a0c84
void entry_001a0c14_0x1a0c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0c14_0x1a0c14");
#endif

    switch (ctx->pc) {
        case 0x1a0c44u: goto label_1a0c44;
        case 0x1a0c58u: goto label_1a0c58;
        case 0x1a0c68u: goto label_1a0c68;
        case 0x1a0c7cu: goto label_1a0c7c;
        default: break;
    }

    ctx->pc = 0x1a0c14u;

label_1a0c14:
    // 0x1a0c14: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1a0c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0c18: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1a0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1a0c1c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1a0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1a0c20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1a0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c24: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1a0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1a0c28: 0x24820bbc  addiu       $v0, $a0, 0xBBC
    ctx->pc = 0x1a0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3004));
    // 0x1a0c2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a0c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a0c30: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A0C30u;
    {
        const bool branch_taken_0x1a0c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c30) {
            ctx->pc = 0x1A0C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0c14;
        }
    }
    ctx->pc = 0x1A0C38u;
    // 0x1a0c38: 0x24840760  addiu       $a0, $a0, 0x760
    ctx->pc = 0x1a0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
    // 0x1a0c3c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1A0C44u);
    ctx->pc = 0x1A0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C3Cu;
    // 0x1a0c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A0C3Cu, 0x1A0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C44u;
label_1a0c44:
    // 0x1a0c44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0c4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0c50: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A0C50u;
    SET_GPR_U32(ctx, 31, 0x1A0C58u);
    ctx->pc = 0x1A0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C50u;
    // 0x1a0c54: 0x24440760  addiu       $a0, $v0, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A0C50u, 0x1A0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C58u;
label_1a0c58:
    // 0x1a0c58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c60: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A0C60u;
    SET_GPR_U32(ctx, 31, 0x1A0C68u);
    ctx->pc = 0x1A0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C60u;
    // 0x1a0c64: 0x24440800  addiu       $a0, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A0C60u, 0x1A0C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C68u;
label_1a0c68:
    // 0x1a0c68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a0c6c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0c70: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a0c74: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A0C74u;
    SET_GPR_U32(ctx, 31, 0x1A0C7Cu);
    ctx->pc = 0x1A0C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0C74u;
    // 0x1a0c78: 0x24440800  addiu       $a0, $v0, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A0C74u, 0x1A0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C7Cu;
label_1a0c7c:
    // 0x1a0c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a0c84u;
}
