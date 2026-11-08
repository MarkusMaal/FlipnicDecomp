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

// Function: entry_001a8a40
// Address: 0x1a8a40 - 0x1a8a84
void entry_001a8a40_0x1a8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8a40_0x1a8a40");
#endif

    switch (ctx->pc) {
        case 0x1a8a6cu: goto label_1a8a6c;
        default: break;
    }

    ctx->pc = 0x1a8a40u;

label_1a8a40:
    // 0x1a8a40: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a8a44:
    // 0x1a8a44: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1a8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a8a48:
    // 0x1a8a48: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1a8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1a8a4c:
    // 0x1a8a4c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a8a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a8a50:
    // 0x1a8a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a8a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8a54:
    // 0x1a8a54: 0x8c732cd8  lw          $s3, 0x2CD8($v1)
    ctx->pc = 0x1a8a54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1a8a58:
    // 0x1a8a58: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8a5c:
    // 0x1a8a5c: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x1a8a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a8a60:
    // 0x1a8a60: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1a8a64:
    // 0x1a8a64: 0x320f809  jalr        $t9
label_1a8a68:
    if (ctx->pc == 0x1A8A68u) {
        ctx->pc = 0x1A8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A64u;
        // 0x1a8a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A6Cu;
        goto label_1a8a6c;
    }
    ctx->pc = 0x1A8A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A8A6Cu);
        ctx->pc = 0x1A8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A64u;
        // 0x1a8a68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8A64u, 0x1A8A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8A6Cu;
label_1a8a6c:
    // 0x1a8a6c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1a8a70:
    if (ctx->pc == 0x1A8A70u) {
        ctx->pc = 0x1A8A74u;
        goto label_1a8a74;
    }
    ctx->pc = 0x1A8A6Cu;
    {
        const bool branch_taken_0x1a8a6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8a6c) {
            ctx->pc = 0x1A8A84u;
            return;
        }
    }
    ctx->pc = 0x1A8A74u;
label_1a8a74:
    // 0x1a8a74: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1a8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1a8a78:
    // 0x1a8a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a8a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a8a7c:
    // 0x1a8a7c: 0xc05eed0  jal         func_17BB40
label_1a8a80:
    if (ctx->pc == 0x1A8A80u) {
        ctx->pc = 0x1A8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8A7Cu;
        // 0x1a8a80: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8A84u;
        goto label_fallthrough_0x1a8a7c;
    }
    ctx->pc = 0x1A8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A84u);
    ctx->pc = 0x1A8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8A7Cu;
    // 0x1a8a80: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BB40u, 0x1A8A7Cu, 0x1A8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x1a8a7c:
    ctx->pc = 0x1A8A84u;
}
