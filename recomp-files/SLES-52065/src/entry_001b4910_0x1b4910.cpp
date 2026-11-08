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

// Function: entry_001b4910
// Address: 0x1b4910 - 0x1b496c
void entry_001b4910_0x1b4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4910_0x1b4910");
#endif

    switch (ctx->pc) {
        case 0x1b4940u: goto label_1b4940;
        default: break;
    }

    ctx->pc = 0x1b4910u;

    // 0x1b4910: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1b4910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1b4914: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b4918: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1b4918u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b491c: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B491Cu;
    {
        const bool branch_taken_0x1b491c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b491c) {
            ctx->pc = 0x1B49FCu;
            return;
        }
    }
    ctx->pc = 0x1B4924u;
    // 0x1b4924: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b4928: 0x27b40074  addiu       $s4, $sp, 0x74
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1b492c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b4930: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4930u;
    {
        const bool branch_taken_0x1b4930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4930) {
            ctx->pc = 0x1B496Cu;
            return;
        }
    }
    ctx->pc = 0x1B4938u;
    // 0x1b4938: 0xc06d174  jal         func_1B45D0
    ctx->pc = 0x1B4938u;
    SET_GPR_U32(ctx, 31, 0x1B4940u);
    ctx->pc = 0x1B493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4938u;
    // 0x1b493c: 0x8ea40020  lw          $a0, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B45D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B45D0u, 0x1B4938u, 0x1B4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4940u;
label_1b4940:
    // 0x1b4940: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b4944: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b4948: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b4948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b494c: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b494cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b4950: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1b4950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1b4954: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b4958: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b495c: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1b495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1b4960: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1b4960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1b4964: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b4964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4968: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1b4968u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1b496cu;
}
