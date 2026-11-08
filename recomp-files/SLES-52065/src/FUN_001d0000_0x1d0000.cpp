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

// Function: FUN_001d0000
// Address: 0x1d0000 - 0x1d0090
void FUN_001d0000_0x1d0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0000_0x1d0000");
#endif

    switch (ctx->pc) {
        case 0x1d0018u: goto label_1d0018;
        case 0x1d0020u: goto label_1d0020;
        case 0x1d0028u: goto label_1d0028;
        default: break;
    }

    ctx->pc = 0x1d0000u;

    // 0x1d0000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d000c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d000cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0010: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1D0010u;
    SET_GPR_U32(ctx, 31, 0x1D0018u);
    ctx->pc = 0x1D0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0010u;
    // 0x1d0014: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1D0010u, 0x1D0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0018u;
label_1d0018:
    // 0x1d0018: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1D0018u;
    SET_GPR_U32(ctx, 31, 0x1D0020u);
    ctx->pc = 0x1D001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0018u;
    // 0x1d001c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1D0018u, 0x1D0020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0020u;
label_1d0020:
    // 0x1d0020: 0xc072e58  jal         func_1CB960
    ctx->pc = 0x1D0020u;
    SET_GPR_U32(ctx, 31, 0x1D0028u);
    ctx->pc = 0x1D0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0020u;
    // 0x1d0024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1D0020u, 0x1D0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0028u;
label_1d0028:
    // 0x1d0028: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1d0028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1d002c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D002Cu;
    {
        const bool branch_taken_0x1d002c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D002Cu;
        // 0x1d0030: 0xa2200060  sb          $zero, 0x60($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d002c) {
            ctx->pc = 0x1D0048u;
            goto label_1d0048;
        }
    }
    ctx->pc = 0x1D0034u;
    // 0x1d0034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0038: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0038u;
    {
        const bool branch_taken_0x1d0038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0038u;
        // 0x1d003c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0038) {
            ctx->pc = 0x1D0048u;
            goto label_1d0048;
        }
    }
    ctx->pc = 0x1D0040u;
    // 0x1d0040: 0x1603000b  bne         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0040u;
    {
        const bool branch_taken_0x1d0040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0040) {
            ctx->pc = 0x1D0070u;
            goto label_1d0070;
        }
    }
    ctx->pc = 0x1D0048u;
label_1d0048:
    // 0x1d0048: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0048u;
    {
        const bool branch_taken_0x1d0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0048u;
        // 0x1d004c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0048) {
            ctx->pc = 0x1D0078u;
            goto label_1d0078;
        }
    }
    ctx->pc = 0x1D0050u;
    // 0x1d0050: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0050u;
    {
        const bool branch_taken_0x1d0050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0050) {
            ctx->pc = 0x1D0078u;
            goto label_1d0078;
        }
    }
    ctx->pc = 0x1D0058u;
    // 0x1d0058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d005c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D005Cu;
    {
        const bool branch_taken_0x1d005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d005c) {
            ctx->pc = 0x1D0078u;
            goto label_1d0078;
        }
    }
    ctx->pc = 0x1D0064u;
    // 0x1d0064: 0xa2230060  sb          $v1, 0x60($s1)
    ctx->pc = 0x1d0064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0068u;
    {
        const bool branch_taken_0x1d0068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0068u;
        // 0x1d006c: 0xa2230061  sb          $v1, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0068) {
            ctx->pc = 0x1D007Cu;
            goto label_1d007c;
        }
    }
    ctx->pc = 0x1D0070u;
label_1d0070:
    // 0x1d0070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0070u;
    {
        const bool branch_taken_0x1d0070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0070u;
        // 0x1d0074: 0xa2230061  sb          $v1, 0x61($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0070) {
            ctx->pc = 0x1D007Cu;
            goto label_1d007c;
        }
    }
    ctx->pc = 0x1D0078u;
label_1d0078:
    // 0x1d0078: 0xa2200061  sb          $zero, 0x61($s1)
    ctx->pc = 0x1d0078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 0));
label_1d007c:
    // 0x1d007c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0088: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0088u;
        // 0x1d008c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0090u;
}
