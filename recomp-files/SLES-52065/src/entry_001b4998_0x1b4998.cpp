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

// Function: entry_001b4998
// Address: 0x1b4998 - 0x1b49e4
void entry_001b4998_0x1b4998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4998_0x1b4998");
#endif

    switch (ctx->pc) {
        case 0x1b49c4u: goto label_1b49c4;
        default: break;
    }

    ctx->pc = 0x1b4998u;

    // 0x1b4998: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x1b4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1b499c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b499cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b49a0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1b49a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b49a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b49a8: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x1b49a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
    // 0x1b49ac: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1b49b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1b49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b49b4: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1b49b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b49b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b49bc: 0xc06d198  jal         func_1B4660
    ctx->pc = 0x1B49BCu;
    SET_GPR_U32(ctx, 31, 0x1B49C4u);
    ctx->pc = 0x1B49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49BCu;
    // 0x1b49c0: 0x39900  sll         $s3, $v1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4660u, 0x1B49BCu, 0x1B49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49C4u;
label_1b49c4:
    // 0x1b49c4: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B49C4u;
    {
        const bool branch_taken_0x1b49c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49C4u;
        // 0x1b49c8: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49c4) {
            ctx->pc = 0x1B49E4u;
            return;
        }
    }
    ctx->pc = 0x1B49CCu;
    // 0x1b49cc: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b49d0: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b49d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b49d4: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b49d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b49d8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1b49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1b49dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b49dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b49e0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1b49e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1b49e4u;
}
