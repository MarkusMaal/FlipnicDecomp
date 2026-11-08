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

// Function: entry_001a4fd8
// Address: 0x1a4fd8 - 0x1a5078
void entry_001a4fd8_0x1a4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fd8_0x1a4fd8");
#endif

    switch (ctx->pc) {
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a5068u: goto label_1a5068;
        default: break;
    }

    ctx->pc = 0x1a4fd8u;

label_1a4fd8:
    // 0x1a4fd8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a4fdc:
    // 0x1a4fdc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4fe0:
    // 0x1a4fe0: 0xc057040  jal         func_15C100
label_1a4fe4:
    if (ctx->pc == 0x1A4FE4u) {
        ctx->pc = 0x1A4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE0u;
        // 0x1a4fe4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FE8u;
        goto label_1a4fe8;
    }
    ctx->pc = 0x1A4FE0u;
    SET_GPR_U32(ctx, 31, 0x1A4FE8u);
    ctx->pc = 0x1A4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FE0u;
    // 0x1a4fe4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A4FE0u, 0x1A4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FE8u;
label_1a4fe8:
    // 0x1a4fe8: 0x8e650680  lw          $a1, 0x680($s3)
    ctx->pc = 0x1a4fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a4fec:
    // 0x1a4fec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4ff0:
    // 0x1a4ff0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a4ff4:
    // 0x1a4ff4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a4ff8:
    // 0x1a4ff8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a4ffc:
    // 0x1a4ffc: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1a4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1a5000:
    // 0x1a5000: 0xac820684  sw          $v0, 0x684($a0)
    ctx->pc = 0x1a5000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1668), GPR_U32(ctx, 2));
label_1a5004:
    // 0x1a5004: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1a5004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a5008:
    // 0x1a5008: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a500c:
    // 0x1a500c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a5010:
    // 0x1a5010: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5014:
    // 0x1a5014: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a5018:
    // 0x1a5018: 0xac50068c  sw          $s0, 0x68C($v0)
    ctx->pc = 0x1a5018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1676), GPR_U32(ctx, 16));
label_1a501c:
    // 0x1a501c: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a5020:
    // 0x1a5020: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a5024:
    // 0x1a5024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a5028:
    // 0x1a5028: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a502c:
    // 0x1a502c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a5030:
    // 0x1a5030: 0xac400688  sw          $zero, 0x688($v0)
    ctx->pc = 0x1a5030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1672), GPR_U32(ctx, 0));
label_1a5034:
    // 0x1a5034: 0x8e640680  lw          $a0, 0x680($s3)
    ctx->pc = 0x1a5034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a5038:
    // 0x1a5038: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a503c:
    // 0x1a503c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a5040:
    // 0x1a5040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5044:
    // 0x1a5044: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1a5048:
    // 0x1a5048: 0xac400690  sw          $zero, 0x690($v0)
    ctx->pc = 0x1a5048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1680), GPR_U32(ctx, 0));
label_1a504c:
    // 0x1a504c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a5050:
    // 0x1a5050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a5054:
    // 0x1a5054: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a5054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a5058:
    // 0x1a5058: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a5058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a505c:
    // 0x1a505c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1a505cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1a5060:
    // 0x1a5060: 0x320f809  jalr        $t9
label_1a5064:
    if (ctx->pc == 0x1A5064u) {
        ctx->pc = 0x1A5068u;
        goto label_1a5068;
    }
    ctx->pc = 0x1A5060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A5068u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5060u, 0x1A5068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5068u;
label_1a5068:
    // 0x1a5068: 0x8e620680  lw          $v0, 0x680($s3)
    ctx->pc = 0x1a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1664)));
label_1a506c:
    // 0x1a506c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5070:
    // 0x1a5070: 0x10000016  b           . + 4 + (0x16 << 2)
label_1a5074:
    if (ctx->pc == 0x1A5074u) {
        ctx->pc = 0x1A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5070u;
        // 0x1a5074: 0xae620680  sw          $v0, 0x680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5078u;
        goto label_fallthrough_0x1a5070;
    }
    ctx->pc = 0x1A5070u;
    {
        const bool branch_taken_0x1a5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5070u;
        // 0x1a5074: 0xae620680  sw          $v0, 0x680($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5070) {
            ctx->pc = 0x1A50CCu;
            return;
        }
    }
label_fallthrough_0x1a5070:
    ctx->pc = 0x1A5078u;
}
