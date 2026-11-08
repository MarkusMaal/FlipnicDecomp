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

// Function: entry_00121f60
// Address: 0x121f60 - 0x121fa0
void entry_00121f60_0x121f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f60_0x121f60");
#endif

    switch (ctx->pc) {
        case 0x121f7cu: goto label_121f7c;
        case 0x121f88u: goto label_121f88;
        default: break;
    }

    ctx->pc = 0x121f60u;

label_121f60:
    // 0x121f60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x121f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121f64:
    // 0x121f64: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_121f68:
    if (ctx->pc == 0x121F68u) {
        ctx->pc = 0x121F6Cu;
        goto label_121f6c;
    }
    ctx->pc = 0x121F64u;
    {
        const bool branch_taken_0x121f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121f64) {
            ctx->pc = 0x121FA0u;
            return;
        }
    }
    ctx->pc = 0x121F6Cu;
label_121f6c:
    // 0x121f6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121f70:
    // 0x121f70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x121f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_121f74:
    // 0x121f74: 0x320f809  jalr        $t9
label_121f78:
    if (ctx->pc == 0x121F78u) {
        ctx->pc = 0x121F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F74u;
        // 0x121f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F7Cu;
        goto label_121f7c;
    }
    ctx->pc = 0x121F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121F7Cu);
        ctx->pc = 0x121F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F74u;
        // 0x121f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F74u, 0x121F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121F7Cu;
label_121f7c:
    // 0x121f7c: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x121f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_121f80:
    // 0x121f80: 0xc047d50  jal         func_11F540
label_121f84:
    if (ctx->pc == 0x121F84u) {
        ctx->pc = 0x121F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F80u;
        // 0x121f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F88u;
        goto label_121f88;
    }
    ctx->pc = 0x121F80u;
    SET_GPR_U32(ctx, 31, 0x121F88u);
    ctx->pc = 0x121F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F80u;
    // 0x121f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F540u, 0x121F80u, 0x121F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F88u;
label_121f88:
    // 0x121f88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121f8c:
    // 0x121f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121f90:
    // 0x121f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121f94:
    // 0x121f94: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x121f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_121f98:
    // 0x121f98: 0x320f809  jalr        $t9
label_121f9c:
    if (ctx->pc == 0x121F9Cu) {
        ctx->pc = 0x121F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F98u;
        // 0x121f9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FA0u;
        goto label_fallthrough_0x121f98;
    }
    ctx->pc = 0x121F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121FA0u);
        ctx->pc = 0x121F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F98u;
        // 0x121f9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F98u, 0x121FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x121f98:
    ctx->pc = 0x121FA0u;
}
