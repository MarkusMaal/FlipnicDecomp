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

// Function: entry_001a2090
// Address: 0x1a2090 - 0x1a2110
void entry_001a2090_0x1a2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2090_0x1a2090");
#endif

    switch (ctx->pc) {
        case 0x1a20bcu: goto label_1a20bc;
        case 0x1a20d4u: goto label_1a20d4;
        case 0x1a20e4u: goto label_1a20e4;
        default: break;
    }

    ctx->pc = 0x1a2090u;

label_1a2090:
    // 0x1a2090: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a2094:
    // 0x1a2094: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a2098:
    // 0x1a2098: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a2098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1a209c:
    // 0x1a209c: 0x8e860694  lw          $a2, 0x694($s4)
    ctx->pc = 0x1a209cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_1a20a0:
    // 0x1a20a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a20a4:
    // 0x1a20a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a20a8:
    // 0x1a20a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a20ac:
    // 0x1a20ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a20b0:
    // 0x1a20b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1a20b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a20b4:
    // 0x1a20b4: 0xc0805c8  jal         func_201720
label_1a20b8:
    if (ctx->pc == 0x1A20B8u) {
        ctx->pc = 0x1A20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20B4u;
        // 0x1a20b8: 0x24a50410  addiu       $a1, $a1, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20BCu;
        goto label_1a20bc;
    }
    ctx->pc = 0x1A20B4u;
    SET_GPR_U32(ctx, 31, 0x1A20BCu);
    ctx->pc = 0x1A20B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20B4u;
    // 0x1a20b8: 0x24a50410  addiu       $a1, $a1, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1A20B4u, 0x1A20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20BCu;
label_1a20bc:
    // 0x1a20bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a20bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a20c0:
    // 0x1a20c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a20c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a20c4:
    // 0x1a20c4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a20c8:
    // 0x1a20c8: 0x8f3900e0  lw          $t9, 0xE0($t9)
    ctx->pc = 0x1a20c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 224)));
label_1a20cc:
    // 0x1a20cc: 0x320f809  jalr        $t9
label_1a20d0:
    if (ctx->pc == 0x1A20D0u) {
        ctx->pc = 0x1A20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20CCu;
        // 0x1a20d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20D4u;
        goto label_1a20d4;
    }
    ctx->pc = 0x1A20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A20D4u);
        ctx->pc = 0x1A20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20CCu;
        // 0x1a20d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20CCu, 0x1A20D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A20D4u;
label_1a20d4:
    // 0x1a20d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a20d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a20d8:
    // 0x1a20d8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a20dc:
    // 0x1a20dc: 0x320f809  jalr        $t9
label_1a20e0:
    if (ctx->pc == 0x1A20E0u) {
        ctx->pc = 0x1A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20DCu;
        // 0x1a20e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20E4u;
        goto label_1a20e4;
    }
    ctx->pc = 0x1A20DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A20E4u);
        ctx->pc = 0x1A20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20DCu;
        // 0x1a20e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A20DCu, 0x1A20E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A20E4u;
label_1a20e4:
    // 0x1a20e4: 0x8e850c7c  lw          $a1, 0xC7C($s4)
    ctx->pc = 0x1a20e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3196)));
label_1a20e8:
    // 0x1a20e8: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1a20ec:
    // 0x1a20ec: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_1a20f0:
    if (ctx->pc == 0x1A20F0u) {
        ctx->pc = 0x1A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20ECu;
        // 0x1a20f0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20F4u;
        goto label_1a20f4;
    }
    ctx->pc = 0x1A20ECu;
    {
        const bool branch_taken_0x1a20ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20ECu;
        // 0x1a20f0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20ec) {
            ctx->pc = 0x1A21CCu;
            return;
        }
    }
    ctx->pc = 0x1A20F4u;
label_1a20f4:
    // 0x1a20f4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1a20f8:
    // 0x1a20f8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a20fc:
    // 0x1a20fc: 0x24840420  addiu       $a0, $a0, 0x420
    ctx->pc = 0x1a20fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
label_1a2100:
    // 0x1a2100: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a2100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2104:
    // 0x1a2104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2108:
    // 0x1a2108: 0x600008  jr          $v1
label_1a210c:
    if (ctx->pc == 0x1A210Cu) {
        ctx->pc = 0x1A2110u;
        goto label_fallthrough_0x1a2108;
    }
    ctx->pc = 0x1A2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a2108:
    ctx->pc = 0x1A2110u;
}
