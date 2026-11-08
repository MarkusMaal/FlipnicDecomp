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

// Function: entry_00112ad4
// Address: 0x112ad4 - 0x112b04
void entry_00112ad4_0x112ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ad4_0x112ad4");
#endif

    switch (ctx->pc) {
        case 0x112afcu: goto label_112afc;
        default: break;
    }

    ctx->pc = 0x112ad4u;

    // 0x112ad4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x112ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x112ad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112adc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112ae0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x112ae4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112ae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112ae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112af0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x112af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x112af4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x112AF4u;
    SET_GPR_U32(ctx, 31, 0x112AFCu);
    ctx->pc = 0x112AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AF4u;
    // 0x112af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x112AF4u, 0x112AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AFCu;
label_112afc:
    // 0x112afc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x112b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x112b04u;
}
