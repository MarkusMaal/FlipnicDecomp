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

// Function: entry_001c6b04
// Address: 0x1c6b04 - 0x1c6b84
void entry_001c6b04_0x1c6b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6b04_0x1c6b04");
#endif

    switch (ctx->pc) {
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b18u: goto label_1c6b18;
        default: break;
    }

    ctx->pc = 0x1c6b04u;

    // 0x1c6b04: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B04u;
    SET_GPR_U32(ctx, 31, 0x1C6B0Cu);
    ctx->pc = 0x1C6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B04u;
    // 0x1c6b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B04u, 0x1C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0Cu;
label_1c6b0c:
    // 0x1c6b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b10: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6B10u;
    SET_GPR_U32(ctx, 31, 0x1C6B18u);
    ctx->pc = 0x1C6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B10u;
    // 0x1c6b14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6B10u, 0x1C6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B18u;
label_1c6b18:
    // 0x1c6b18: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6b1c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1c6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c6b20: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C6B20u;
    {
        const bool branch_taken_0x1c6b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B20u;
        // 0x1c6b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b20) {
            ctx->pc = 0x1C6C24u;
            return;
        }
    }
    ctx->pc = 0x1C6B28u;
    // 0x1c6b28: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6b2c: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C6B2Cu;
    {
        const bool branch_taken_0x1c6b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B2Cu;
        // 0x1c6b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b2c) {
            ctx->pc = 0x1C6C08u;
            return;
        }
    }
    ctx->pc = 0x1C6B34u;
    // 0x1c6b34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6b38: 0x1065002f  beq         $v1, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C6B38u;
    {
        const bool branch_taken_0x1c6b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B38u;
        // 0x1c6b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b38) {
            ctx->pc = 0x1C6BF8u;
            return;
        }
    }
    ctx->pc = 0x1C6B40u;
    // 0x1c6b40: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c6b44: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6B44u;
    {
        const bool branch_taken_0x1c6b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B44u;
        // 0x1c6b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b44) {
            ctx->pc = 0x1C6BDCu;
            return;
        }
    }
    ctx->pc = 0x1C6B4Cu;
    // 0x1c6b4c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c6b50: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6B50u;
    {
        const bool branch_taken_0x1c6b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B50u;
        // 0x1c6b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b50) {
            ctx->pc = 0x1C6BC0u;
            return;
        }
    }
    ctx->pc = 0x1C6B58u;
    // 0x1c6b58: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1c6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c6b5c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6B5Cu;
    {
        const bool branch_taken_0x1c6b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B5Cu;
        // 0x1c6b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b5c) {
            ctx->pc = 0x1C6BA4u;
            return;
        }
    }
    ctx->pc = 0x1C6B64u;
    // 0x1c6b64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6b68: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6B68u;
    {
        const bool branch_taken_0x1c6b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B68u;
        // 0x1c6b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b68) {
            ctx->pc = 0x1C6B94u;
            return;
        }
    }
    ctx->pc = 0x1C6B70u;
    // 0x1c6b70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6b74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6B74u;
    {
        const bool branch_taken_0x1c6b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B74u;
        // 0x1c6b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b74) {
            ctx->pc = 0x1C6B84u;
            return;
        }
    }
    ctx->pc = 0x1C6B7Cu;
    // 0x1c6b7c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C6B7Cu;
    {
        const bool branch_taken_0x1c6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B7Cu;
        // 0x1c6b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b7c) {
            ctx->pc = 0x1C6C30u;
            return;
        }
    }
    ctx->pc = 0x1C6B84u;
}
