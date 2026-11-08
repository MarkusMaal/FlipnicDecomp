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

// Function: entry_001971f0
// Address: 0x1971f0 - 0x197254
void entry_001971f0_0x1971f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001971f0_0x1971f0");
#endif

    switch (ctx->pc) {
        case 0x197214u: goto label_197214;
        case 0x197220u: goto label_197220;
        case 0x197238u: goto label_197238;
        case 0x19724cu: goto label_19724c;
        default: break;
    }

    ctx->pc = 0x1971f0u;

label_1971f0:
    // 0x1971f0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1971f4:
    // 0x1971f4: 0x8c630674  lw          $v1, 0x674($v1)
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1652)));
label_1971f8:
    // 0x1971f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1971fc:
    // 0x1971fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1971fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197200:
    // 0x197200: 0x8c522cd8  lw          $s2, 0x2CD8($v0)
    ctx->pc = 0x197200u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197204:
    // 0x197204: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_197208:
    // 0x197208: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x197208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_19720c:
    // 0x19720c: 0x320f809  jalr        $t9
label_197210:
    if (ctx->pc == 0x197210u) {
        ctx->pc = 0x197210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19720Cu;
        // 0x197210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197214u;
        goto label_197214;
    }
    ctx->pc = 0x19720Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197214u);
        ctx->pc = 0x197210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19720Cu;
        // 0x197210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19720Cu, 0x197214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197214u;
label_197214:
    // 0x197214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197218:
    // 0x197218: 0xc05ee1c  jal         func_17B870
label_19721c:
    if (ctx->pc == 0x19721Cu) {
        ctx->pc = 0x19721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197218u;
        // 0x19721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197220u;
        goto label_197220;
    }
    ctx->pc = 0x197218u;
    SET_GPR_U32(ctx, 31, 0x197220u);
    ctx->pc = 0x19721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197218u;
    // 0x19721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x197218u, 0x197220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197220u;
label_197220:
    // 0x197220: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x197220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_197224:
    // 0x197224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197228:
    // 0x197228: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19722c:
    // 0x19722c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197230:
    // 0x197230: 0x320f809  jalr        $t9
label_197234:
    if (ctx->pc == 0x197234u) {
        ctx->pc = 0x197234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197230u;
        // 0x197234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197238u;
        goto label_197238;
    }
    ctx->pc = 0x197230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197238u);
        ctx->pc = 0x197234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197230u;
        // 0x197234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197230u, 0x197238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197238u;
label_197238:
    // 0x197238: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19723c:
    // 0x19723c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19723cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197240:
    // 0x197240: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_197244:
    // 0x197244: 0x320f809  jalr        $t9
label_197248:
    if (ctx->pc == 0x197248u) {
        ctx->pc = 0x197248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197244u;
        // 0x197248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19724Cu;
        goto label_19724c;
    }
    ctx->pc = 0x197244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19724Cu);
        ctx->pc = 0x197248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197244u;
        // 0x197248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197244u, 0x19724Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19724Cu;
label_19724c:
    // 0x19724c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19724cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_197250:
    // 0x197250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x197254u;
}
