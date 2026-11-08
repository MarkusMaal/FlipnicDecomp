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

// Function: entry_001bdbec
// Address: 0x1bdbec - 0x1bdc34
void entry_001bdbec_0x1bdbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdbec_0x1bdbec");
#endif

    switch (ctx->pc) {
        case 0x1bdc10u: goto label_1bdc10;
        default: break;
    }

    ctx->pc = 0x1bdbecu;

    // 0x1bdbec: 0x0  nop
    ctx->pc = 0x1bdbecu;
    // NOP
    // 0x1bdbf0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1bdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1bdbf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bdbf8: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1bdbfc: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1bdc00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdc04: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1bdc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1bdc08: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1BDC08u;
    SET_GPR_U32(ctx, 31, 0x1BDC10u);
    ctx->pc = 0x1BDC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDC08u;
    // 0x1bdc0c: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1BDC08u, 0x1BDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDC10u;
label_1bdc10:
    // 0x1bdc10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bdc14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bdc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bdc18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bdc18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bdc1c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1bdc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1bdc20: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1bdc20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bdc24: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDC24u;
    {
        const bool branch_taken_0x1bdc24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc24) {
            ctx->pc = 0x1BDC34u;
            return;
        }
    }
    ctx->pc = 0x1BDC2Cu;
    // 0x1bdc2c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x1BDC2Cu;
    {
        const bool branch_taken_0x1bdc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC2Cu;
        // 0x1bdc30: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc2c) {
            ctx->pc = 0x1BDA48u;
            return;
        }
    }
    ctx->pc = 0x1BDC34u;
}
