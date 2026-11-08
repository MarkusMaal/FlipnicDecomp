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

// Function: entry_00136ae4
// Address: 0x136ae4 - 0x136b48
void entry_00136ae4_0x136ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ae4_0x136ae4");
#endif

    switch (ctx->pc) {
        case 0x136aecu: goto label_136aec;
        case 0x136af4u: goto label_136af4;
        case 0x136b08u: goto label_136b08;
        case 0x136b10u: goto label_136b10;
        case 0x136b20u: goto label_136b20;
        default: break;
    }

    ctx->pc = 0x136ae4u;

label_136ae4:
    // 0x136ae4: 0xc053c54  jal         func_14F150
label_136ae8:
    if (ctx->pc == 0x136AE8u) {
        ctx->pc = 0x136AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE4u;
        // 0x136ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AECu;
        goto label_136aec;
    }
    ctx->pc = 0x136AE4u;
    SET_GPR_U32(ctx, 31, 0x136AECu);
    ctx->pc = 0x136AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AE4u;
    // 0x136ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136AE4u, 0x136AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AECu;
label_136aec:
    // 0x136aec: 0xc060b8c  jal         func_182E30
label_136af0:
    if (ctx->pc == 0x136AF0u) {
        ctx->pc = 0x136AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AECu;
        // 0x136af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AF4u;
        goto label_136af4;
    }
    ctx->pc = 0x136AECu;
    SET_GPR_U32(ctx, 31, 0x136AF4u);
    ctx->pc = 0x136AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AECu;
    // 0x136af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182E30u, 0x136AECu, 0x136AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AF4u;
label_136af4:
    // 0x136af4: 0x8e390090  lw          $t9, 0x90($s1)
    ctx->pc = 0x136af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_136af8:
    // 0x136af8: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x136af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_136afc:
    // 0x136afc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x136afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_136b00:
    // 0x136b00: 0x320f809  jalr        $t9
label_136b04:
    if (ctx->pc == 0x136B04u) {
        ctx->pc = 0x136B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B00u;
        // 0x136b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B08u;
        goto label_136b08;
    }
    ctx->pc = 0x136B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136B08u);
        ctx->pc = 0x136B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B00u;
        // 0x136b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B00u, 0x136B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0xc061918  jal         func_186460
label_136b0c:
    if (ctx->pc == 0x136B0Cu) {
        ctx->pc = 0x136B10u;
        goto label_136b10;
    }
    ctx->pc = 0x136B08u;
    SET_GPR_U32(ctx, 31, 0x136B10u);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x136B08u, 0x136B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B10u;
label_136b10:
    // 0x136b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136b14:
    // 0x136b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136b18:
    // 0x136b18: 0xc061968  jal         func_1865A0
label_136b1c:
    if (ctx->pc == 0x136B1Cu) {
        ctx->pc = 0x136B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B18u;
        // 0x136b1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B20u;
        goto label_136b20;
    }
    ctx->pc = 0x136B18u;
    SET_GPR_U32(ctx, 31, 0x136B20u);
    ctx->pc = 0x136B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B18u;
    // 0x136b1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x136B18u, 0x136B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B20u;
label_136b20:
    // 0x136b20: 0x93828560  lbu         $v0, -0x7AA0($gp)
    ctx->pc = 0x136b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935904)));
label_136b24:
    // 0x136b24: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_136b28:
    if (ctx->pc == 0x136B28u) {
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B24u;
        // 0x136b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B2Cu;
        goto label_136b2c;
    }
    ctx->pc = 0x136B24u;
    {
        const bool branch_taken_0x136b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B24u;
        // 0x136b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b24) {
            ctx->pc = 0x136BC0u;
            return;
        }
    }
    ctx->pc = 0x136B2Cu;
label_136b2c:
    // 0x136b2c: 0x8382856c  lb          $v0, -0x7A94($gp)
    ctx->pc = 0x136b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935916)));
label_136b30:
    // 0x136b30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_136b34:
    if (ctx->pc == 0x136B34u) {
        ctx->pc = 0x136B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B30u;
        // 0x136b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B38u;
        goto label_136b38;
    }
    ctx->pc = 0x136B30u;
    {
        const bool branch_taken_0x136b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B30u;
        // 0x136b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b30) {
            ctx->pc = 0x136B48u;
            return;
        }
    }
    ctx->pc = 0x136B38u;
label_136b38:
    // 0x136b38: 0x3c033fcc  lui         $v1, 0x3FCC
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
label_136b3c:
    // 0x136b3c: 0xa382856c  sb          $v0, -0x7A94($gp)
    ctx->pc = 0x136b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935916), (uint8_t)GPR_U32(ctx, 2));
label_136b40:
    // 0x136b40: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x136b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_136b44:
    // 0x136b44: 0xaf828568  sw          $v0, -0x7A98($gp)
    ctx->pc = 0x136b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 2));
    ctx->pc = 0x136b48u;
}
