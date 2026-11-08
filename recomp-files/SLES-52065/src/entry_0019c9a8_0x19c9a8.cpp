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

// Function: entry_0019c9a8
// Address: 0x19c9a8 - 0x19ca10
void entry_0019c9a8_0x19c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c9a8_0x19c9a8");
#endif

    switch (ctx->pc) {
        case 0x19c9ccu: goto label_19c9cc;
        case 0x19c9dcu: goto label_19c9dc;
        case 0x19c9f0u: goto label_19c9f0;
        default: break;
    }

    ctx->pc = 0x19c9a8u;

label_19c9a8:
    // 0x19c9a8: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
label_19c9ac:
    // 0x19c9ac: 0x14660018  bne         $v1, $a2, . + 4 + (0x18 << 2)
label_19c9b0:
    if (ctx->pc == 0x19C9B0u) {
        ctx->pc = 0x19C9B4u;
        goto label_19c9b4;
    }
    ctx->pc = 0x19C9ACu;
    {
        const bool branch_taken_0x19c9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x19c9ac) {
            ctx->pc = 0x19CA10u;
            return;
        }
    }
    ctx->pc = 0x19C9B4u;
label_19c9b4:
    // 0x19c9b4: 0x8e430688  lw          $v1, 0x688($s2)
    ctx->pc = 0x19c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19c9b8:
    // 0x19c9b8: 0x10650015  beq         $v1, $a1, . + 4 + (0x15 << 2)
label_19c9bc:
    if (ctx->pc == 0x19C9BCu) {
        ctx->pc = 0x19C9C0u;
        goto label_19c9c0;
    }
    ctx->pc = 0x19C9B8u;
    {
        const bool branch_taken_0x19c9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19c9b8) {
            ctx->pc = 0x19CA10u;
            return;
        }
    }
    ctx->pc = 0x19C9C0u;
label_19c9c0:
    // 0x19c9c0: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c9c4:
    // 0x19c9c4: 0xc064c20  jal         func_193080
label_19c9c8:
    if (ctx->pc == 0x19C9C8u) {
        ctx->pc = 0x19C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9C4u;
        // 0x19c9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9CCu;
        goto label_19c9cc;
    }
    ctx->pc = 0x19C9C4u;
    SET_GPR_U32(ctx, 31, 0x19C9CCu);
    ctx->pc = 0x19C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9C4u;
    // 0x19c9c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19C9C4u, 0x19C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9CCu;
label_19c9cc:
    // 0x19c9cc: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19c9d0:
    // 0x19c9d0: 0x8e460688  lw          $a2, 0x688($s2)
    ctx->pc = 0x19c9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19c9d4:
    // 0x19c9d4: 0xc064c4c  jal         func_193130
label_19c9d8:
    if (ctx->pc == 0x19C9D8u) {
        ctx->pc = 0x19C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D4u;
        // 0x19c9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9DCu;
        goto label_19c9dc;
    }
    ctx->pc = 0x19C9D4u;
    SET_GPR_U32(ctx, 31, 0x19C9DCu);
    ctx->pc = 0x19C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9D4u;
    // 0x19c9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19C9D4u, 0x19C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9DCu;
label_19c9dc:
    // 0x19c9dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19c9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c9e0:
    // 0x19c9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c9e4:
    // 0x19c9e4: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19c9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19c9e8:
    // 0x19c9e8: 0x320f809  jalr        $t9
label_19c9ec:
    if (ctx->pc == 0x19C9ECu) {
        ctx->pc = 0x19C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9E8u;
        // 0x19c9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9F0u;
        goto label_19c9f0;
    }
    ctx->pc = 0x19C9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19C9F0u);
        ctx->pc = 0x19C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9E8u;
        // 0x19c9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9E8u, 0x19C9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C9F0u;
label_19c9f0:
    // 0x19c9f0: 0x8e440688  lw          $a0, 0x688($s2)
    ctx->pc = 0x19c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19c9f4:
    // 0x19c9f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c9f8:
    // 0x19c9f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19c9fc:
    // 0x19c9fc: 0xae440688  sw          $a0, 0x688($s2)
    ctx->pc = 0x19c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1672), GPR_U32(ctx, 4));
label_19ca00:
    // 0x19ca00: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_19ca04:
    // 0x19ca04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19ca08:
    // 0x19ca08: 0xae440698  sw          $a0, 0x698($s2)
    ctx->pc = 0x19ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 4));
label_19ca0c:
    // 0x19ca0c: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19ca0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
    ctx->pc = 0x19ca10u;
}
