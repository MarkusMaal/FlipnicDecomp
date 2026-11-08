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

// Function: entry_0016dfec
// Address: 0x16dfec - 0x16e048
void entry_0016dfec_0x16dfec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dfec_0x16dfec");
#endif

    switch (ctx->pc) {
        case 0x16e024u: goto label_16e024;
        default: break;
    }

    ctx->pc = 0x16dfecu;

    // 0x16dfec: 0x0  nop
    ctx->pc = 0x16dfecu;
    // NOP
    // 0x16dff0: 0x8f858608  lw          $a1, -0x79F8($gp)
    ctx->pc = 0x16dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x16dff4: 0x8f8483a8  lw          $a0, -0x7C58($gp)
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x16dff8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16dffc: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16e000: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16e004: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16e004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16e008: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e00c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x16e010: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16e014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e018: 0x84450080  lh          $a1, 0x80($v0)
    ctx->pc = 0x16e018u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16e01c: 0xc0466c4  jal         func_119B10
    ctx->pc = 0x16E01Cu;
    SET_GPR_U32(ctx, 31, 0x16E024u);
    ctx->pc = 0x16E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E01Cu;
    // 0x16e020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B10u, 0x16E01Cu, 0x16E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E024u;
label_16e024:
    // 0x16e024: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x16e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16e028: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x16e028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16e02c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16e030: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e034: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16e034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x16e038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16e03c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x16e03cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e040: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x16e040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x16e044: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16e044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x16e048u;
}
