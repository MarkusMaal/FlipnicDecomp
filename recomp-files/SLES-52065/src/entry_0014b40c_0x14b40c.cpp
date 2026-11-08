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

// Function: entry_0014b40c
// Address: 0x14b40c - 0x14b454
void entry_0014b40c_0x14b40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b40c_0x14b40c");
#endif

    switch (ctx->pc) {
        case 0x14b430u: goto label_14b430;
        default: break;
    }

    ctx->pc = 0x14b40cu;

    // 0x14b40c: 0x0  nop
    ctx->pc = 0x14b40cu;
    // NOP
    // 0x14b410: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x14b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14b414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b418: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x14b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x14b41c: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x14b420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b424: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x14b424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x14b428: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x14B428u;
    SET_GPR_U32(ctx, 31, 0x14B430u);
    ctx->pc = 0x14B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B428u;
    // 0x14b42c: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x14B428u, 0x14B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B430u;
label_14b430:
    // 0x14b430: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14b434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14b438: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14b438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14b43c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14b440: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x14b440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14b444: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B444u;
    {
        const bool branch_taken_0x14b444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b444) {
            ctx->pc = 0x14B454u;
            return;
        }
    }
    ctx->pc = 0x14B44Cu;
    // 0x14b44c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x14B44Cu;
    {
        const bool branch_taken_0x14b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B44Cu;
        // 0x14b450: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b44c) {
            ctx->pc = 0x14B268u;
            return;
        }
    }
    ctx->pc = 0x14B454u;
}
