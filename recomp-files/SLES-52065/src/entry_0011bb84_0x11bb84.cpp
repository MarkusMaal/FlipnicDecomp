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

// Function: entry_0011bb84
// Address: 0x11bb84 - 0x11bbdc
void entry_0011bb84_0x11bb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb84_0x11bb84");
#endif

    switch (ctx->pc) {
        case 0x11bb94u: goto label_11bb94;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bbb4u: goto label_11bbb4;
        case 0x11bbc4u: goto label_11bbc4;
        case 0x11bbd8u: goto label_11bbd8;
        default: break;
    }

    ctx->pc = 0x11bb84u;

    // 0x11bb84: 0x8e020524  lw          $v0, 0x524($s0)
    ctx->pc = 0x11bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bb88: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11bb8c: 0xc046efc  jal         func_11BBF0
    ctx->pc = 0x11BB8Cu;
    SET_GPR_U32(ctx, 31, 0x11BB94u);
    ctx->pc = 0x11BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB8Cu;
    // 0x11bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BBF0u, 0x11BB8Cu, 0x11BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB94u;
label_11bb94:
    // 0x11bb94: 0x1112c0  sll         $v0, $s1, 11
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x11bb98: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11bb9c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11BB9Cu;
    SET_GPR_U32(ctx, 31, 0x11BBA4u);
    ctx->pc = 0x11BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB9Cu;
    // 0x11bba0: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11BB9Cu, 0x11BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBA4u;
label_11bba4:
    // 0x11bba4: 0xae020524  sw          $v0, 0x524($s0)
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 2));
    // 0x11bba8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bbac: 0xc080702  jal         func_201C08
    ctx->pc = 0x11BBACu;
    SET_GPR_U32(ctx, 31, 0x11BBB4u);
    ctx->pc = 0x11BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBACu;
    // 0x11bbb0: 0x26050264  addiu       $a1, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11BBACu, 0x11BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBB4u;
label_11bbb4:
    // 0x11bbb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11bbb8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11bbbc: 0xc080664  jal         func_201990
    ctx->pc = 0x11BBBCu;
    SET_GPR_U32(ctx, 31, 0x11BBC4u);
    ctx->pc = 0x11BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBBCu;
    // 0x11bbc0: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11BBBCu, 0x11BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBC4u;
label_11bbc4:
    // 0x11bbc4: 0x8e060524  lw          $a2, 0x524($s0)
    ctx->pc = 0x11bbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x11bbc8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbd0: 0xc047948  jal         func_11E520
    ctx->pc = 0x11BBD0u;
    SET_GPR_U32(ctx, 31, 0x11BBD8u);
    ctx->pc = 0x11BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBD0u;
    // 0x11bbd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E520u, 0x11BBD0u, 0x11BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBD8u;
label_11bbd8:
    // 0x11bbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11bbdcu;
}
