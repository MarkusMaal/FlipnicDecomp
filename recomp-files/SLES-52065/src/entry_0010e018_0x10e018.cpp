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

// Function: entry_0010e018
// Address: 0x10e018 - 0x10e0a8
void entry_0010e018_0x10e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e018_0x10e018");
#endif

    switch (ctx->pc) {
        case 0x10e060u: goto label_10e060;
        default: break;
    }

    ctx->pc = 0x10e018u;

label_10e018:
    // 0x10e018: 0x8e060220  lw          $a2, 0x220($s0)
    ctx->pc = 0x10e018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e01c:
    // 0x10e01c: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x10e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e020:
    // 0x10e020: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10e020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e024:
    // 0x10e024: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e028:
    // 0x10e028: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x10e028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_10e02c:
    // 0x10e02c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_10e030:
    // 0x10e030: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10e030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_10e034:
    // 0x10e034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10e038:
    // 0x10e038: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10e03c:
    // 0x10e03c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10e040:
    // 0x10e040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e044:
    // 0x10e044: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x10e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10e048:
    // 0x10e048: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x10e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_10e04c:
    // 0x10e04c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10e04cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e050:
    // 0x10e050: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_10e054:
    if (ctx->pc == 0x10E054u) {
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E058u;
        goto label_10e058;
    }
    ctx->pc = 0x10E050u;
    {
        const bool branch_taken_0x10e050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e050) {
            ctx->pc = 0x10E0A8u;
            return;
        }
    }
    ctx->pc = 0x10E058u;
label_10e058:
    // 0x10e058: 0xc043918  jal         func_10E460
label_10e05c:
    if (ctx->pc == 0x10E05Cu) {
        ctx->pc = 0x10E060u;
        goto label_10e060;
    }
    ctx->pc = 0x10E058u;
    SET_GPR_U32(ctx, 31, 0x10E060u);
    ctx->pc = 0x10E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E460u, 0x10E058u, 0x10E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E060u;
label_10e060:
    // 0x10e060: 0x8e070220  lw          $a3, 0x220($s0)
    ctx->pc = 0x10e060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e064:
    // 0x10e064: 0x8e060224  lw          $a2, 0x224($s0)
    ctx->pc = 0x10e064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e068:
    // 0x10e068: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x10e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_10e06c:
    // 0x10e06c: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e070:
    // 0x10e070: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e074:
    // 0x10e074: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x10e074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_10e078:
    // 0x10e078: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x10e078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_10e07c:
    // 0x10e07c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10e080:
    // 0x10e080: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10e084:
    // 0x10e084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e088:
    // 0x10e088: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e08c:
    // 0x10e08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e090:
    // 0x10e090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e094:
    // 0x10e094: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e098:
    // 0x10e098: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10e098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e09c:
    // 0x10e09c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e0a0:
    // 0x10e0a0: 0x320f809  jalr        $t9
label_10e0a4:
    if (ctx->pc == 0x10E0A4u) {
        ctx->pc = 0x10E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A0u;
        // 0x10e0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0A8u;
        goto label_fallthrough_0x10e0a0;
    }
    ctx->pc = 0x10E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E0A8u);
        ctx->pc = 0x10E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A0u;
        // 0x10e0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E0A0u, 0x10E0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10e0a0:
    ctx->pc = 0x10E0A8u;
}
