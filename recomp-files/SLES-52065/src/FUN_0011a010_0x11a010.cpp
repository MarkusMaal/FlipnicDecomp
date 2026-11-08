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

// Function: FUN_0011a010
// Address: 0x11a010 - 0x11a100
void FUN_0011a010_0x11a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a010_0x11a010");
#endif

    switch (ctx->pc) {
        case 0x11a034u: goto label_11a034;
        case 0x11a068u: goto label_11a068;
        case 0x11a074u: goto label_11a074;
        case 0x11a098u: goto label_11a098;
        default: break;
    }

    ctx->pc = 0x11a010u;

    // 0x11a010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11a01c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11a020: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11a020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a02c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a030: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11a030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11a034:
    // 0x11a034: 0x8f8283f0  lw          $v0, -0x7C10($gp)
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935536)));
    // 0x11a038: 0x0  nop
    ctx->pc = 0x11a038u;
    // NOP
    // 0x11a03c: 0x0  nop
    ctx->pc = 0x11a03cu;
    // NOP
    // 0x11a040: 0x0  nop
    ctx->pc = 0x11a040u;
    // NOP
    // 0x11a044: 0x0  nop
    ctx->pc = 0x11a044u;
    // NOP
    // 0x11a048: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A048u;
    {
        const bool branch_taken_0x11a048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a048) {
            ctx->pc = 0x11A034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a034;
        }
    }
    ctx->pc = 0x11A050u;
    // 0x11a050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a054: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a058: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a05c: 0xaf8083f0  sw          $zero, -0x7C10($gp)
    ctx->pc = 0x11a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 0));
    // 0x11a060: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11A060u;
    SET_GPR_U32(ctx, 31, 0x11A068u);
    ctx->pc = 0x11A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A060u;
    // 0x11a064: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11A060u, 0x11A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A068u;
label_11a068:
    // 0x11a068: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x11a068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11a06c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x11A06Cu;
    {
        const bool branch_taken_0x11a06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a06c) {
            ctx->pc = 0x11A0A4u;
            goto label_11a0a4;
        }
    }
    ctx->pc = 0x11A074u;
label_11a074:
    // 0x11a074: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A074u;
    {
        const bool branch_taken_0x11a074 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11a074) {
            ctx->pc = 0x11A084u;
            goto label_11a084;
        }
    }
    ctx->pc = 0x11A07Cu;
    // 0x11a07c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x11a07cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11a080: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x11a080u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11a084:
    // 0x11a084: 0x0  nop
    ctx->pc = 0x11a084u;
    // NOP
    // 0x11a088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a08c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a090: 0xc07bf80  jal         func_1EFE00
    ctx->pc = 0x11A090u;
    SET_GPR_U32(ctx, 31, 0x11A098u);
    ctx->pc = 0x11A094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A090u;
    // 0x11a094: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFE00u, 0x11A090u, 0x11A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A098u;
label_11a098:
    // 0x11a098: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x11a098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x11a09c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x11A09Cu;
    {
        const bool branch_taken_0x11a09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a09c) {
            ctx->pc = 0x11A074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a074;
        }
    }
    ctx->pc = 0x11A0A4u;
label_11a0a4:
    // 0x11a0a4: 0x0  nop
    ctx->pc = 0x11a0a4u;
    // NOP
    // 0x11a0a8: 0x8f8283e0  lw          $v0, -0x7C20($gp)
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935520)));
    // 0x11a0ac: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A0ACu;
    {
        const bool branch_taken_0x11a0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x11A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0ACu;
        // 0x11a0b0: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0ac) {
            ctx->pc = 0x11A0CCu;
            goto label_11a0cc;
        }
    }
    ctx->pc = 0x11A0B4u;
    // 0x11a0b4: 0xdf8283e8  ld          $v0, -0x7C18($gp)
    ctx->pc = 0x11a0b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935528)));
    // 0x11a0b8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x11a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11a0bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11a0bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11a0c0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x11a0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11a0c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A0C4u;
    {
        const bool branch_taken_0x11a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0C4u;
        // 0x11a0c8: 0xff8283e8  sd          $v0, -0x7C18($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0c4) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x11A0CCu;
label_11a0cc:
    // 0x11a0cc: 0xaf9183e0  sw          $s1, -0x7C20($gp)
    ctx->pc = 0x11a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 17));
    // 0x11a0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11a0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a0d4: 0xff8283e8  sd          $v0, -0x7C18($gp)
    ctx->pc = 0x11a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 2));
label_11a0d8:
    // 0x11a0d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a0dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0e0: 0xaf8383f0  sw          $v1, -0x7C10($gp)
    ctx->pc = 0x11a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935536), GPR_U32(ctx, 3));
    // 0x11a0e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a0e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11a0e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a0ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11a0ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A0F8u;
        // 0x11a0fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A100u;
}
