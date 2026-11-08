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

// Function: entry_001a8ad8
// Address: 0x1a8ad8 - 0x1a8b54
void entry_001a8ad8_0x1a8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ad8_0x1a8ad8");
#endif

    switch (ctx->pc) {
        case 0x1a8b40u: goto label_1a8b40;
        case 0x1a8b4cu: goto label_1a8b4c;
        default: break;
    }

    ctx->pc = 0x1a8ad8u;

    // 0x1a8ad8: 0xae800a94  sw          $zero, 0xA94($s4)
    ctx->pc = 0x1a8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2708), GPR_U32(ctx, 0));
    // 0x1a8adc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1a8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1a8ae0: 0xae800a98  sw          $zero, 0xA98($s4)
    ctx->pc = 0x1a8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2712), GPR_U32(ctx, 0));
    // 0x1a8ae4: 0x24422c38  addiu       $v0, $v0, 0x2C38
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11320));
    // 0x1a8ae8: 0xae800a9c  sw          $zero, 0xA9C($s4)
    ctx->pc = 0x1a8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2716), GPR_U32(ctx, 0));
    // 0x1a8aec: 0xa2800aa0  sb          $zero, 0xAA0($s4)
    ctx->pc = 0x1a8aecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2720), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8af0: 0xae800aa4  sw          $zero, 0xAA4($s4)
    ctx->pc = 0x1a8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2724), GPR_U32(ctx, 0));
    // 0x1a8af4: 0xae800aa8  sw          $zero, 0xAA8($s4)
    ctx->pc = 0x1a8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2728), GPR_U32(ctx, 0));
    // 0x1a8af8: 0xa2800aac  sb          $zero, 0xAAC($s4)
    ctx->pc = 0x1a8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2732), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8afc: 0xae800ab0  sw          $zero, 0xAB0($s4)
    ctx->pc = 0x1a8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2736), GPR_U32(ctx, 0));
    // 0x1a8b00: 0xae800ab4  sw          $zero, 0xAB4($s4)
    ctx->pc = 0x1a8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2740), GPR_U32(ctx, 0));
    // 0x1a8b04: 0xa2800ab8  sb          $zero, 0xAB8($s4)
    ctx->pc = 0x1a8b04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8b08: 0xae800abc  sw          $zero, 0xABC($s4)
    ctx->pc = 0x1a8b08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2748), GPR_U32(ctx, 0));
    // 0x1a8b0c: 0xae800ac0  sw          $zero, 0xAC0($s4)
    ctx->pc = 0x1a8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2752), GPR_U32(ctx, 0));
    // 0x1a8b10: 0xa2800ac4  sb          $zero, 0xAC4($s4)
    ctx->pc = 0x1a8b10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8b14: 0xae800ac8  sw          $zero, 0xAC8($s4)
    ctx->pc = 0x1a8b14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2760), GPR_U32(ctx, 0));
    // 0x1a8b18: 0xae800acc  sw          $zero, 0xACC($s4)
    ctx->pc = 0x1a8b18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2764), GPR_U32(ctx, 0));
    // 0x1a8b1c: 0xa2800ad0  sb          $zero, 0xAD0($s4)
    ctx->pc = 0x1a8b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2768), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8b20: 0xae800ad4  sw          $zero, 0xAD4($s4)
    ctx->pc = 0x1a8b20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2772), GPR_U32(ctx, 0));
    // 0x1a8b24: 0xae800ad8  sw          $zero, 0xAD8($s4)
    ctx->pc = 0x1a8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2776), GPR_U32(ctx, 0));
    // 0x1a8b28: 0xa2800adc  sb          $zero, 0xADC($s4)
    ctx->pc = 0x1a8b28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2780), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a8b2c: 0x8e8309b4  lw          $v1, 0x9B4($s4)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a8b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a8b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8b38: 0xc046458  jal         func_119160
    ctx->pc = 0x1A8B38u;
    SET_GPR_U32(ctx, 31, 0x1A8B40u);
    ctx->pc = 0x1A8B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B38u;
    // 0x1a8b3c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x1A8B38u, 0x1A8B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B40u;
label_1a8b40:
    // 0x1a8b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b44: 0xc069b8c  jal         func_1A6E30
    ctx->pc = 0x1A8B44u;
    SET_GPR_U32(ctx, 31, 0x1A8B4Cu);
    ctx->pc = 0x1A8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8B44u;
    // 0x1a8b48: 0x26840a90  addiu       $a0, $s4, 0xA90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E30u, 0x1A8B44u, 0x1A8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8B4Cu;
label_1a8b4c:
    // 0x1a8b4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8b50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1a8b54u;
}
