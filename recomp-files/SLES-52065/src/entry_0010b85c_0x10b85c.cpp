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

// Function: entry_0010b85c
// Address: 0x10b85c - 0x10b8d4
void entry_0010b85c_0x10b85c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b85c_0x10b85c");
#endif

    switch (ctx->pc) {
        case 0x10b88cu: goto label_10b88c;
        case 0x10b898u: goto label_10b898;
        case 0x10b8a4u: goto label_10b8a4;
        default: break;
    }

    ctx->pc = 0x10b85cu;

label_10b85c:
    // 0x10b85c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10b860:
    // 0x10b860: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10b864:
    // 0x10b864: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x10b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_10b868:
    // 0x10b868: 0x24722340  addiu       $s2, $v1, 0x2340
    ctx->pc = 0x10b868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9024));
label_10b86c:
    // 0x10b86c: 0x8c632710  lw          $v1, 0x2710($v1)
    ctx->pc = 0x10b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10000)));
label_10b870:
    // 0x10b870: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_10b874:
    if (ctx->pc == 0x10B874u) {
        ctx->pc = 0x10B878u;
        goto label_10b878;
    }
    ctx->pc = 0x10B870u;
    {
        const bool branch_taken_0x10b870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b870) {
            ctx->pc = 0x10B8F0u;
            return;
        }
    }
    ctx->pc = 0x10B878u;
label_10b878:
    // 0x10b878: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10b878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10b87c:
    // 0x10b87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b880:
    // 0x10b880: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10b880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10b884:
    // 0x10b884: 0x320f809  jalr        $t9
label_10b888:
    if (ctx->pc == 0x10B888u) {
        ctx->pc = 0x10B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B884u;
        // 0x10b888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B88Cu;
        goto label_10b88c;
    }
    ctx->pc = 0x10B884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B88Cu);
        ctx->pc = 0x10B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B884u;
        // 0x10b888: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B884u, 0x10B88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B88Cu;
label_10b88c:
    // 0x10b88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b890:
    // 0x10b890: 0xc042fdc  jal         func_10BF70
label_10b894:
    if (ctx->pc == 0x10B894u) {
        ctx->pc = 0x10B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B890u;
        // 0x10b894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B898u;
        goto label_10b898;
    }
    ctx->pc = 0x10B890u;
    SET_GPR_U32(ctx, 31, 0x10B898u);
    ctx->pc = 0x10B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B890u;
    // 0x10b894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF70u, 0x10B890u, 0x10B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b89c:
    // 0x10b89c: 0xc042fdc  jal         func_10BF70
label_10b8a0:
    if (ctx->pc == 0x10B8A0u) {
        ctx->pc = 0x10B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B89Cu;
        // 0x10b8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B8A4u;
        goto label_10b8a4;
    }
    ctx->pc = 0x10B89Cu;
    SET_GPR_U32(ctx, 31, 0x10B8A4u);
    ctx->pc = 0x10B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B89Cu;
    // 0x10b8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF70u, 0x10B89Cu, 0x10B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8A4u;
label_10b8a4:
    // 0x10b8a4: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x10b8a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_10b8a8:
    // 0x10b8a8: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_10b8ac:
    if (ctx->pc == 0x10B8ACu) {
        ctx->pc = 0x10B8B0u;
        goto label_10b8b0;
    }
    ctx->pc = 0x10B8A8u;
    {
        const bool branch_taken_0x10b8a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b8a8) {
            ctx->pc = 0x10B8D4u;
            return;
        }
    }
    ctx->pc = 0x10B8B0u;
label_10b8b0:
    // 0x10b8b0: 0x8e0201fc  lw          $v0, 0x1FC($s0)
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
label_10b8b4:
    // 0x10b8b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b8b8:
    // 0x10b8b8: 0xae0201fc  sw          $v0, 0x1FC($s0)
    ctx->pc = 0x10b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 2));
label_10b8bc:
    // 0x10b8bc: 0x860201fa  lh          $v0, 0x1FA($s0)
    ctx->pc = 0x10b8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 506)));
label_10b8c0:
    // 0x10b8c0: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x10b8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_10b8c4:
    // 0x10b8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_10b8c8:
    if (ctx->pc == 0x10B8C8u) {
        ctx->pc = 0x10B8CCu;
        goto label_10b8cc;
    }
    ctx->pc = 0x10B8C4u;
    {
        const bool branch_taken_0x10b8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b8c4) {
            ctx->pc = 0x10B8D4u;
            return;
        }
    }
    ctx->pc = 0x10B8CCu;
label_10b8cc:
    // 0x10b8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b8d0:
    // 0x10b8d0: 0xa60201fa  sh          $v0, 0x1FA($s0)
    ctx->pc = 0x10b8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 506), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10b8d4u;
}
