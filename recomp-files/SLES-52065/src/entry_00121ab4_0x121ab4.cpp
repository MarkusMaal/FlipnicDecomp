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

// Function: entry_00121ab4
// Address: 0x121ab4 - 0x121b3c
void entry_00121ab4_0x121ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ab4_0x121ab4");
#endif

    switch (ctx->pc) {
        case 0x121ac0u: goto label_121ac0;
        case 0x121accu: goto label_121acc;
        case 0x121adcu: goto label_121adc;
        case 0x121aecu: goto label_121aec;
        case 0x121afcu: goto label_121afc;
        case 0x121b14u: goto label_121b14;
        case 0x121b20u: goto label_121b20;
        case 0x121b28u: goto label_121b28;
        case 0x121b34u: goto label_121b34;
        default: break;
    }

    ctx->pc = 0x121ab4u;

    // 0x121ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ab8: 0xc049360  jal         func_124D80
    ctx->pc = 0x121AB8u;
    SET_GPR_U32(ctx, 31, 0x121AC0u);
    ctx->pc = 0x121ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AB8u;
    // 0x121abc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x121AB8u, 0x121AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AC0u;
label_121ac0:
    // 0x121ac0: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x121ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121ac4: 0xc048920  jal         func_122480
    ctx->pc = 0x121AC4u;
    SET_GPR_U32(ctx, 31, 0x121ACCu);
    ctx->pc = 0x121AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AC4u;
    // 0x121ac8: 0x27a501c4  addiu       $a1, $sp, 0x1C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121AC4u, 0x121ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ACCu;
label_121acc:
    // 0x121acc: 0x27b1015c  addiu       $s1, $sp, 0x15C
    ctx->pc = 0x121accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x121ad0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121ad4: 0xc080748  jal         func_201D20
    ctx->pc = 0x121AD4u;
    SET_GPR_U32(ctx, 31, 0x121ADCu);
    ctx->pc = 0x121AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AD4u;
    // 0x121ad8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121AD4u, 0x121ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ADCu;
label_121adc:
    // 0x121adc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ae0: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x121ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121ae4: 0xc048884  jal         func_122210
    ctx->pc = 0x121AE4u;
    SET_GPR_U32(ctx, 31, 0x121AECu);
    ctx->pc = 0x121AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AE4u;
    // 0x121ae8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121AE4u, 0x121AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AECu;
label_121aec:
    // 0x121aec: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x121aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x121af0: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x121af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121af4: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121AF4u;
    SET_GPR_U32(ctx, 31, 0x121AFCu);
    ctx->pc = 0x121AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AF4u;
    // 0x121af8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121AF4u, 0x121AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AFCu;
label_121afc:
    // 0x121afc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121b00: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121b04: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x121b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x121b08: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x121b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x121b0c: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121B0Cu;
    SET_GPR_U32(ctx, 31, 0x121B14u);
    ctx->pc = 0x121B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B0Cu;
    // 0x121b10: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121B0Cu, 0x121B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B14u;
label_121b14:
    // 0x121b14: 0x27a40188  addiu       $a0, $sp, 0x188
    ctx->pc = 0x121b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x121b18: 0xc04619c  jal         func_118670
    ctx->pc = 0x121B18u;
    SET_GPR_U32(ctx, 31, 0x121B20u);
    ctx->pc = 0x121B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B18u;
    // 0x121b1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121B18u, 0x121B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B20u;
label_121b20:
    // 0x121b20: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121B20u;
    SET_GPR_U32(ctx, 31, 0x121B28u);
    ctx->pc = 0x121B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B20u;
    // 0x121b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121B20u, 0x121B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B28u;
label_121b28:
    // 0x121b28: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x121b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x121b2c: 0xc04619c  jal         func_118670
    ctx->pc = 0x121B2Cu;
    SET_GPR_U32(ctx, 31, 0x121B34u);
    ctx->pc = 0x121B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B2Cu;
    // 0x121b30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121B2Cu, 0x121B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B34u;
label_121b34:
    // 0x121b34: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x121B34u;
    {
        const bool branch_taken_0x121b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B34u;
        // 0x121b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b34) {
            ctx->pc = 0x121C90u;
            return;
        }
    }
    ctx->pc = 0x121B3Cu;
}
