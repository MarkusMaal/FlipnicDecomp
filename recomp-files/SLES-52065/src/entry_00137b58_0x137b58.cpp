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

// Function: entry_00137b58
// Address: 0x137b58 - 0x137bc0
void entry_00137b58_0x137b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137b58_0x137b58");
#endif

    switch (ctx->pc) {
        case 0x137b74u: goto label_137b74;
        default: break;
    }

    ctx->pc = 0x137b58u;

    // 0x137b58: 0x27b30084  addiu       $s3, $sp, 0x84
    ctx->pc = 0x137b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x137b5c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x137b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x137b60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b64: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x137b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x137b68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137b6c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x137B6Cu;
    SET_GPR_U32(ctx, 31, 0x137B74u);
    ctx->pc = 0x137B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137B6Cu;
    // 0x137b70: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x137B6Cu, 0x137B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137B74u;
label_137b74:
    // 0x137b74: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x137b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137b78: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x137b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x137b7c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x137b80: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x137b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x137b84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x137b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x137b88: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x137b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x137b8c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x137b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x137b90: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x137b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x137b94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x137b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x137b98: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x137b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x137b9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x137b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x137ba0: 0x723821  addu        $a3, $v1, $s2
    ctx->pc = 0x137ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x137ba4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x137ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x137ba8: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x137ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x137bac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x137bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x137bb0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x137bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x137bb4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x137bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x137bb8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x137bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x137bbc: 0x0  nop
    ctx->pc = 0x137bbcu;
    // NOP
    ctx->pc = 0x137bc0u;
}
