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

// Function: entry_001aa0b4
// Address: 0x1aa0b4 - 0x1aa0ec
void entry_001aa0b4_0x1aa0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa0b4_0x1aa0b4");
#endif

    switch (ctx->pc) {
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0e4u: goto label_1aa0e4;
        default: break;
    }

    ctx->pc = 0x1aa0b4u;

label_1aa0b4:
    // 0x1aa0b4: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1aa0b8:
    // 0x1aa0b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1aa0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1aa0bc:
    // 0x1aa0bc: 0xc06bd9c  jal         func_1AF670
label_1aa0c0:
    if (ctx->pc == 0x1AA0C0u) {
        ctx->pc = 0x1AA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0BCu;
        // 0x1aa0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0C4u;
        goto label_1aa0c4;
    }
    ctx->pc = 0x1AA0BCu;
    SET_GPR_U32(ctx, 31, 0x1AA0C4u);
    ctx->pc = 0x1AA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0BCu;
    // 0x1aa0c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF670u, 0x1AA0BCu, 0x1AA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0C4u;
label_1aa0c4:
    // 0x1aa0c4: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1aa0c8:
    // 0x1aa0c8: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
label_1aa0cc:
    if (ctx->pc == 0x1AA0CCu) {
        ctx->pc = 0x1AA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0C8u;
        // 0x1aa0cc: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0D0u;
        goto label_1aa0d0;
    }
    ctx->pc = 0x1AA0C8u;
    {
        const bool branch_taken_0x1aa0c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0C8u;
        // 0x1aa0cc: 0xa06028f5  sb          $zero, 0x28F5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10485), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0c8) {
            ctx->pc = 0x1AA120u;
            return;
        }
    }
    ctx->pc = 0x1AA0D0u;
label_1aa0d0:
    // 0x1aa0d0: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_1aa0d4:
    // 0x1aa0d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0d8:
    // 0x1aa0d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aa0dc:
    // 0x1aa0dc: 0x320f809  jalr        $t9
label_1aa0e0:
    if (ctx->pc == 0x1AA0E0u) {
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0E4u;
        goto label_1aa0e4;
    }
    ctx->pc = 0x1AA0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA0E4u);
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0DCu, 0x1AA0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0E4u;
label_1aa0e4:
    // 0x1aa0e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa0e8:
    if (ctx->pc == 0x1AA0E8u) {
        ctx->pc = 0x1AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E4u;
        // 0x1aa0e8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0ECu;
        goto label_fallthrough_0x1aa0e4;
    }
    ctx->pc = 0x1AA0E4u;
    {
        const bool branch_taken_0x1aa0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E4u;
        // 0x1aa0e8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0e4) {
            ctx->pc = 0x1AA124u;
            return;
        }
    }
label_fallthrough_0x1aa0e4:
    ctx->pc = 0x1AA0ECu;
}
