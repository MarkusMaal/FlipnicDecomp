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

// Function: entry_001cfe20
// Address: 0x1cfe20 - 0x1cfea8
void entry_001cfe20_0x1cfe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfe20_0x1cfe20");
#endif

    switch (ctx->pc) {
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe90u: goto label_1cfe90;
        default: break;
    }

    ctx->pc = 0x1cfe20u;

    // 0x1cfe20: 0xc073038  jal         func_1CC0E0
    ctx->pc = 0x1CFE20u;
    SET_GPR_U32(ctx, 31, 0x1CFE28u);
    ctx->pc = 0x1CFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE20u;
    // 0x1cfe24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC0E0u, 0x1CFE20u, 0x1CFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE28u;
label_1cfe28:
    // 0x1cfe28: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1cfe28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1cfe2c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CFE2Cu;
    {
        const bool branch_taken_0x1cfe2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfe2c) {
            ctx->pc = 0x1CFEA8u;
            return;
        }
    }
    ctx->pc = 0x1CFE34u;
    // 0x1cfe34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe38: 0xc073048  jal         func_1CC120
    ctx->pc = 0x1CFE38u;
    SET_GPR_U32(ctx, 31, 0x1CFE40u);
    ctx->pc = 0x1CFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE38u;
    // 0x1cfe3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC120u, 0x1CFE38u, 0x1CFE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE40u;
label_1cfe40:
    // 0x1cfe40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cfe40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe48: 0xc072fec  jal         func_1CBFB0
    ctx->pc = 0x1CFE48u;
    SET_GPR_U32(ctx, 31, 0x1CFE50u);
    ctx->pc = 0x1CFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE48u;
    // 0x1cfe4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFB0u, 0x1CFE48u, 0x1CFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE50u;
label_1cfe50:
    // 0x1cfe50: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x1cfe50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1cfe54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe58: 0xc072fdc  jal         func_1CBF70
    ctx->pc = 0x1CFE58u;
    SET_GPR_U32(ctx, 31, 0x1CFE60u);
    ctx->pc = 0x1CFE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE58u;
    // 0x1cfe5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF70u, 0x1CFE58u, 0x1CFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE60u;
label_1cfe60:
    // 0x1cfe60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cfe60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe68: 0xc072ffc  jal         func_1CBFF0
    ctx->pc = 0x1CFE68u;
    SET_GPR_U32(ctx, 31, 0x1CFE70u);
    ctx->pc = 0x1CFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE68u;
    // 0x1cfe6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBFF0u, 0x1CFE68u, 0x1CFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE70u;
label_1cfe70:
    // 0x1cfe70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe74: 0xc07300c  jal         func_1CC030
    ctx->pc = 0x1CFE74u;
    SET_GPR_U32(ctx, 31, 0x1CFE7Cu);
    ctx->pc = 0x1CFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE74u;
    // 0x1cfe78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC030u, 0x1CFE74u, 0x1CFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE7Cu;
label_1cfe7c:
    // 0x1cfe7c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1cfe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1cfe80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cfe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe88: 0xc072fcc  jal         func_1CBF30
    ctx->pc = 0x1CFE88u;
    SET_GPR_U32(ctx, 31, 0x1CFE90u);
    ctx->pc = 0x1CFE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE88u;
    // 0x1cfe8c: 0x24c631c8  addiu       $a2, $a2, 0x31C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBF30u, 0x1CFE88u, 0x1CFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE90u;
label_1cfe90:
    // 0x1cfe90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfe90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfe94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cfe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe98: 0xac33fb50  sw          $s3, -0x4B0($at)
    ctx->pc = 0x1cfe98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x36FB50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB50u, _value); } while (0);
    // 0x1cfe9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cfe9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cfea0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1CFEA0u;
    {
        const bool branch_taken_0x1cfea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEA0u;
        // 0x1cfea4: 0xa023fb48  sb          $v1, -0x4B8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966088), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfea0) {
            ctx->pc = 0x1CFFD0u;
            return;
        }
    }
    ctx->pc = 0x1CFEA8u;
}
