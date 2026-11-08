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

// Function: entry_001fca10
// Address: 0x1fca10 - 0x1fca98
void entry_001fca10_0x1fca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fca10_0x1fca10");
#endif

    switch (ctx->pc) {
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca88u: goto label_1fca88;
        default: break;
    }

    ctx->pc = 0x1fca10u;

    // 0x1fca10: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FCA10u;
    SET_GPR_U32(ctx, 31, 0x1FCA18u);
    ctx->pc = 0x1FCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA10u;
    // 0x1fca14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FCA10u, 0x1FCA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA18u;
label_1fca18:
    // 0x1fca18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fca18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca1c: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FCA1Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA24u);
    ctx->pc = 0x1FCA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA1Cu;
    // 0x1fca20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FCA1Cu, 0x1FCA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA24u;
label_1fca24:
    // 0x1fca24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca28: 0xc082014  jal         func_208050
    ctx->pc = 0x1FCA28u;
    SET_GPR_U32(ctx, 31, 0x1FCA30u);
    ctx->pc = 0x1FCA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA28u;
    // 0x1fca2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FCA28u, 0x1FCA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA30u;
label_1fca30:
    // 0x1fca30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca34: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fca38: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fca38u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fca3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca40: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FCA40u;
    {
        const bool branch_taken_0x1fca40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA40u;
        // 0x1fca44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca40) {
            ctx->pc = 0x1FC9F8u;
            return;
        }
    }
    ctx->pc = 0x1FCA48u;
    // 0x1fca48: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1fca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1fca4c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fca50: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1FCA50u;
    SET_GPR_U32(ctx, 31, 0x1FCA58u);
    ctx->pc = 0x1FCA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA50u;
    // 0x1fca54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1FCA50u, 0x1FCA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA58u;
label_1fca58:
    // 0x1fca58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca5c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCA5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA64u);
    ctx->pc = 0x1FCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA5Cu;
    // 0x1fca60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCA5Cu, 0x1FCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA64u;
label_1fca64:
    // 0x1fca64: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1FCA64u;
    {
        const bool branch_taken_0x1fca64 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fca64) {
            ctx->pc = 0x1FCA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA64u;
            // 0x1fca68: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC10u;
            return;
        }
    }
    ctx->pc = 0x1FCA6Cu;
    // 0x1fca6c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1fca6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1fca70: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fca74: 0xc082014  jal         func_208050
    ctx->pc = 0x1FCA74u;
    SET_GPR_U32(ctx, 31, 0x1FCA7Cu);
    ctx->pc = 0x1FCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA74u;
    // 0x1fca78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FCA74u, 0x1FCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA7Cu;
label_1fca7c:
    // 0x1fca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca80: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FCA80u;
    SET_GPR_U32(ctx, 31, 0x1FCA88u);
    ctx->pc = 0x1FCA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA80u;
    // 0x1fca84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FCA80u, 0x1FCA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA88u;
label_1fca88:
    // 0x1fca88: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCA88u;
    {
        const bool branch_taken_0x1fca88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA88u;
        // 0x1fca8c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca88) {
            ctx->pc = 0x1FCAC0u;
            return;
        }
    }
    ctx->pc = 0x1FCA90u;
    // 0x1fca90: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x1fca90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1fca94: 0x0  nop
    ctx->pc = 0x1fca94u;
    // NOP
    ctx->pc = 0x1fca98u;
}
