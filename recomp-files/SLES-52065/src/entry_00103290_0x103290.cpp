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

// Function: entry_00103290
// Address: 0x103290 - 0x1032ec
void entry_00103290_0x103290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103290_0x103290");
#endif

    switch (ctx->pc) {
        case 0x1032acu: goto label_1032ac;
        case 0x1032d0u: goto label_1032d0;
        default: break;
    }

    ctx->pc = 0x103290u;

label_103290:
    // 0x103290: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x103290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_103294:
    // 0x103294: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x103294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_103298:
    // 0x103298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10329c:
    // 0x10329c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032a0:
    // 0x1032a0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1032a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1032a4:
    // 0x1032a4: 0xc04c6dc  jal         func_131B70
label_1032a8:
    if (ctx->pc == 0x1032A8u) {
        ctx->pc = 0x1032A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A4u;
        // 0x1032a8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032ACu;
        goto label_1032ac;
    }
    ctx->pc = 0x1032A4u;
    SET_GPR_U32(ctx, 31, 0x1032ACu);
    ctx->pc = 0x1032A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032A4u;
    // 0x1032a8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x1032A4u, 0x1032ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1032ACu;
label_1032ac:
    // 0x1032ac: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1032acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1032b0:
    // 0x1032b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1032b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1032b4:
    // 0x1032b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1032b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1032b8:
    // 0x1032b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032bc:
    // 0x1032bc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1032bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1032c0:
    // 0x1032c0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1032c4:
    // 0x1032c4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1032c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1032c8:
    // 0x1032c8: 0x320f809  jalr        $t9
label_1032cc:
    if (ctx->pc == 0x1032CCu) {
        ctx->pc = 0x1032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032C8u;
        // 0x1032cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032D0u;
        goto label_1032d0;
    }
    ctx->pc = 0x1032C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1032D0u);
        ctx->pc = 0x1032CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032C8u;
        // 0x1032cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1032C8u, 0x1032D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1032D0u;
label_1032d0:
    // 0x1032d0: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1032d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1032d4:
    // 0x1032d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1032d8:
    // 0x1032d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1032d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032dc:
    // 0x1032dc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1032e0:
    // 0x1032e0: 0x244401e0  addiu       $a0, $v0, 0x1E0
    ctx->pc = 0x1032e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1032e4:
    // 0x1032e4: 0xc07d38e  jal         func_1F4E38
label_1032e8:
    if (ctx->pc == 0x1032E8u) {
        ctx->pc = 0x1032E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E4u;
        // 0x1032e8: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032ECu;
        goto label_fallthrough_0x1032e4;
    }
    ctx->pc = 0x1032E4u;
    SET_GPR_U32(ctx, 31, 0x1032ECu);
    ctx->pc = 0x1032E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1032E4u;
    // 0x1032e8: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1032E4u, 0x1032ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1032e4:
    ctx->pc = 0x1032ECu;
}
