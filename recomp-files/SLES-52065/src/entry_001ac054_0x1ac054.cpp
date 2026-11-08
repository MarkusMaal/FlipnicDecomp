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

// Function: entry_001ac054
// Address: 0x1ac054 - 0x1ac0c8
void entry_001ac054_0x1ac054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac054_0x1ac054");
#endif

    switch (ctx->pc) {
        case 0x1ac078u: goto label_1ac078;
        case 0x1ac08cu: goto label_1ac08c;
        case 0x1ac09cu: goto label_1ac09c;
        default: break;
    }

    ctx->pc = 0x1ac054u;

label_1ac054:
    // 0x1ac054: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ac054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ac058:
    // 0x1ac058: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ac058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ac05c:
    // 0x1ac05c: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1ac05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1ac060:
    // 0x1ac060: 0xae220800  sw          $v0, 0x800($s1)
    ctx->pc = 0x1ac060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 2));
label_1ac064:
    // 0x1ac064: 0x8e240800  lw          $a0, 0x800($s1)
    ctx->pc = 0x1ac064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac068:
    // 0x1ac068: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ac06c:
    // 0x1ac06c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ac06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ac070:
    // 0x1ac070: 0x320f809  jalr        $t9
label_1ac074:
    if (ctx->pc == 0x1AC074u) {
        ctx->pc = 0x1AC078u;
        goto label_1ac078;
    }
    ctx->pc = 0x1AC070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AC078u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC070u, 0x1AC078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC078u;
label_1ac078:
    // 0x1ac078: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
label_1ac07c:
    // 0x1ac07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac080:
    // 0x1ac080: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ac080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ac084:
    // 0x1ac084: 0xc064228  jal         func_1908A0
label_1ac088:
    if (ctx->pc == 0x1AC088u) {
        ctx->pc = 0x1AC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC084u;
        // 0x1ac088: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC08Cu;
        goto label_1ac08c;
    }
    ctx->pc = 0x1AC084u;
    SET_GPR_U32(ctx, 31, 0x1AC08Cu);
    ctx->pc = 0x1AC088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC084u;
    // 0x1ac088: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1AC084u, 0x1AC08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC08Cu;
label_1ac08c:
    // 0x1ac08c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ac08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ac090:
    // 0x1ac090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac094:
    // 0x1ac094: 0xc0642e0  jal         func_190B80
label_1ac098:
    if (ctx->pc == 0x1AC098u) {
        ctx->pc = 0x1AC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC094u;
        // 0x1ac098: 0x24a509b8  addiu       $a1, $a1, 0x9B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC09Cu;
        goto label_1ac09c;
    }
    ctx->pc = 0x1AC094u;
    SET_GPR_U32(ctx, 31, 0x1AC09Cu);
    ctx->pc = 0x1AC098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC094u;
    // 0x1ac098: 0x24a509b8  addiu       $a1, $a1, 0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1AC094u, 0x1AC09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC09Cu;
label_1ac09c:
    // 0x1ac09c: 0xae2206ec  sw          $v0, 0x6EC($s1)
    ctx->pc = 0x1ac09cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1772), GPR_U32(ctx, 2));
label_1ac0a0:
    // 0x1ac0a0: 0xae2006e8  sw          $zero, 0x6E8($s1)
    ctx->pc = 0x1ac0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1768), GPR_U32(ctx, 0));
label_1ac0a4:
    // 0x1ac0a4: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x1ac0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_1ac0a8:
    // 0x1ac0a8: 0x8e230664  lw          $v1, 0x664($s1)
    ctx->pc = 0x1ac0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
label_1ac0ac:
    // 0x1ac0ac: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1ac0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1ac0b0:
    // 0x1ac0b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ac0b4:
    // 0x1ac0b4: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x1ac0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1ac0b8:
    // 0x1ac0b8: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x1ac0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ac0bc:
    // 0x1ac0bc: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x1ac0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ac0c0:
    // 0x1ac0c0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1ac0c4:
    if (ctx->pc == 0x1AC0C4u) {
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C0u;
        // 0x1ac0c4: 0x24720040  addiu       $s2, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC0C8u;
        goto label_fallthrough_0x1ac0c0;
    }
    ctx->pc = 0x1AC0C0u;
    {
        const bool branch_taken_0x1ac0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0C0u;
        // 0x1ac0c4: 0x24720040  addiu       $s2, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0c0) {
            ctx->pc = 0x1AC154u;
            return;
        }
    }
label_fallthrough_0x1ac0c0:
    ctx->pc = 0x1AC0C8u;
}
