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

// Function: entry_001fe090
// Address: 0x1fe090 - 0x1fe0d8
void entry_001fe090_0x1fe090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe090_0x1fe090");
#endif

    switch (ctx->pc) {
        case 0x1fe0a8u: goto label_1fe0a8;
        case 0x1fe0d4u: goto label_1fe0d4;
        default: break;
    }

    ctx->pc = 0x1fe090u;

label_1fe090:
    // 0x1fe090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe094:
    // 0x1fe094: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1fe098:
    // 0x1fe098: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1fe09c:
    // 0x1fe09c: 0x539024  and         $s2, $v0, $s3
    ctx->pc = 0x1fe09cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_1fe0a0:
    // 0x1fe0a0: 0x2a0f809  jalr        $s5
label_1fe0a4:
    if (ctx->pc == 0x1FE0A4u) {
        ctx->pc = 0x1FE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0A0u;
        // 0x1fe0a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0A8u;
        goto label_1fe0a8;
    }
    ctx->pc = 0x1FE0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1FE0A8u);
        ctx->pc = 0x1FE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0A0u;
        // 0x1fe0a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE0A0u, 0x1FE0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE0A8u;
label_1fe0a8:
    // 0x1fe0a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe0ac:
    // 0x1fe0ac: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_1fe0b0:
    if (ctx->pc == 0x1FE0B0u) {
        ctx->pc = 0x1FE0B4u;
        goto label_1fe0b4;
    }
    ctx->pc = 0x1FE0ACu;
    {
        const bool branch_taken_0x1fe0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe0ac) {
            ctx->pc = 0x1FE12Cu;
            return;
        }
    }
    ctx->pc = 0x1FE0B4u;
label_1fe0b4:
    // 0x1fe0b4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fe0b8:
    // 0x1fe0b8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1fe0bc:
    if (ctx->pc == 0x1FE0BCu) {
        ctx->pc = 0x1FE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0B8u;
        // 0x1fe0bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0C0u;
        goto label_1fe0c0;
    }
    ctx->pc = 0x1FE0B8u;
    {
        const bool branch_taken_0x1fe0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0B8u;
        // 0x1fe0bc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0b8) {
            ctx->pc = 0x1FE0D8u;
            return;
        }
    }
    ctx->pc = 0x1FE0C0u;
label_1fe0c0:
    // 0x1fe0c0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1fe0c4:
    // 0x1fe0c4: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
label_1fe0c8:
    if (ctx->pc == 0x1FE0C8u) {
        ctx->pc = 0x1FE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0C4u;
        // 0x1fe0c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0CCu;
        goto label_1fe0cc;
    }
    ctx->pc = 0x1FE0C4u;
    {
        const bool branch_taken_0x1fe0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe0c4) {
            ctx->pc = 0x1FE0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE0C4u;
            // 0x1fe0c8: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE0D8u;
            return;
        }
    }
    ctx->pc = 0x1FE0CCu;
label_1fe0cc:
    // 0x1fe0cc: 0xc07f62a  jal         func_1FD8A8
label_1fe0d0:
    if (ctx->pc == 0x1FE0D0u) {
        ctx->pc = 0x1FE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0CCu;
        // 0x1fe0d0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE0D4u;
        goto label_1fe0d4;
    }
    ctx->pc = 0x1FE0CCu;
    SET_GPR_U32(ctx, 31, 0x1FE0D4u);
    ctx->pc = 0x1FE0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0CCu;
    // 0x1fe0d0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FE0CCu, 0x1FE0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0D4u;
label_1fe0d4:
    // 0x1fe0d4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fe0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x1fe0d8u;
}
