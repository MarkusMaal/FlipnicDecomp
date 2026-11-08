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

// Function: entry_001a61d0
// Address: 0x1a61d0 - 0x1a6220
void entry_001a61d0_0x1a61d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a61d0_0x1a61d0");
#endif

    switch (ctx->pc) {
        case 0x1a61f8u: goto label_1a61f8;
        default: break;
    }

    ctx->pc = 0x1a61d0u;

label_1a61d0:
    // 0x1a61d0: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x1a61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_1a61d4:
    // 0x1a61d4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a61d8:
    // 0x1a61d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a61d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a61dc:
    // 0x1a61dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a61e0:
    // 0x1a61e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a61e4:
    // 0x1a61e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a61e8:
    // 0x1a61e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a61e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a61ec:
    // 0x1a61ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a61f0:
    // 0x1a61f0: 0x320f809  jalr        $t9
label_1a61f4:
    if (ctx->pc == 0x1A61F4u) {
        ctx->pc = 0x1A61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F0u;
        // 0x1a61f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61F8u;
        goto label_1a61f8;
    }
    ctx->pc = 0x1A61F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A61F8u);
        ctx->pc = 0x1A61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F0u;
        // 0x1a61f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61F0u, 0x1A61F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A61F8u;
label_1a61f8:
    // 0x1a61f8: 0x8e8200e0  lw          $v0, 0xE0($s4)
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_1a61fc:
    // 0x1a61fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6200:
    // 0x1a6200: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
label_1a6204:
    if (ctx->pc == 0x1A6204u) {
        ctx->pc = 0x1A6208u;
        goto label_1a6208;
    }
    ctx->pc = 0x1A6200u;
    {
        const bool branch_taken_0x1a6200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a6200) {
            ctx->pc = 0x1A6220u;
            return;
        }
    }
    ctx->pc = 0x1A6208u;
label_1a6208:
    // 0x1a6208: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a620c:
    // 0x1a620c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1a620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a6210:
    // 0x1a6210: 0xac4002dc  sw          $zero, 0x2DC($v0)
    ctx->pc = 0x1a6210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 0));
label_1a6214:
    // 0x1a6214: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a6218:
    // 0x1a6218: 0xc06bd80  jal         func_1AF600
label_1a621c:
    if (ctx->pc == 0x1A621Cu) {
        ctx->pc = 0x1A621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6218u;
        // 0x1a621c: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6220u;
        goto label_fallthrough_0x1a6218;
    }
    ctx->pc = 0x1A6218u;
    SET_GPR_U32(ctx, 31, 0x1A6220u);
    ctx->pc = 0x1A621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6218u;
    // 0x1a621c: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1A6218u, 0x1A6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1a6218:
    ctx->pc = 0x1A6220u;
}
