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

// Function: entry_0016eb24
// Address: 0x16eb24 - 0x16eb8c
void entry_0016eb24_0x16eb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eb24_0x16eb24");
#endif

    switch (ctx->pc) {
        case 0x16eb6cu: goto label_16eb6c;
        default: break;
    }

    ctx->pc = 0x16eb24u;

label_16eb24:
    // 0x16eb24: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x16eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_16eb28:
    // 0x16eb28: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x16eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_16eb2c:
    // 0x16eb2c: 0x84420080  lh          $v0, 0x80($v0)
    ctx->pc = 0x16eb2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_16eb30:
    // 0x16eb30: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_16eb34:
    if (ctx->pc == 0x16EB34u) {
        ctx->pc = 0x16EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB30u;
        // 0x16eb34: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB38u;
        goto label_16eb38;
    }
    ctx->pc = 0x16EB30u;
    {
        const bool branch_taken_0x16eb30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB30u;
        // 0x16eb34: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb30) {
            ctx->pc = 0x16EBC4u;
            return;
        }
    }
    ctx->pc = 0x16EB38u;
label_16eb38:
    // 0x16eb38: 0x8f848608  lw          $a0, -0x79F8($gp)
    ctx->pc = 0x16eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936072)));
label_16eb3c:
    // 0x16eb3c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x16eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_16eb40:
    // 0x16eb40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16eb44:
    // 0x16eb44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16eb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16eb48:
    // 0x16eb48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16eb4c:
    // 0x16eb4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16eb50:
    // 0x16eb50: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16eb54:
    // 0x16eb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16eb58:
    // 0x16eb58: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x16eb58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16eb5c:
    // 0x16eb5c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16eb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16eb60:
    // 0x16eb60: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16eb64:
    // 0x16eb64: 0x320f809  jalr        $t9
label_16eb68:
    if (ctx->pc == 0x16EB68u) {
        ctx->pc = 0x16EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB64u;
        // 0x16eb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB6Cu;
        goto label_16eb6c;
    }
    ctx->pc = 0x16EB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16EB6Cu);
        ctx->pc = 0x16EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB64u;
        // 0x16eb68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EB64u, 0x16EB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16EB6Cu;
label_16eb6c:
    // 0x16eb6c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_16eb70:
    if (ctx->pc == 0x16EB70u) {
        ctx->pc = 0x16EB74u;
        goto label_16eb74;
    }
    ctx->pc = 0x16EB6Cu;
    {
        const bool branch_taken_0x16eb6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb6c) {
            ctx->pc = 0x16EBC4u;
            return;
        }
    }
    ctx->pc = 0x16EB74u;
label_16eb74:
    // 0x16eb74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16eb78:
    // 0x16eb78: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x16eb78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16eb7c:
    // 0x16eb7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_16eb80:
    if (ctx->pc == 0x16EB80u) {
        ctx->pc = 0x16EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB7Cu;
        // 0x16eb80: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EB84u;
        goto label_16eb84;
    }
    ctx->pc = 0x16EB7Cu;
    {
        const bool branch_taken_0x16eb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB7Cu;
        // 0x16eb80: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb7c) {
            ctx->pc = 0x16EB8Cu;
            return;
        }
    }
    ctx->pc = 0x16EB84u;
label_16eb84:
    // 0x16eb84: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16eb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_16eb88:
    // 0x16eb88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x16eb8cu;
}
