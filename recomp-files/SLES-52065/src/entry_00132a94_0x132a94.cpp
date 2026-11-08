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

// Function: entry_00132a94
// Address: 0x132a94 - 0x132b30
void entry_00132a94_0x132a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a94_0x132a94");
#endif

    switch (ctx->pc) {
        case 0x132aa0u: goto label_132aa0;
        case 0x132aacu: goto label_132aac;
        case 0x132ac8u: goto label_132ac8;
        case 0x132ad0u: goto label_132ad0;
        case 0x132adcu: goto label_132adc;
        case 0x132ae8u: goto label_132ae8;
        case 0x132b0cu: goto label_132b0c;
        case 0x132b28u: goto label_132b28;
        default: break;
    }

    ctx->pc = 0x132a94u;

    // 0x132a94: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a98: 0xc04c554  jal         func_131550
    ctx->pc = 0x132A98u;
    SET_GPR_U32(ctx, 31, 0x132AA0u);
    ctx->pc = 0x132A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A98u;
    // 0x132a9c: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x132A98u, 0x132AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AA0u;
label_132aa0:
    // 0x132aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132aa4: 0xc04c550  jal         func_131540
    ctx->pc = 0x132AA4u;
    SET_GPR_U32(ctx, 31, 0x132AACu);
    ctx->pc = 0x132AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AA4u;
    // 0x132aa8: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x132AA4u, 0x132AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AACu;
label_132aac:
    // 0x132aac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x132aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x132ab0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x132ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x132ab4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x132ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x132ab8: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x132ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132abc: 0x27a70064  addiu       $a3, $sp, 0x64
    ctx->pc = 0x132abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x132ac0: 0xc04cafc  jal         func_132BF0
    ctx->pc = 0x132AC0u;
    SET_GPR_U32(ctx, 31, 0x132AC8u);
    ctx->pc = 0x132AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AC0u;
    // 0x132ac4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BF0u, 0x132AC0u, 0x132AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AC8u;
label_132ac8:
    // 0x132ac8: 0xc04cae4  jal         func_132B90
    ctx->pc = 0x132AC8u;
    SET_GPR_U32(ctx, 31, 0x132AD0u);
    ctx->pc = 0x132ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AC8u;
    // 0x132acc: 0x8fb00060  lw          $s0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B90u, 0x132AC8u, 0x132AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AD0u;
label_132ad0:
    // 0x132ad0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ad4: 0xc04c7b8  jal         func_131EE0
    ctx->pc = 0x132AD4u;
    SET_GPR_U32(ctx, 31, 0x132ADCu);
    ctx->pc = 0x132AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AD4u;
    // 0x132ad8: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EE0u, 0x132AD4u, 0x132ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ADCu;
label_132adc:
    // 0x132adc: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x132adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x132ae0: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x132AE0u;
    SET_GPR_U32(ctx, 31, 0x132AE8u);
    ctx->pc = 0x132AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AE0u;
    // 0x132ae4: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x132AE0u, 0x132AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AE8u;
label_132ae8:
    // 0x132ae8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x132ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x132aec: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x132AECu;
    {
        const bool branch_taken_0x132aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x132AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AECu;
        // 0x132af0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132aec) {
            ctx->pc = 0x132B5Cu;
            return;
        }
    }
    ctx->pc = 0x132AF4u;
    // 0x132af4: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132af8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132AF8u;
    {
        const bool branch_taken_0x132af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AF8u;
        // 0x132afc: 0xafb00050  sw          $s0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132af8) {
            ctx->pc = 0x132B30u;
            return;
        }
    }
    ctx->pc = 0x132B00u;
    // 0x132b00: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132b04: 0xc04ca54  jal         func_132950
    ctx->pc = 0x132B04u;
    SET_GPR_U32(ctx, 31, 0x132B0Cu);
    ctx->pc = 0x132B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B04u;
    // 0x132b08: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x132B04u, 0x132B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B0Cu;
label_132b0c:
    // 0x132b0c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132b10: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132b14: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132b18: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132b1c: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132b20: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132B20u;
    SET_GPR_U32(ctx, 31, 0x132B28u);
    ctx->pc = 0x132B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B20u;
    // 0x132b24: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132B20u, 0x132B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B28u;
label_132b28:
    // 0x132b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b2c: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132b30u;
}
