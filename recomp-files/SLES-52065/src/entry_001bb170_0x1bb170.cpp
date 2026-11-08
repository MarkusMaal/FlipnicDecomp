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

// Function: entry_001bb170
// Address: 0x1bb170 - 0x1bb1d4
void entry_001bb170_0x1bb170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb170_0x1bb170");
#endif

    switch (ctx->pc) {
        case 0x1bb19cu: goto label_1bb19c;
        case 0x1bb1bcu: goto label_1bb1bc;
        default: break;
    }

    ctx->pc = 0x1bb170u;

    // 0x1bb170: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BB170u;
    {
        const bool branch_taken_0x1bb170 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb170) {
            ctx->pc = 0x1BB1D4u;
            return;
        }
    }
    ctx->pc = 0x1BB178u;
    // 0x1bb178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb17c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1bb17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bb180: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1bb184: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bb184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bb188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb18c: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1bb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1bb190: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1bb190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1bb194: 0xc04891c  jal         func_122470
    ctx->pc = 0x1BB194u;
    SET_GPR_U32(ctx, 31, 0x1BB19Cu);
    ctx->pc = 0x1BB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB194u;
    // 0x1bb198: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122470u, 0x1BB194u, 0x1BB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB19Cu;
label_1bb19c:
    // 0x1bb19c: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1bb19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1bb1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb1a4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bb1a8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1bb1ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1bb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bb1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb1b4: 0xc048908  jal         func_122420
    ctx->pc = 0x1BB1B4u;
    SET_GPR_U32(ctx, 31, 0x1BB1BCu);
    ctx->pc = 0x1BB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1B4u;
    // 0x1bb1b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122420u, 0x1BB1B4u, 0x1BB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1BCu;
label_1bb1bc:
    // 0x1bb1bc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1bb1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1bb1c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb1c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bb1c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1bb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bb1cc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BB1CCu;
    SET_GPR_U32(ctx, 31, 0x1BB1D4u);
    ctx->pc = 0x1BB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1CCu;
    // 0x1bb1d0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BB1CCu, 0x1BB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1D4u;
}
