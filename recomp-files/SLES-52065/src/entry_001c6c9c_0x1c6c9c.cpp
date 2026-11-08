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

// Function: entry_001c6c9c
// Address: 0x1c6c9c - 0x1c6d28
void entry_001c6c9c_0x1c6c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c9c_0x1c6c9c");
#endif

    switch (ctx->pc) {
        case 0x1c6ca4u: goto label_1c6ca4;
        case 0x1c6cbcu: goto label_1c6cbc;
        default: break;
    }

    ctx->pc = 0x1c6c9cu;

    // 0x1c6c9c: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C6C9Cu;
    SET_GPR_U32(ctx, 31, 0x1C6CA4u);
    ctx->pc = 0x1C6CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C9Cu;
    // 0x1c6ca0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C6C9Cu, 0x1C6CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CA4u;
label_1c6ca4:
    // 0x1c6ca4: 0x104002b7  beqz        $v0, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x1C6CA4u;
    {
        const bool branch_taken_0x1c6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CA4u;
        // 0x1c6ca8: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ca4) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6CACu;
    // 0x1c6cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cb4: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C6CB4u;
    SET_GPR_U32(ctx, 31, 0x1C6CBCu);
    ctx->pc = 0x1C6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CB4u;
    // 0x1c6cb8: 0xac20f880  sw          $zero, -0x780($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C6CB4u, 0x1C6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CBCu;
label_1c6cbc:
    // 0x1c6cbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6cc4: 0xa020f8a0  sb          $zero, -0x760($at)
    ctx->pc = 0x1c6cc4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F8A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A0u, _value); } while (0);
    // 0x1c6cc8: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1c6ccc: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C6CCCu;
    {
        const bool branch_taken_0x1c6ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6ccc) {
            ctx->pc = 0x1C6D54u;
            return;
        }
    }
    ctx->pc = 0x1C6CD4u;
    // 0x1c6cd4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1c6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1c6cd8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6cdc: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6CDCu;
    {
        const bool branch_taken_0x1c6cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CDCu;
        // 0x1c6ce0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cdc) {
            ctx->pc = 0x1C6D44u;
            return;
        }
    }
    ctx->pc = 0x1C6CE4u;
    // 0x1c6ce4: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C6CE4u;
    {
        const bool branch_taken_0x1c6ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CE4u;
        // 0x1c6ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ce4) {
            ctx->pc = 0x1C6D34u;
            return;
        }
    }
    ctx->pc = 0x1C6CECu;
    // 0x1c6cec: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6cf0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C6CF0u;
    {
        const bool branch_taken_0x1c6cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CF0u;
        // 0x1c6cf4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cf0) {
            ctx->pc = 0x1C6D30u;
            return;
        }
    }
    ctx->pc = 0x1C6CF8u;
    // 0x1c6cf8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6CF8u;
    {
        const bool branch_taken_0x1c6cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6cf8) {
            ctx->pc = 0x1C6D30u;
            return;
        }
    }
    ctx->pc = 0x1C6D00u;
    // 0x1c6d00: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1c6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1c6d04: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6D04u;
    {
        const bool branch_taken_0x1c6d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D04u;
        // 0x1c6d08: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d04) {
            ctx->pc = 0x1C6D30u;
            return;
        }
    }
    ctx->pc = 0x1C6D0Cu;
    // 0x1c6d0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6D0Cu;
    {
        const bool branch_taken_0x1c6d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d0c) {
            ctx->pc = 0x1C6D30u;
            return;
        }
    }
    ctx->pc = 0x1C6D14u;
    // 0x1c6d14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6d18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D18u;
    {
        const bool branch_taken_0x1c6d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d18) {
            ctx->pc = 0x1C6D28u;
            return;
        }
    }
    ctx->pc = 0x1C6D20u;
    // 0x1c6d20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6D20u;
    {
        const bool branch_taken_0x1c6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d20) {
            ctx->pc = 0x1C6D48u;
            return;
        }
    }
    ctx->pc = 0x1C6D28u;
}
